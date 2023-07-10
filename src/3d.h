static Janet cfun_DrawLine3D(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 start = jaylib_getvec3(argv, 0);
    Vector3 end = jaylib_getvec3(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawLine3D(start, end, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCircle3D(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 center = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    Vector3 axis = jaylib_getvec3(argv, 2);
    float angle = (float) janet_getnumber(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawCircle3D(center, radius, axis, angle, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCube(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 pos = jaylib_getvec3(argv, 0);
    float width = (float) janet_getnumber(argv, 1);
    float height = (float) janet_getnumber(argv, 2);
    float length = (float) janet_getnumber(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawCube(pos, width, height, length, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeTexture(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Texture2D *texture = jaylib_gettexture2d(argv, 0);
    Vector3 position = jaylib_getvec3(argv, 1);
    float width = (float) janet_getnumber(argv, 2);
    float height = (float) janet_getnumber(argv, 3);
    float length = (float) janet_getnumber(argv, 4);
    Color color = jaylib_getcolor(argv, 5);
    DrawCubeTexture(*texture, position, width, height, length, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawGizmo(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Vector3 position = jaylib_getvec3(argv, 0);
    DrawGizmo(position);
    return janet_wrap_nil();
}

static Janet cfun_DrawGrid(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    int slices = janet_getinteger(argv, 0);
    float spacing = (float) janet_getnumber(argv, 1);
    DrawGrid(slices, spacing);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeV(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 position = jaylib_getvec3(argv, 0);
    Vector3 size = jaylib_getvec3(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawCubeV(position, size, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeWires(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 position = jaylib_getvec3(argv, 0);
    float width = (float) janet_getnumber(argv, 1);
    float height = (float) janet_getnumber(argv, 2);
    float length = (float) janet_getnumber(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawCubeWires(position, width, height, length, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCubeWiresV(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 position = jaylib_getvec3(argv, 0);
    Vector3 size = jaylib_getvec3(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawCubeWiresV(position, size, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawSphere(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 centerPos = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawSphere(centerPos, radius, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawSphereEx(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 position = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    int rings = janet_getinteger(argv, 2);
    int slices = janet_getinteger(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawSphereEx(position, radius, rings, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawSphereWires(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Vector3 centerPos = jaylib_getvec3(argv, 0);
    float radius = (float) janet_getnumber(argv, 1);
    int rings = janet_getinteger(argv, 2);
    int slices = janet_getinteger(argv, 3);
    Color color = jaylib_getcolor(argv, 4);
    DrawSphereWires(centerPos, radius, rings, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCylinder(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Vector3 position = jaylib_getvec3(argv, 0);
    float radiusTop = (float) janet_getnumber(argv, 1);
    float radiusBottom = (float) janet_getnumber(argv, 2);
    float height = (float) janet_getnumber(argv, 3);
    int slices = janet_getinteger(argv, 4);
    Color color = jaylib_getcolor(argv, 5);
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawCylinderWires(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Vector3 position = jaylib_getvec3(argv, 0);
    float radiusTop = (float) janet_getnumber(argv, 1);
    float radiusBottom = (float) janet_getnumber(argv, 2);
    float height = (float) janet_getnumber(argv, 3);
    int slices = janet_getinteger(argv, 4);
    Color color = jaylib_getcolor(argv, 5);
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawPlane(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Vector3 centerPos = jaylib_getvec3(argv, 0);
    Vector2 size = jaylib_getvec2(argv, 1);
    Color color = jaylib_getcolor(argv, 2);
    DrawPlane(centerPos, size, color);
    return janet_wrap_nil();
}

static Janet cfun_DrawRay(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Ray ray = jaylib_getray(argv, 0);
    Color color = jaylib_getcolor(argv, 1);
    DrawRay(ray, color);
    return janet_wrap_nil();
}

static Janet cfun_LoadModel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    const char *fileName = jaylib_getcstring(argv, 0);
    Model *model = janet_abstract(&AT_Model, sizeof(Model));
    *model = LoadModel(fileName);
    return janet_wrap_abstract(model);
}

static Janet cfun_LoadModelFromMesh(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Mesh *mesh = jaylib_getmesh(argv, 0);
    Model *model = janet_abstract(&AT_Model, sizeof(Model));
    *model = LoadModelFromMesh(*mesh);
    return janet_wrap_abstract(model);
}
static Janet cfun_UnloadModel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Model *model = jaylib_getmodel(argv, 0);
    UnloadModel(*model);
    return janet_wrap_nil();
}

static Janet cfun_LoadMeshes(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    const char *fileName = jaylib_getcstring(argv, 0);
    int meshCount = janet_getinteger(argv, 1);
    Mesh *mesh = janet_abstract(&AT_Mesh, sizeof(Mesh));
    mesh = LoadMeshes(fileName, &meshCount);
    return janet_wrap_abstract(mesh);
}

static Janet cfun_ExportMesh(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Mesh *mesh = jaylib_getmesh(argv, 0);
    const char *fileName = jaylib_getcstring(argv, 1);
    ExportMesh(*mesh, fileName);
    return janet_wrap_nil();
}

static Janet cfun_UnloadMesh(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Mesh *mesh = jaylib_getmesh(argv, 0);
    UnloadMesh(*mesh);
    return janet_wrap_nil();
}

static Janet cfun_DrawModel(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Model *model = jaylib_getmodel(argv, 0);
    Vector3 position = jaylib_getvec3(argv, 1);
    float scale = janet_getnumber(argv, 2);
    Color tint = jaylib_getcolor(argv, 3);
    DrawModel(*model, position, scale, tint);
    return janet_wrap_nil();
}

static Janet cfun_DrawModelEx(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 6);
    Model *model = jaylib_getmodel(argv, 0);
    Vector3 position = jaylib_getvec3(argv, 1);
    Vector3 rotationAxis = jaylib_getvec3(argv, 2);
    float rotationAngle = janet_getnumber(argv, 3);
    Vector3 scale = jaylib_getvec3(argv, 4);
    Color tint = jaylib_getcolor(argv, 5);
    DrawModelEx(*model, position, rotationAxis, rotationAngle, scale, tint);
    return janet_wrap_nil();
}

static Janet cfun_SetModelTexture(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Model *model = jaylib_getmodel(argv, 0);
    int materialslot = janet_getinteger(argv, 1);
    int maptype = jaylib_getmaptype(argv, 2);
    Texture2D *texture = jaylib_gettexture2d(argv, 3);
    SetMaterialTexture(&(model->materials[materialslot]), maptype, *texture);
    return janet_wrap_abstract(model);
}

static Janet cfun_SetMaterialTexture(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Material *material = janet_abstract(&AT_Material, sizeof(Material));
    material = jaylib_getmaterial(argv, 0);
    int maptype = jaylib_getmaptype(argv, 1);
    Texture2D *texture = jaylib_gettexture2d(argv, 2);
    SetMaterialTexture(material, maptype, *texture);
    return janet_wrap_abstract(material);
}

static Janet cfun_LoadMaterials(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    const char *fileName = jaylib_getcstring(argv, 0);
    int materialCount;
    /* Do we need to free this/these? */
    Material *results = LoadMaterials(fileName, &materialCount);
    JanetArray *array = janet_array(0);
    for (int i = 0; i < materialCount; i++) {
        janet_array_push(array, janet_wrap_abstract(&results[i]));
    }
    return janet_wrap_array(results);
}

static Janet cfun_LoadMaterialDefault(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Material *material = janet_abstract(&AT_Material, sizeof(Material));
    *material = LoadMaterialDefault();
    return janet_wrap_abstract(material);
}

static Janet cfun_UnloadMaterial(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Material *material = jaylib_getmaterial(argv, 0);
    UnloadMaterial(*material);
    return janet_wrap_nil();
}

// Shader loading/unloading functions
static Janet cfun_LoadText(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    const char *fileName = jaylib_getcstring(argv, 0);
    return janet_cstringv(LoadText(fileName));
}

static Janet cfun_LoadShader(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    const char *vsFileName = janet_getcstring(argv, 0);
    const char *fsFileName = janet_getcstring(argv, 1);
    Shader *shader = janet_abstract(&AT_Shader, sizeof(Shader));
    *shader = LoadShader(vsFileName, fsFileName);
    return janet_wrap_abstract(shader);
}
static Janet cfun_LoadShaderCode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    const char *vsCode = janet_getcstring(argv, 0);
    const char *fsCode = janet_getcstring(argv, 1);
    Shader *shader = janet_abstract(&AT_Shader, sizeof(Shader));
    *shader = LoadShaderCode(vsCode, fsCode);
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
    *shader = GetShaderDefault();
    return janet_wrap_abstract(shader);
}
static Janet cfun_GetTextureDefault(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Texture2D *texture = janet_abstract(&AT_Texture2D, sizeof(Texture2D));
    *texture = GetTextureDefault();
    return janet_wrap_abstract(texture);
}

// Shader configuration functions
static Janet cfun_GetShaderLocation(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    Shader *shader = jaylib_getshader(argv, 0);
    const char *uniformName = janet_getcstring(argv, 1);
    int result = GetShaderLocation(*shader, uniformName);
    return janet_wrap_integer(result);
}

///////////////////////////////////////////////////////////////////////
static Janet cfun_SetShaderValue(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    Shader *shader = jaylib_getshader(argv, 0);
    int uniformLoc = janet_getinteger(argv, 1);
    //const void *value = janet_getinteger(argv, 2);
    int uniformType = janet_getinteger(argv, 3);
    //SetShaderValue(*shader, int uniformLoc, const void *value, int uniformType);
    return janet_wrap_nil();
}
static Janet cfun_SetShaderValueV(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 5);
    Shader *shader = jaylib_getshader(argv, 0);
    int uniformLoc = janet_getinteger(argv, 1);
    //const void *value = janet_getinteger(argv, 2);
    int uniformType = janet_getinteger(argv, 3);
    int count = janet_getinteger(argv, 4);
    //SetShaderValueV(Shader shader, int uniformLoc, const void *value, int uniformType, int count);
    return janet_wrap_nil();
}
///////////////////////////////////////////////////////////////////////

static Janet cfun_SetShaderValueMatrix(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Shader *shader = jaylib_getshader(argv, 0);
    int uniformLoc = janet_getinteger(argv, 1);
    Matrix *mat = jaylib_getmatrix(argv, 2);
    SetShaderValueMatrix(*shader, uniformLoc, *mat);
    return janet_wrap_nil();
}
static Janet cfun_SetShaderValueTexture(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 3);
    Shader *shader = jaylib_getshader(argv, 0);
    int uniformLoc = janet_getinteger(argv, 1);
    Texture2D *texture = jaylib_gettexture2d(argv, 2);
    SetShaderValueTexture(*shader, uniformLoc, *texture);
    return janet_wrap_nil();
}
static Janet cfun_SetMatrixProjection(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Matrix *proj = jaylib_getmatrix(argv, 0);
    SetMatrixProjection(*proj);
    return janet_wrap_nil();
}
static Janet cfun_SetMatrixModelview(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Matrix *view = jaylib_getmatrix(argv, 0);
    SetMatrixModelview(*view);
    return janet_wrap_nil();
}
static Janet cfun_GetMatrixModelview(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    Matrix *matrix = janet_abstract(&AT_Matrix, sizeof(Matrix));
    *matrix = GetMatrixModelview();
    return janet_wrap_abstract(matrix);
}

// Shading begin/end functions
static Janet cfun_BeginShaderMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Shader *shader = jaylib_getshader(argv, 0);
    BeginShaderMode(*shader);
    return janet_wrap_nil();
}
static Janet cfun_EndShaderMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    EndShaderMode();
    return janet_wrap_nil();
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
static Janet cfun_BeginScissorMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 4);
    int x = janet_getinteger(argv, 0);
    int y = janet_getinteger(argv, 1);
    int width = janet_getinteger(argv, 2);
    int height = janet_getinteger(argv, 3);
    BeginScissorMode(x, y, width, height);
    return janet_wrap_nil();
}
static Janet cfun_EndScissorMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    EndScissorMode();
    return janet_wrap_nil();
}

// VR control functions
static Janet cfun_InitVrSimulator(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    InitVrSimulator();
    return janet_wrap_nil();
}

static Janet cfun_CloseVrSimulator(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    CloseVrSimulator();
    return janet_wrap_nil();
}

static Janet cfun_UpdateVrTracking(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 1);
    Camera3D *camera = jaylib_getcamera3d(argv, 0);
    UpdateVrTracking(camera);
    return janet_wrap_nil();
}

static Janet cfun_SetVrConfiguration(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 2);
    VrDeviceInfo *info = jaylib_getvrdeviceinfo(argv, 0);
    Shader *distortion = jaylib_getshader(argv, 1);
    SetVrConfiguration(*info, *distortion);
    return janet_wrap_nil();
}

static Janet cfun_IsVrSimulatorReady(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    return janet_wrap_boolean(IsVrSimulatorReady());
}

static Janet cfun_ToggleVrMode(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    ToggleVrMode();
    return janet_wrap_nil();
}

static Janet cfun_BeginVrDrawing(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    BeginVrDrawing();
    return janet_wrap_nil();
}

static Janet cfun_EndVrDrawing(int32_t argc, Janet *argv) {
    janet_fixarity(argc, 0);
    EndVrDrawing();
    return janet_wrap_nil();
}

static JanetReg threed_cfuns[] = {
    {"draw-line-3d", cfun_DrawLine3D, NULL},
    {"draw-circle-3d", cfun_DrawCircle3D, NULL},
    {"draw-cube", cfun_DrawCube, NULL},
    {"draw-cube-v", cfun_DrawCubeV, NULL},
    {"draw-cube-wires", cfun_DrawCubeWires, NULL},
    {"draw-cube-wires-v", cfun_DrawCubeWiresV, NULL},
    {"draw-cube-texture", cfun_DrawCubeTexture, NULL},
    {"draw-gizmo", cfun_DrawGizmo, NULL},
    {"draw-sphere", cfun_DrawSphere, NULL},
    {"draw-sphere-ex", cfun_DrawSphereEx, NULL},
    {"draw-sphere-wires", cfun_DrawSphereWires, NULL},
    {"draw-cylinder", cfun_DrawCylinder, NULL},
    {"draw-cylinder-wires", cfun_DrawCylinderWires, NULL},
    {"draw-plane", cfun_DrawPlane, NULL},
    {"draw-ray", cfun_DrawRay, NULL},
    
    // Model loading/unloading functions
    {"load-model", cfun_LoadModel, NULL},
    {"load-model-from-mesh", cfun_LoadModelFromMesh, NULL},
    {"unload-model", cfun_UnloadModel, NULL},
    // Mesh loading/unloading functions
    {"load-meshes", cfun_LoadMeshes, NULL},
    {"export-mesh", cfun_ExportMesh, NULL},
    {"unload-mesh", cfun_UnloadMesh, NULL},
    // Material loading/unloading functions
    {"load-materials", cfun_LoadMaterials, NULL},
    {"load-material-default", cfun_LoadMaterialDefault, NULL},
    {"unload-material", cfun_UnloadMaterial, NULL},

    {"set-model-texture", cfun_SetModelTexture, NULL},
    {"set-material-texture", cfun_SetMaterialTexture, NULL},
    // Model animations loading/unloading functions
    // Mesh generation functions
    // Mesh manipulation functions
    // Model drawing functions
    {"draw-model", cfun_DrawModel, NULL},
    {"draw-model-ex", cfun_DrawModelEx, NULL},
    // Shader loading/unloading functions
    {"load-text", *cfun_LoadText, NULL},
    {"load-shader", cfun_LoadShader, NULL},
    {"load-shader-code", cfun_LoadShaderCode, NULL},
    {"unload-shader", cfun_UnloadShader, NULL},

    {"get-shader-default", cfun_GetShaderDefault, NULL},
    {"get-texture-default", cfun_GetTextureDefault, NULL},

    // Shader configuration functions
    {"get-shader-location", cfun_GetShaderLocation, NULL},
    //{"set-shader-value", cfun_SetShaderValue, NULL},
    //{"set-shader-value-v", cfun_SetShaderValueV, NULL},
    {"set-shader-value-matrix", cfun_SetShaderValueMatrix, NULL},
    {"set-shader-value-texture", cfun_SetShaderValueTexture, NULL},
    {"set-matrix-projection", cfun_SetMatrixProjection, NULL},
    {"set-matrix-model-view", cfun_SetMatrixModelview, NULL},
    {"get-matrix-model-view", cfun_GetMatrixModelview, NULL},

    // Shading begin/end functions
    {"begin-shader-mode", cfun_BeginShaderMode, NULL},
    {"end-shader-mode", cfun_EndShaderMode, NULL},
    {"begin-blend-mode", cfun_BeginBlendMode, NULL},
    {"end-blend-mode", cfun_EndBlendMode, NULL},
    {"begin-scissor-mode", cfun_BeginScissorMode, NULL},
    {"end-scissor-mode", cfun_EndScissorMode, NULL},

    // VR control functions
    {"init-vr-simulator", cfun_InitVrSimulator, NULL},
    {"close-vr-simulator", cfun_CloseVrSimulator, NULL},
    {"update-vr-tracking", cfun_UpdateVrTracking, NULL},
    {"set-vr-configuration", cfun_SetVrConfiguration, NULL},
    {"is-vr-simulator-ready", cfun_IsVrSimulatorReady, NULL},
    {"toggle-vr-mode", cfun_ToggleVrMode, NULL},
    {"begin-vr-drawing", cfun_BeginVrDrawing, NULL},
    {"end-vr-drawing", cfun_EndVrDrawing, NULL},
    {"draw-grid", cfun_DrawGrid, NULL},

    {NULL, NULL, NULL}
};
