static Janet cfun_LoadShader(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    const char *vertexShaderFileName;
    const char *fragmentShaderFileName;
    if (janet_checktype(argv[0], JANET_NIL)) {
        vertexShaderFileName = NULL;
    } else {
        vertexShaderFileName = janet_getcstring(argv, 0);
    }
    if (janet_checktype(argv[1], JANET_NIL)) {
        fragmentShaderFileName = NULL;
    } else {
        fragmentShaderFileName = janet_getcstring(argv, 1);
    }
    Shader *shader = janet_abstract(&AT_Shader, sizeof(Shader));
    *shader = LoadShader(vertexShaderFileName, fragmentShaderFileName);
    return janet_wrap_abstract(shader);
}


static Janet cfun_LoadShaderCode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    const char *vsCode = janet_getcstring(argv, 0);
    const char *fsCode = janet_getcstring(argv, 1);
    Shader *shader = janet_abstract(&AT_Shader, sizeof(Shader));
    shader->id = rlLoadShaderCode(vsCode, fsCode);
    shader->locs = rlGetShaderLocsDefault();
    return janet_wrap_abstract(shader);
}

static Janet cfun_UnloadShader(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Shader *shader = jaylib_getshader(argv, 0);
    UnloadShader(*shader);
    return janet_wrap_nil();
}

static Janet cfun_GetShaderDefault(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Shader *shader = janet_abstract(&AT_Shader, sizeof(Shader));
    shader->id = rlGetShaderIdDefault();
    shader->locs = rlGetShaderLocsDefault();
    return janet_wrap_abstract(shader);
}
static Janet cfun_GetTextureDefault(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Texture2D *texture = janet_abstract(&AT_Texture2D, sizeof(Texture2D));
    texture->id = rlGetTextureIdDefault();
    return janet_wrap_abstract(texture);
}


static Janet cfun_BeginShaderMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Shader *shader = jaylib_getshader(argv, 0);
    BeginShaderMode(*shader);
    return janet_wrap_nil();
}

static Janet cfun_EndShaderMode(int32_t argc, Janet *argv) {
    (void) argv;
    janet_fixarity(argc, 0);
    EndShaderMode();
    return janet_wrap_nil();
}

static Janet cfun_GetShaderLocation(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Shader *shader = jaylib_getshader(argv, 0);
    const char *uniformName = janet_getcstring(argv, 1);
    int locIndex = GetShaderLocation(*shader, uniformName);
    return janet_wrap_integer(locIndex);
}

static Janet cfun_SetShaderValue(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Shader *shader = jaylib_getshader(argv, 0);
    int locIndex = janet_getinteger(argv, 1);
    int uniformType = jaylib_getuniformtype(argv, 3);
    switch (uniformType) {
        case SHADER_UNIFORM_FLOAT:
        {
            float valueFloat = (float) janet_getnumber(argv, 2);
            SetShaderValue(*shader, locIndex, (const void*) &valueFloat, uniformType);
            break;
        }
        case SHADER_UNIFORM_INT:
        {
            int valueInt = janet_getinteger(argv, 2);
            SetShaderValue(*shader, locIndex, (const void*) &valueInt, uniformType);
            break;
        }
        case SHADER_UNIFORM_VEC2:
        {
            Vector2 valueVec2 = jaylib_getvec2(argv, 2);
            SetShaderValue(*shader, locIndex, (const void*) &valueVec2, uniformType);
            break;
        }
        case SHADER_UNIFORM_VEC3:
        {
            Vector3 valueVec3 = jaylib_getvec3(argv, 2);
            SetShaderValue(*shader, locIndex, (const void*) &valueVec3, uniformType);
            break;
        }
        case SHADER_UNIFORM_VEC4:
        {
            Vector4 valueVec4 = jaylib_getvec4(argv, 2);
            SetShaderValue(*shader, locIndex, (const void*) &valueVec4, uniformType);
            break;
        }
        case SHADER_UNIFORM_SAMPLER2D:
        {
            Texture2D *texture = jaylib_gettexture2d(argv, 2);
            SetShaderValueTexture(*shader, locIndex, *texture);
            break;
        }
        default:
            janet_panicf("unknown uniform type %d", uniformType);
            break;
    }
    return janet_wrap_nil();
}

static Janet cfun_SetMatrixProjection(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Matrix proj = jaylib_getmatrix(argv, 0);
    rlSetMatrixProjection(proj);
    return janet_wrap_nil();
}
static Janet cfun_SetMatrixModelview(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Matrix view = jaylib_getmatrix(argv, 0);
    rlSetMatrixModelview(view);
    return janet_wrap_nil();
}
static Janet cfun_GetMatrixModelview(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Matrix matrix = rlGetMatrixModelview();
    return jaylib_wrap_matrix(matrix);
}

static Janet cfun_BeginBlendMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    int mode = janet_getinteger(argv, 0);
    BeginBlendMode(mode);
    return janet_wrap_nil();
}
static Janet cfun_EndBlendMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    EndBlendMode();
    return janet_wrap_nil();
}

static JanetReg shader_cfuns[] = {
    {"load-shader", cfun_LoadShader,
        "(loader-shader vertex-shader fragment-shader)\n\n"
        "Load shader from files and bind default locations"
    },
    {"unload-shader", cfun_UnloadShader,
        "(unloader-shader shader)\n\n"
        "Unload shader from GPU memory (VRAM)"
    },
    {"begin-shader-mode", cfun_BeginShaderMode,
        "(begin-shader-mode shader)\n\n"
        "Begin custom shader drawing"
    },
    {"end-shader-mode", cfun_EndShaderMode,
        "(end-shader-mode)\n\n"
        "End custom shader drawing (use default shader)"
    },
    {"get-shader-location", cfun_GetShaderLocation,
        "(set-shader-location shader uniform-name)\n\n"
        "Get shader uniform location"
    },
    {"set-shader-value", cfun_SetShaderValue,
        "(set-shader-value shader loc-index value uniform-type)\n\n"
        "Set shader uniform value"
    },
        // Shader loading/unloading functions
    {"load-shader-code", cfun_LoadShaderCode, NULL},

    {"get-shader-default", cfun_GetShaderDefault, NULL},
    {"get-texture-default", cfun_GetTextureDefault, NULL},

    {"set-matrix-projection", cfun_SetMatrixProjection, NULL},
    {"set-matrix-model-view", cfun_SetMatrixModelview, NULL},
    {"get-matrix-model-view", cfun_GetMatrixModelview, NULL},

    // Shading begin/end functions
    {"begin-blend-mode", cfun_BeginBlendMode, NULL},
    {"end-blend-mode", cfun_EndBlendMode, NULL},
    {"begin-scissor-mode", cfun_BeginScissorMode, NULL},
    {"end-scissor-mode", cfun_EndScissorMode, NULL},
    {NULL, NULL, NULL}
};
