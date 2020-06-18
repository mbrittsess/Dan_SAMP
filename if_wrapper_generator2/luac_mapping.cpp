// FUNC_PROTOTYPE "luaamx_CreateObject" --> CreateObject ( modelid :integer, x :number, y :number, z :number, rX :number, rY :number, rZ :number, drawDistance :number ) stdret :integer
static int luaamx_CreateObject (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float rX = 0.0;
    float rY = 0.0;
    float rZ = 0.0;
    float drawDistance = 0.0;

    lua_settop(L, 8);
    modelid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    rX = (float)luaL_checknumber(L, 5);
    rY = (float)luaL_checknumber(L, 6);
    rZ = (float)luaL_checknumber(L, 7);
    drawDistance = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)CreateObject(modelid, x, y, z, rX, rY, rZ, drawDistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachObjectToVehicle" --> AttachObjectToVehicle ( objectid :integer, vehicleid :integer, OffsetX :number, OffsetY :number, OffsetZ :number, RotX :number, RotY :number, RotZ :number ) stdret :integer
static int luaamx_AttachObjectToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int vehicleid = 0;
    float OffsetX = 0.0;
    float OffsetY = 0.0;
    float OffsetZ = 0.0;
    float RotX = 0.0;
    float RotY = 0.0;
    float RotZ = 0.0;

    lua_settop(L, 8);
    objectid = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);
    OffsetX = (float)luaL_checknumber(L, 3);
    OffsetY = (float)luaL_checknumber(L, 4);
    OffsetZ = (float)luaL_checknumber(L, 5);
    RotX = (float)luaL_checknumber(L, 6);
    RotY = (float)luaL_checknumber(L, 7);
    RotZ = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)AttachObjectToVehicle(objectid, vehicleid, OffsetX, OffsetY, OffsetZ, RotX, RotY, RotZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachObjectToObject" --> AttachObjectToObject ( objectid :integer, attachtoid :integer, offsetX :number, offsetY :number, offsetZ :number, rotX :number, rotY :number, rotZ :number, syncRotation :integer ) stdret :integer
static int luaamx_AttachObjectToObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int attachtoid = 0;
    float offsetX = 0.0;
    float offsetY = 0.0;
    float offsetZ = 0.0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;
    int syncRotation = 0;

    lua_settop(L, 9);
    objectid = luaL_checkint(L, 1);
    attachtoid = luaL_checkint(L, 2);
    offsetX = (float)luaL_checknumber(L, 3);
    offsetY = (float)luaL_checknumber(L, 4);
    offsetZ = (float)luaL_checknumber(L, 5);
    rotX = (float)luaL_checknumber(L, 6);
    rotY = (float)luaL_checknumber(L, 7);
    rotZ = (float)luaL_checknumber(L, 8);
    syncRotation = luaL_checkint(L, 9);

    lua_pushinteger(L, (lua_Integer)AttachObjectToObject(objectid, attachtoid, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, syncRotation));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachObjectToPlayer" --> AttachObjectToPlayer ( objectid :integer, playerid :integer, OffsetX :number, OffsetY :number, OffsetZ :number, rX :number, rY :number, rZ :number ) stdret :integer
static int luaamx_AttachObjectToPlayer (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int playerid = 0;
    float OffsetX = 0.0;
    float OffsetY = 0.0;
    float OffsetZ = 0.0;
    float rX = 0.0;
    float rY = 0.0;
    float rZ = 0.0;

    lua_settop(L, 8);
    objectid = luaL_checkint(L, 1);
    playerid = luaL_checkint(L, 2);
    OffsetX = (float)luaL_checknumber(L, 3);
    OffsetY = (float)luaL_checknumber(L, 4);
    OffsetZ = (float)luaL_checknumber(L, 5);
    rX = (float)luaL_checknumber(L, 6);
    rY = (float)luaL_checknumber(L, 7);
    rZ = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)AttachObjectToPlayer(objectid, playerid, OffsetX, OffsetY, OffsetZ, rX, rY, rZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetObjectPos" --> SetObjectPos ( objectid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetObjectPos (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    objectid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetObjectPos(objectid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetObjectPos" --> GetObjectPos ( objectid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetObjectPos (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetObjectPos(objectid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetObjectRot" --> SetObjectRot ( objectid :integer, rotX :number, rotY :number, rotZ :number ) stdret :integer
static int luaamx_SetObjectRot (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;

    lua_settop(L, 4);
    objectid = luaL_checkint(L, 1);
    rotX = (float)luaL_checknumber(L, 2);
    rotY = (float)luaL_checknumber(L, 3);
    rotZ = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetObjectRot(objectid, rotX, rotY, rotZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetObjectRot" --> GetObjectRot ( objectid :integer ) stdret :integer, rotX :number, rotY :number, rotZ :number
static int luaamx_GetObjectRot (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetObjectRot(objectid, rotX, rotY, rotZ));

    lua_pushnumber(L, (lua_Number)rotX); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)rotY); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)rotZ); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidObject" --> IsValidObject ( objectid :integer ) stdret :integer
static int luaamx_IsValidObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidObject(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyObject" --> DestroyObject ( objectid :integer ) stdret :integer
static int luaamx_DestroyObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyObject(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_MoveObject" --> MoveObject ( objectid :integer, x :number, y :number, z :number, Speed :number, rotX :number, rotY :number, rotZ :number ) stdret :integer
static int luaamx_MoveObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float Speed = 0.0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;

    lua_settop(L, 8);
    objectid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    Speed = (float)luaL_checknumber(L, 5);
    rotX = (float)luaL_checknumber(L, 6);
    rotY = (float)luaL_checknumber(L, 7);
    rotZ = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)MoveObject(objectid, x, y, z, Speed, rotX, rotY, rotZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_StopObject" --> StopObject ( objectid :integer ) stdret :integer
static int luaamx_StopObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)StopObject(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsObjectMoving" --> IsObjectMoving ( objectid :integer ) stdret :integer
static int luaamx_IsObjectMoving (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsObjectMoving(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EditObject" --> EditObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_EditObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)EditObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EditPlayerObject" --> EditPlayerObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_EditPlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)EditPlayerObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SelectObject" --> SelectObject ( playerid :integer ) stdret :integer
static int luaamx_SelectObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SelectObject(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CancelEdit" --> CancelEdit ( playerid :integer ) stdret :integer
static int luaamx_CancelEdit (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)CancelEdit(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreatePlayerObject" --> CreatePlayerObject ( playerid :integer, modelid :integer, x :number, y :number, z :number, rx :number, ry :number, rz :number, drawDistance :number ) stdret :integer
static int luaamx_CreatePlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;
    float drawDistance = 0.0;

    lua_settop(L, 9);
    playerid = luaL_checkint(L, 1);
    modelid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    rx = (float)luaL_checknumber(L, 6);
    ry = (float)luaL_checknumber(L, 7);
    rz = (float)luaL_checknumber(L, 8);
    drawDistance = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)CreatePlayerObject(playerid, modelid, x, y, z, rx, ry, rz, drawDistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachPlayerObjectToVehicle" --> AttachPlayerObjectToVehicle ( playerid :integer, objectid :integer, vehicleid :integer, fOffsetX :number, fOffsetY :number, fOffsetZ :number, fRotX :number, fRotY :number, fRotZ :number ) stdret :integer
static int luaamx_AttachPlayerObjectToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    int vehicleid = 0;
    float fOffsetX = 0.0;
    float fOffsetY = 0.0;
    float fOffsetZ = 0.0;
    float fRotX = 0.0;
    float fRotY = 0.0;
    float fRotZ = 0.0;

    lua_settop(L, 9);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    vehicleid = luaL_checkint(L, 3);
    fOffsetX = (float)luaL_checknumber(L, 4);
    fOffsetY = (float)luaL_checknumber(L, 5);
    fOffsetZ = (float)luaL_checknumber(L, 6);
    fRotX = (float)luaL_checknumber(L, 7);
    fRotY = (float)luaL_checknumber(L, 8);
    fRotZ = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)AttachPlayerObjectToVehicle(playerid, objectid, vehicleid, fOffsetX, fOffsetY, fOffsetZ, fRotX, fRotY, fRotZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerObjectPos" --> SetPlayerObjectPos ( playerid :integer, objectid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetPlayerObjectPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)SetPlayerObjectPos(playerid, objectid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerObjectPos" --> GetPlayerObjectPos ( playerid :integer, objectid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetPlayerObjectPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GetPlayerObjectPos(playerid, objectid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerObjectRot" --> SetPlayerObjectRot ( playerid :integer, objectid :integer, rotX :number, rotY :number, rotZ :number ) stdret :integer
static int luaamx_SetPlayerObjectRot (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    rotX = (float)luaL_checknumber(L, 3);
    rotY = (float)luaL_checknumber(L, 4);
    rotZ = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)SetPlayerObjectRot(playerid, objectid, rotX, rotY, rotZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerObjectRot" --> GetPlayerObjectRot ( playerid :integer, objectid :integer ) stdret :integer, rotX :number, rotY :number, rotZ :number
static int luaamx_GetPlayerObjectRot (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GetPlayerObjectRot(playerid, objectid, rotX, rotY, rotZ));

    lua_pushnumber(L, (lua_Number)rotX); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)rotY); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)rotZ); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidPlayerObject" --> IsValidPlayerObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_IsValidPlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsValidPlayerObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyPlayerObject" --> DestroyPlayerObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_DestroyPlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)DestroyPlayerObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_MovePlayerObject" --> MovePlayerObject ( playerid :integer, objectid :integer, x :number, y :number, z :number, Speed :number, rotX :number, rotY :number, rotZ :number ) stdret :integer
static int luaamx_MovePlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float Speed = 0.0;
    float rotX = 0.0;
    float rotY = 0.0;
    float rotZ = 0.0;

    lua_settop(L, 9);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    Speed = (float)luaL_checknumber(L, 6);
    rotX = (float)luaL_checknumber(L, 7);
    rotY = (float)luaL_checknumber(L, 8);
    rotZ = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)MovePlayerObject(playerid, objectid, x, y, z, Speed, rotX, rotY, rotZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_StopPlayerObject" --> StopPlayerObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_StopPlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)StopPlayerObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerObjectMoving" --> IsPlayerObjectMoving ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_IsPlayerObjectMoving (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerObjectMoving(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachPlayerObjectToPlayer" --> AttachPlayerObjectToPlayer ( objectplayer :integer, objectid :integer, attachplayer :integer, OffsetX :number, OffsetY :number, OffsetZ :number, rX :number, rY :number, rZ :number ) stdret :integer
static int luaamx_AttachPlayerObjectToPlayer (lua_State* L) {
    int NumRetVal = 1;
    int objectplayer = 0;
    int objectid = 0;
    int attachplayer = 0;
    float OffsetX = 0.0;
    float OffsetY = 0.0;
    float OffsetZ = 0.0;
    float rX = 0.0;
    float rY = 0.0;
    float rZ = 0.0;

    lua_settop(L, 9);
    objectplayer = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    attachplayer = luaL_checkint(L, 3);
    OffsetX = (float)luaL_checknumber(L, 4);
    OffsetY = (float)luaL_checknumber(L, 5);
    OffsetZ = (float)luaL_checknumber(L, 6);
    rX = (float)luaL_checknumber(L, 7);
    rY = (float)luaL_checknumber(L, 8);
    rZ = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)AttachPlayerObjectToPlayer(objectplayer, objectid, attachplayer, OffsetX, OffsetY, OffsetZ, rX, rY, rZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetObjectMaterial" --> SetObjectMaterial ( objectid :integer, materialindex :integer, modelid :integer, txdname :string, texturename :string, materialcolor :integer ) stdret :integer
static int luaamx_SetObjectMaterial (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int materialindex = 0;
    int modelid = 0;
    char* txdname = NULL;
    char* texturename = NULL;
    int materialcolor = 0;

    lua_settop(L, 6);
    objectid = luaL_checkint(L, 1);
    materialindex = luaL_checkint(L, 2);
    modelid = luaL_checkint(L, 3);
    txdname = (char*)luaL_checkstring(L, 4);
    texturename = (char*)luaL_checkstring(L, 5);
    materialcolor = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)SetObjectMaterial(objectid, materialindex, modelid, txdname, texturename, materialcolor));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerObjectMaterial" --> SetPlayerObjectMaterial ( playerid :integer, objectid :integer, materialindex :integer, modelid :integer, txdname :string, texturename :string, materialcolor :integer ) stdret :integer
static int luaamx_SetPlayerObjectMaterial (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    int materialindex = 0;
    int modelid = 0;
    char* txdname = NULL;
    char* texturename = NULL;
    int materialcolor = 0;

    lua_settop(L, 7);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    materialindex = luaL_checkint(L, 3);
    modelid = luaL_checkint(L, 4);
    txdname = (char*)luaL_checkstring(L, 5);
    texturename = (char*)luaL_checkstring(L, 6);
    materialcolor = luaL_checkint(L, 7);

    lua_pushinteger(L, (lua_Integer)SetPlayerObjectMaterial(playerid, objectid, materialindex, modelid, txdname, texturename, materialcolor));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetObjectMaterialText" --> SetObjectMaterialText ( objectid :integer, text :string, materialindex :integer, materialsize :integer, fontface :string, fontsize :integer, bold :integer, fontcolor :integer, backcolor :integer, textalignment :integer ) stdret :integer
static int luaamx_SetObjectMaterialText (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    char* text = NULL;
    int materialindex = 0;
    int materialsize = 0;
    char* fontface = NULL;
    int fontsize = 0;
    int bold = 0;
    int fontcolor = 0;
    int backcolor = 0;
    int textalignment = 0;

    lua_settop(L, 10);
    objectid = luaL_checkint(L, 1);
    text = (char*)luaL_checkstring(L, 2);
    materialindex = luaL_checkint(L, 3);
    materialsize = luaL_checkint(L, 4);
    fontface = (char*)luaL_checkstring(L, 5);
    fontsize = luaL_checkint(L, 6);
    bold = luaL_checkint(L, 7);
    fontcolor = luaL_checkint(L, 8);
    backcolor = luaL_checkint(L, 9);
    textalignment = luaL_checkint(L, 10);

    lua_pushinteger(L, (lua_Integer)SetObjectMaterialText(objectid, text, materialindex, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerObjectMaterialText" --> SetPlayerObjectMaterialText ( playerid :integer, objectid :integer, text :string, materialindex :integer, materialsize :integer, fontface :string, fontsize :integer, bold :integer, fontcolor :integer, backcolor :integer, textalignment :integer ) stdret :integer
static int luaamx_SetPlayerObjectMaterialText (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;
    char* text = NULL;
    int materialindex = 0;
    int materialsize = 0;
    char* fontface = NULL;
    int fontsize = 0;
    int bold = 0;
    int fontcolor = 0;
    int backcolor = 0;
    int textalignment = 0;

    lua_settop(L, 11);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    text = (char*)luaL_checkstring(L, 3);
    materialindex = luaL_checkint(L, 4);
    materialsize = luaL_checkint(L, 5);
    fontface = (char*)luaL_checkstring(L, 6);
    fontsize = luaL_checkint(L, 7);
    bold = luaL_checkint(L, 8);
    fontcolor = luaL_checkint(L, 9);
    backcolor = luaL_checkint(L, 10);
    textalignment = luaL_checkint(L, 11);

    lua_pushinteger(L, (lua_Integer)SetPlayerObjectMaterialText(playerid, objectid, text, materialindex, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetSpawnInfo" --> SetSpawnInfo ( playerid :integer, team :integer, skin :integer, x :number, y :number, z :number, rotation :number, weapon1 :integer, weapon1_ammo :integer, weapon2 :integer, weapon2_ammo :integer, weapon3 :integer, weapon3_ammo :integer ) stdret :integer
static int luaamx_SetSpawnInfo (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int team = 0;
    int skin = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float rotation = 0.0;
    int weapon1 = 0;
    int weapon1_ammo = 0;
    int weapon2 = 0;
    int weapon2_ammo = 0;
    int weapon3 = 0;
    int weapon3_ammo = 0;

    lua_settop(L, 13);
    playerid = luaL_checkint(L, 1);
    team = luaL_checkint(L, 2);
    skin = luaL_checkint(L, 3);
    x = (float)luaL_checknumber(L, 4);
    y = (float)luaL_checknumber(L, 5);
    z = (float)luaL_checknumber(L, 6);
    rotation = (float)luaL_checknumber(L, 7);
    weapon1 = luaL_checkint(L, 8);
    weapon1_ammo = luaL_checkint(L, 9);
    weapon2 = luaL_checkint(L, 10);
    weapon2_ammo = luaL_checkint(L, 11);
    weapon3 = luaL_checkint(L, 12);
    weapon3_ammo = luaL_checkint(L, 13);

    lua_pushinteger(L, (lua_Integer)SetSpawnInfo(playerid, team, skin, x, y, z, rotation, weapon1, weapon1_ammo, weapon2, weapon2_ammo, weapon3, weapon3_ammo));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SpawnPlayer" --> SpawnPlayer ( playerid :integer ) stdret :integer
static int luaamx_SpawnPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SpawnPlayer(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerPos" --> SetPlayerPos ( playerid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetPlayerPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetPlayerPos(playerid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerPosFindZ" --> SetPlayerPosFindZ ( playerid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetPlayerPosFindZ (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetPlayerPosFindZ(playerid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerPos" --> GetPlayerPos ( playerid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetPlayerPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerPos(playerid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerFacingAngle" --> SetPlayerFacingAngle ( playerid :integer, ang :number ) stdret :integer
static int luaamx_SetPlayerFacingAngle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float ang = 0.0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    ang = (float)luaL_checknumber(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerFacingAngle(playerid, ang));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerFacingAngle" --> GetPlayerFacingAngle ( playerid :integer ) stdret :integer, ang :number
static int luaamx_GetPlayerFacingAngle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float ang = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerFacingAngle(playerid, ang));

    lua_pushnumber(L, (lua_Number)ang); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInRangeOfPoint" --> IsPlayerInRangeOfPoint ( playerid :integer, range :number, x :number, y :number, z :number ) stdret :integer
static int luaamx_IsPlayerInRangeOfPoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float range = 0.0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    range = (float)luaL_checknumber(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)IsPlayerInRangeOfPoint(playerid, range, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerStreamedIn" --> IsPlayerStreamedIn ( playerid :integer, forplayerid :integer ) stdret :integer
static int luaamx_IsPlayerStreamedIn (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int forplayerid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    forplayerid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerStreamedIn(playerid, forplayerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerInterior" --> SetPlayerInterior ( playerid :integer, interiorid :integer ) stdret :integer
static int luaamx_SetPlayerInterior (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int interiorid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    interiorid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerInterior(playerid, interiorid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerInterior" --> GetPlayerInterior ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerInterior (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerInterior(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerHealth" --> SetPlayerHealth ( playerid :integer, health :number ) stdret :integer
static int luaamx_SetPlayerHealth (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float health = 0.0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    health = (float)luaL_checknumber(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerHealth(playerid, health));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerHealth" --> GetPlayerHealth ( playerid :integer ) stdret :integer, health :number
static int luaamx_GetPlayerHealth (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float health = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerHealth(playerid, health));

    lua_pushnumber(L, (lua_Number)health); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerArmour" --> SetPlayerArmour ( playerid :integer, armour :number ) stdret :integer
static int luaamx_SetPlayerArmour (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float armour = 0.0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    armour = (float)luaL_checknumber(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerArmour(playerid, armour));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerArmour" --> GetPlayerArmour ( playerid :integer ) stdret :integer, armour :number
static int luaamx_GetPlayerArmour (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float armour = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerArmour(playerid, armour));

    lua_pushnumber(L, (lua_Number)armour); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerAmmo" --> SetPlayerAmmo ( playerid :integer, weaponslot :integer, ammo :integer ) stdret :integer
static int luaamx_SetPlayerAmmo (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int weaponslot = 0;
    int ammo = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    weaponslot = luaL_checkint(L, 2);
    ammo = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)SetPlayerAmmo(playerid, weaponslot, ammo));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerAmmo" --> GetPlayerAmmo ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerAmmo (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerAmmo(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerWeaponState" --> GetPlayerWeaponState ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerWeaponState (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerWeaponState(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerTargetPlayer" --> GetPlayerTargetPlayer ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerTargetPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerTargetPlayer(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerTeam" --> SetPlayerTeam ( playerid :integer, teamid :integer ) stdret :integer
static int luaamx_SetPlayerTeam (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int teamid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    teamid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerTeam(playerid, teamid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerTeam" --> GetPlayerTeam ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerTeam (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerTeam(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerScore" --> SetPlayerScore ( playerid :integer, score :integer ) stdret :integer
static int luaamx_SetPlayerScore (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int score = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    score = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerScore(playerid, score));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerScore" --> GetPlayerScore ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerScore (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerScore(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerDrunkLevel" --> GetPlayerDrunkLevel ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerDrunkLevel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerDrunkLevel(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerDrunkLevel" --> SetPlayerDrunkLevel ( playerid :integer, level :integer ) stdret :integer
static int luaamx_SetPlayerDrunkLevel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int level = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    level = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerDrunkLevel(playerid, level));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerColor" --> SetPlayerColor ( playerid :integer, color :integer ) stdret :integer
static int luaamx_SetPlayerColor (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int color = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerColor(playerid, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerColor" --> GetPlayerColor ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerColor (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerColor(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerSkin" --> SetPlayerSkin ( playerid :integer, skinid :integer ) stdret :integer
static int luaamx_SetPlayerSkin (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int skinid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    skinid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerSkin(playerid, skinid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerSkin" --> GetPlayerSkin ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerSkin (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerSkin(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GivePlayerWeapon" --> GivePlayerWeapon ( playerid :integer, weaponid :integer, ammo :integer ) stdret :integer
static int luaamx_GivePlayerWeapon (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int weaponid = 0;
    int ammo = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    weaponid = luaL_checkint(L, 2);
    ammo = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)GivePlayerWeapon(playerid, weaponid, ammo));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ResetPlayerWeapons" --> ResetPlayerWeapons ( playerid :integer ) stdret :integer
static int luaamx_ResetPlayerWeapons (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)ResetPlayerWeapons(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerArmedWeapon" --> SetPlayerArmedWeapon ( playerid :integer, weaponid :integer ) stdret :integer
static int luaamx_SetPlayerArmedWeapon (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int weaponid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    weaponid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerArmedWeapon(playerid, weaponid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerWeaponData" --> GetPlayerWeaponData ( playerid :integer, slot :integer ) stdret :integer, weapons :integer, ammo :integer
static int luaamx_GetPlayerWeaponData (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int slot = 0;
    int weapons = 0;
    int ammo = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    slot = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GetPlayerWeaponData(playerid, slot, weapons, ammo));

    lua_pushinteger(L, (lua_Integer)weapons); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)ammo); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GivePlayerMoney" --> GivePlayerMoney ( playerid :integer, money :integer ) stdret :integer
static int luaamx_GivePlayerMoney (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int money = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    money = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GivePlayerMoney(playerid, money));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ResetPlayerMoney" --> ResetPlayerMoney ( playerid :integer ) stdret :integer
static int luaamx_ResetPlayerMoney (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)ResetPlayerMoney(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerName" --> SetPlayerName ( playerid :integer, name :string ) stdret :integer
static int luaamx_SetPlayerName (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* name = NULL;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    name = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerName(playerid, name));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerMoney" --> GetPlayerMoney ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerMoney (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerMoney(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerState" --> GetPlayerState ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerState (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerState(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerIp" --> GetPlayerIp ( playerid :integer ) stdret :integer, name :string
static int luaamx_GetPlayerIp (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    char* name = (char*)calloc((size_t)128, sizeof(char));
    const static int len = 128;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);
    if (name == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "name");};

    lua_pushinteger(L, (lua_Integer)GetPlayerIp(playerid, name, len));

    lua_pushstring(L, name); free(name); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerPing" --> GetPlayerPing ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerPing (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerPing(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerWeapon" --> GetPlayerWeapon ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerWeapon (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerWeapon(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerKeys" --> GetPlayerKeys ( playerid :integer ) stdret :integer, keys :integer, updown :integer, leftright :integer
static int luaamx_GetPlayerKeys (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int keys = 0;
    int updown = 0;
    int leftright = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerKeys(playerid, keys, updown, leftright));

    lua_pushinteger(L, (lua_Integer)keys); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)updown); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)leftright); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerName" --> GetPlayerName ( playerid :integer ) stdret :integer, name :string
static int luaamx_GetPlayerName (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    char* name = (char*)calloc((size_t)128, sizeof(char));
    const static int len = 128;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);
    if (name == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "name");};

    lua_pushinteger(L, (lua_Integer)GetPlayerName(playerid, name, len));

    lua_pushstring(L, name); free(name); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerTime" --> SetPlayerTime ( playerid :integer, hour :integer, minute :integer ) stdret :integer
static int luaamx_SetPlayerTime (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int hour = 0;
    int minute = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    hour = luaL_checkint(L, 2);
    minute = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)SetPlayerTime(playerid, hour, minute));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerTime" --> GetPlayerTime ( playerid :integer ) stdret :integer, hour :integer, minute :integer
static int luaamx_GetPlayerTime (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int hour = 0;
    int minute = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerTime(playerid, hour, minute));

    lua_pushinteger(L, (lua_Integer)hour); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)minute); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerClock" --> TogglePlayerClock ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerClock (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TogglePlayerClock(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerWeather" --> SetPlayerWeather ( playerid :integer, weather :integer ) stdret :integer
static int luaamx_SetPlayerWeather (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int weather = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    weather = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerWeather(playerid, weather));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ForceClassSelection" --> ForceClassSelection ( playerid :integer ) stdret :integer
static int luaamx_ForceClassSelection (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)ForceClassSelection(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerWantedLevel" --> SetPlayerWantedLevel ( playerid :integer, level :integer ) stdret :integer
static int luaamx_SetPlayerWantedLevel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int level = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    level = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerWantedLevel(playerid, level));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerWantedLevel" --> GetPlayerWantedLevel ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerWantedLevel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerWantedLevel(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerFightingStyle" --> SetPlayerFightingStyle ( playerid :integer, style :integer ) stdret :integer
static int luaamx_SetPlayerFightingStyle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int style = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    style = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerFightingStyle(playerid, style));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerFightingStyle" --> GetPlayerFightingStyle ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerFightingStyle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerFightingStyle(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerVelocity" --> SetPlayerVelocity ( playerid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetPlayerVelocity (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetPlayerVelocity(playerid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVelocity" --> GetPlayerVelocity ( playerid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetPlayerVelocity (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerVelocity(playerid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayCrimeReportForPlayer" --> PlayCrimeReportForPlayer ( playerid :integer, suspectid :integer, crime :integer ) stdret :integer
static int luaamx_PlayCrimeReportForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int suspectid = 0;
    int crime = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    suspectid = luaL_checkint(L, 2);
    crime = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayCrimeReportForPlayer(playerid, suspectid, crime));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayAudioStreamForPlayer" --> PlayAudioStreamForPlayer ( playerid :integer, url :string, posX :number, posY :number, posZ :number, distance :number, usepos :integer ) stdret :integer
static int luaamx_PlayAudioStreamForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* url = NULL;
    float posX = 0.0;
    float posY = 0.0;
    float posZ = 0.0;
    float distance = 0.0;
    int usepos = 0;

    lua_settop(L, 7);
    playerid = luaL_checkint(L, 1);
    url = luaL_checkstring(L, 2);
    posX = (float)luaL_checknumber(L, 3);
    posY = (float)luaL_checknumber(L, 4);
    posZ = (float)luaL_checknumber(L, 5);
    distance = (float)luaL_checknumber(L, 6);
    usepos = luaL_checkint(L, 7);

    lua_pushinteger(L, (lua_Integer)PlayAudioStreamForPlayer(playerid, url, posX, posY, posZ, distance, usepos));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_StopAudioStreamForPlayer" --> StopAudioStreamForPlayer ( playerid :integer ) stdret :integer
static int luaamx_StopAudioStreamForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)StopAudioStreamForPlayer(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerShopName" --> SetPlayerShopName ( playerid :integer, shopname :string ) stdret :integer
static int luaamx_SetPlayerShopName (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* shopname = NULL;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    shopname = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerShopName(playerid, shopname));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerSkillLevel" --> SetPlayerSkillLevel ( playerid :integer, skill :integer, level :integer ) stdret :integer
static int luaamx_SetPlayerSkillLevel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int skill = 0;
    int level = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    skill = luaL_checkint(L, 2);
    level = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)SetPlayerSkillLevel(playerid, skill, level));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerSurfingVehicleID" --> GetPlayerSurfingVehicleID ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerSurfingVehicleID (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerSurfingVehicleID(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerSurfingObjectID" --> GetPlayerSurfingObjectID ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerSurfingObjectID (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerSurfingObjectID(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_RemoveBuildingForPlayer" --> RemoveBuildingForPlayer ( playerid :integer, modelid :integer, x :number, y :number, z :number, radius :number ) stdret :integer
static int luaamx_RemoveBuildingForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float radius = 0.0;

    lua_settop(L, 6);
    playerid = luaL_checkint(L, 1);
    modelid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    radius = (float)luaL_checknumber(L, 6);

    lua_pushinteger(L, (lua_Integer)RemoveBuildingForPlayer(playerid, modelid, x, y, z, radius));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerAttachedObject" --> SetPlayerAttachedObject ( playerid :integer, index :integer, modelid :integer, bone :integer, fOffsetX :number, fOffsetY :number, fOffsetZ :number, frotX :number, frotY :number, frotZ :number, fScaleX :number, fScaleY :number, fScaleZ :number, materialcolor1 :integer, materialcolor2 :integer ) stdret :integer
static int luaamx_SetPlayerAttachedObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int index = 0;
    int modelid = 0;
    int bone = 0;
    float fOffsetX = 0.0;
    float fOffsetY = 0.0;
    float fOffsetZ = 0.0;
    float frotX = 0.0;
    float frotY = 0.0;
    float frotZ = 0.0;
    float fScaleX = 0.0;
    float fScaleY = 0.0;
    float fScaleZ = 0.0;
    int materialcolor1 = 0;
    int materialcolor2 = 0;

    lua_settop(L, 15);
    playerid = luaL_checkint(L, 1);
    index = luaL_checkint(L, 2);
    modelid = luaL_checkint(L, 3);
    bone = luaL_checkint(L, 4);
    fOffsetX = (float)luaL_checknumber(L, 5);
    fOffsetY = (float)luaL_checknumber(L, 6);
    fOffsetZ = (float)luaL_checknumber(L, 7);
    frotX = (float)luaL_checknumber(L, 8);
    frotY = (float)luaL_checknumber(L, 9);
    frotZ = (float)luaL_checknumber(L, 10);
    fScaleX = (float)luaL_checknumber(L, 11);
    fScaleY = (float)luaL_checknumber(L, 12);
    fScaleZ = (float)luaL_checknumber(L, 13);
    materialcolor1 = luaL_checkint(L, 14);
    materialcolor2 = luaL_checkint(L, 15);

    lua_pushinteger(L, (lua_Integer)SetPlayerAttachedObject(playerid, index, modelid, bone, fOffsetX, fOffsetY, fOffsetZ, frotX, frotY, frotZ, fScaleX, fScaleY, fScaleZ, materialcolor1, materialcolor2));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_RemovePlayerAttachedObject" --> RemovePlayerAttachedObject ( playerid :integer, index :integer ) stdret :integer
static int luaamx_RemovePlayerAttachedObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int index = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    index = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)RemovePlayerAttachedObject(playerid, index));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerAttachedObjectSlotUsed" --> IsPlayerAttachedObjectSlotUsed ( playerid :integer, index :integer ) stdret :integer
static int luaamx_IsPlayerAttachedObjectSlotUsed (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int index = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    index = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerAttachedObjectSlotUsed(playerid, index));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EditAttachedObject" --> EditAttachedObject ( playerid :integer, index :integer ) stdret :integer
static int luaamx_EditAttachedObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int index = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    index = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)EditAttachedObject(playerid, index));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreatePlayerTextDraw" --> CreatePlayerTextDraw ( playerid :integer, x :number, y :number, text :string ) stdret :integer
static int luaamx_CreatePlayerTextDraw (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    char* text = NULL;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    text = (char*)luaL_checkstring(L, 4);

    lua_pushinteger(L, (lua_Integer)CreatePlayerTextDraw(playerid, x, y, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawDestroy" --> PlayerTextDrawDestroy ( playerid :integer, textId :integer ) stdret :integer
static int luaamx_PlayerTextDrawDestroy (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawDestroy(playerid, textId));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawLetterSize" --> PlayerTextDrawLetterSize ( playerid :integer, textId :integer, x :number, y :number ) stdret :integer
static int luaamx_PlayerTextDrawLetterSize (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    float x = 0.0;
    float y = 0.0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawLetterSize(playerid, textId, x, y));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawTextSize" --> PlayerTextDrawTextSize ( playerid :integer, textId :integer, x :number, y :number ) stdret :integer
static int luaamx_PlayerTextDrawTextSize (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    float x = 0.0;
    float y = 0.0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawTextSize(playerid, textId, x, y));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawAlignment" --> PlayerTextDrawAlignment ( playerid :integer, textId :integer, alignment :integer ) stdret :integer
static int luaamx_PlayerTextDrawAlignment (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int alignment = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    alignment = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawAlignment(playerid, textId, alignment));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawColor" --> PlayerTextDrawColor ( playerid :integer, textId :integer, color :integer ) stdret :integer
static int luaamx_PlayerTextDrawColor (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int color = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    color = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawColor(playerid, textId, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawUseBox" --> PlayerTextDrawUseBox ( playerid :integer, textId :integer, use :integer ) stdret :integer
static int luaamx_PlayerTextDrawUseBox (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int use = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    use = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawUseBox(playerid, textId, use));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawBoxColor" --> PlayerTextDrawBoxColor ( playerid :integer, textId :integer, color :integer ) stdret :integer
static int luaamx_PlayerTextDrawBoxColor (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int color = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    color = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawBoxColor(playerid, textId, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetShadow" --> PlayerTextDrawSetShadow ( playerid :integer, textId :integer, size :integer ) stdret :integer
static int luaamx_PlayerTextDrawSetShadow (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int size = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    size = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetShadow(playerid, textId, size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetOutline" --> PlayerTextDrawSetOutline ( playerid :integer, textId :integer, size :integer ) stdret :integer
static int luaamx_PlayerTextDrawSetOutline (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int size = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    size = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetOutline(playerid, textId, size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawBackgroundColor" --> PlayerTextDrawBackgroundColor ( playerid :integer, textId :integer, color :integer ) stdret :integer
static int luaamx_PlayerTextDrawBackgroundColor (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int color = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    color = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawBackgroundColor(playerid, textId, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawFont" --> PlayerTextDrawFont ( playerid :integer, textId :integer, font :integer ) stdret :integer
static int luaamx_PlayerTextDrawFont (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int font = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    font = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawFont(playerid, textId, font));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetProportional" --> PlayerTextDrawSetProportional ( playerid :integer, textId :integer, set :integer ) stdret :integer
static int luaamx_PlayerTextDrawSetProportional (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int set = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    set = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetProportional(playerid, textId, set));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetSelectable" --> PlayerTextDrawSetSelectable ( playerid :integer, textId :integer, set :integer ) stdret :integer
static int luaamx_PlayerTextDrawSetSelectable (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int set = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    set = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetSelectable(playerid, textId, set));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawShow" --> PlayerTextDrawShow ( playerid :integer, textId :integer ) stdret :integer
static int luaamx_PlayerTextDrawShow (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawShow(playerid, textId));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawHide" --> PlayerTextDrawHide ( playerid :integer, textId :integer ) stdret :integer
static int luaamx_PlayerTextDrawHide (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawHide(playerid, textId));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetString" --> PlayerTextDrawSetString ( playerid :integer, textId :integer, string :string ) stdret :integer
static int luaamx_PlayerTextDrawSetString (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    char* string = NULL;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    string = (char*)luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetString(playerid, textId, string));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetPreviewModel" --> PlayerTextDrawSetPreviewModel ( playerid :integer, textId :integer, modelindex :integer ) stdret :integer
static int luaamx_PlayerTextDrawSetPreviewModel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int modelindex = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    modelindex = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetPreviewModel(playerid, textId, modelindex));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetPreviewRot" --> PlayerTextDrawSetPreviewRot ( playerid :integer, textId :integer, fRotX :number, fRotY :number, fRotZ :number, fZoom :number ) stdret :integer
static int luaamx_PlayerTextDrawSetPreviewRot (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    float fRotX = 0.0;
    float fRotY = 0.0;
    float fRotZ = 0.0;
    float fZoom = 0.0;

    lua_settop(L, 6);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    fRotX = (float)luaL_checknumber(L, 3);
    fRotY = (float)luaL_checknumber(L, 4);
    fRotZ = (float)luaL_checknumber(L, 5);
    fZoom = (float)luaL_checknumber(L, 6);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetPreviewRot(playerid, textId, fRotX, fRotY, fRotZ, fZoom));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerTextDrawSetPreviewVehCol" --> PlayerTextDrawSetPreviewVehCol ( playerid :integer, textId :integer, color1 :integer, color2 :integer ) stdret :integer
static int luaamx_PlayerTextDrawSetPreviewVehCol (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int textId = 0;
    int color1 = 0;
    int color2 = 0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    textId = luaL_checkint(L, 2);
    color1 = luaL_checkint(L, 3);
    color2 = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)PlayerTextDrawSetPreviewVehCol(playerid, textId, color1, color2));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerChatBubble" --> SetPlayerChatBubble ( playerid :integer, text :string, color :integer, drawdistance :number, expiretime :integer ) stdret :integer
static int luaamx_SetPlayerChatBubble (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* text = NULL;
    int color = 0;
    float drawdistance = 0.0;
    int expiretime = 0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    text = luaL_checkstring(L, 2);
    color = luaL_checkint(L, 3);
    drawdistance = (float)luaL_checknumber(L, 4);
    expiretime = luaL_checkint(L, 5);

    lua_pushinteger(L, (lua_Integer)SetPlayerChatBubble(playerid, text, color, drawdistance, expiretime));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PutPlayerInVehicle" --> PutPlayerInVehicle ( playerid :integer, vehicleid :integer, seatid :integer ) stdret :integer
static int luaamx_PutPlayerInVehicle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int vehicleid = 0;
    int seatid = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);
    seatid = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PutPlayerInVehicle(playerid, vehicleid, seatid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVehicleID" --> GetPlayerVehicleID ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerVehicleID (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerVehicleID(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVehicleSeat" --> GetPlayerVehicleSeat ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerVehicleSeat (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerVehicleSeat(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_RemovePlayerFromVehicle" --> RemovePlayerFromVehicle ( playerid :integer ) stdret :integer
static int luaamx_RemovePlayerFromVehicle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)RemovePlayerFromVehicle(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerControllable" --> TogglePlayerControllable ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerControllable (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TogglePlayerControllable(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerPlaySound" --> PlayerPlaySound ( playerid :integer, soundid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_PlayerPlaySound (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int soundid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    soundid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)PlayerPlaySound(playerid, soundid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ApplyAnimation" --> ApplyAnimation ( playerid :integer, animlib :string, animname :string, fDelta :number, loop :integer, lockx :integer, locky :integer, freeze :integer, time :integer, forcesync :integer ) stdret :integer
static int luaamx_ApplyAnimation (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* animlib = NULL;
    const char* animname = NULL;
    float fDelta = 0.0;
    int loop = 0;
    int lockx = 0;
    int locky = 0;
    int freeze = 0;
    int time = 0;
    int forcesync = 0;

    lua_settop(L, 10);
    playerid = luaL_checkint(L, 1);
    animlib = luaL_checkstring(L, 2);
    animname = luaL_checkstring(L, 3);
    fDelta = (float)luaL_checknumber(L, 4);
    loop = luaL_checkint(L, 5);
    lockx = luaL_checkint(L, 6);
    locky = luaL_checkint(L, 7);
    freeze = luaL_checkint(L, 8);
    time = luaL_checkint(L, 9);
    forcesync = luaL_checkint(L, 10);

    lua_pushinteger(L, (lua_Integer)ApplyAnimation(playerid, animlib, animname, fDelta, loop, lockx, locky, freeze, time, forcesync));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ClearAnimations" --> ClearAnimations ( playerid :integer, forcesync :integer ) stdret :integer
static int luaamx_ClearAnimations (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int forcesync = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    forcesync = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)ClearAnimations(playerid, forcesync));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerAnimationIndex" --> GetPlayerAnimationIndex ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerAnimationIndex (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerAnimationIndex(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetAnimationName" --> GetAnimationName ( index :integer ) stdret :integer, animlib :string, animname :string
static int luaamx_GetAnimationName (lua_State* L) {
    int NumRetVal = 1;
    int index = 0;
    char* animlib = (char*)calloc((size_t)128, sizeof(char));
    const static int len1 = 128;
    char* animname = (char*)calloc((size_t)128, sizeof(char));
    const static int len2 = 128;

    lua_settop(L, 1);
    index = luaL_checkint(L, 1);
    if (animlib == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "animlib");};
    if (animname == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "animname");};

    lua_pushinteger(L, (lua_Integer)GetAnimationName(index, animlib, len1, animname, len2));

    lua_pushstring(L, animlib); free(animlib); NumRetVal += 1;
    lua_pushstring(L, animname); free(animname); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerSpecialAction" --> GetPlayerSpecialAction ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerSpecialAction (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerSpecialAction(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerSpecialAction" --> SetPlayerSpecialAction ( playerid :integer, actionid :integer ) stdret :integer
static int luaamx_SetPlayerSpecialAction (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int actionid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    actionid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerSpecialAction(playerid, actionid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerCheckpoint" --> SetPlayerCheckpoint ( playerid :integer, x :number, y :number, z :number, size :number ) stdret :integer
static int luaamx_SetPlayerCheckpoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float size = 0.0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    size = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)SetPlayerCheckpoint(playerid, x, y, z, size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DisablePlayerCheckpoint" --> DisablePlayerCheckpoint ( playerid :integer ) stdret :integer
static int luaamx_DisablePlayerCheckpoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DisablePlayerCheckpoint(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerRaceCheckpoint" --> SetPlayerRaceCheckpoint ( playerid :integer, type :integer, x :number, y :number, z :number, nextx :number, nexty :number, nextz :number, size :number ) stdret :integer
static int luaamx_SetPlayerRaceCheckpoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float nextx = 0.0;
    float nexty = 0.0;
    float nextz = 0.0;
    float size = 0.0;

    lua_settop(L, 9);
    playerid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    nextx = (float)luaL_checknumber(L, 6);
    nexty = (float)luaL_checknumber(L, 7);
    nextz = (float)luaL_checknumber(L, 8);
    size = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)SetPlayerRaceCheckpoint(playerid, type, x, y, z, nextx, nexty, nextz, size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DisablePlayerRaceCheckpoint" --> DisablePlayerRaceCheckpoint ( playerid :integer ) stdret :integer
static int luaamx_DisablePlayerRaceCheckpoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DisablePlayerRaceCheckpoint(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerWorldBounds" --> SetPlayerWorldBounds ( playerid :integer, x_max :number, x_min :number, y_max :number, y_min :number ) stdret :integer
static int luaamx_SetPlayerWorldBounds (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x_max = 0.0;
    float x_min = 0.0;
    float y_max = 0.0;
    float y_min = 0.0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    x_max = (float)luaL_checknumber(L, 2);
    x_min = (float)luaL_checknumber(L, 3);
    y_max = (float)luaL_checknumber(L, 4);
    y_min = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)SetPlayerWorldBounds(playerid, x_max, x_min, y_max, y_min));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerMarkerForPlayer" --> SetPlayerMarkerForPlayer ( playerid :integer, showplayerid :integer, color :integer ) stdret :integer
static int luaamx_SetPlayerMarkerForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int showplayerid = 0;
    int color = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    showplayerid = luaL_checkint(L, 2);
    color = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)SetPlayerMarkerForPlayer(playerid, showplayerid, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ShowPlayerNameTagForPlayer" --> ShowPlayerNameTagForPlayer ( playerid :integer, showplayerid :integer, show :integer ) stdret :integer
static int luaamx_ShowPlayerNameTagForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int showplayerid = 0;
    int show = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    showplayerid = luaL_checkint(L, 2);
    show = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)ShowPlayerNameTagForPlayer(playerid, showplayerid, show));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerMapIcon" --> SetPlayerMapIcon ( playerid :integer, iconid :integer, x :number, y :number, z :number, markertype :integer, color :integer, style :integer ) stdret :integer
static int luaamx_SetPlayerMapIcon (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int iconid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int markertype = 0;
    int color = 0;
    int style = 0;

    lua_settop(L, 8);
    playerid = luaL_checkint(L, 1);
    iconid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    markertype = luaL_checkint(L, 6);
    color = luaL_checkint(L, 7);
    style = luaL_checkint(L, 8);

    lua_pushinteger(L, (lua_Integer)SetPlayerMapIcon(playerid, iconid, x, y, z, markertype, color, style));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_RemovePlayerMapIcon" --> RemovePlayerMapIcon ( playerid :integer, iconid :integer ) stdret :integer
static int luaamx_RemovePlayerMapIcon (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int iconid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    iconid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)RemovePlayerMapIcon(playerid, iconid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerCameraPos" --> SetPlayerCameraPos ( playerid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetPlayerCameraPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetPlayerCameraPos(playerid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerCameraLookAt" --> SetPlayerCameraLookAt ( playerid :integer, x :number, y :number, z :number, cut :integer ) stdret :integer
static int luaamx_SetPlayerCameraLookAt (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int cut = 0;

    lua_settop(L, 5);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    cut = luaL_checkint(L, 5);

    lua_pushinteger(L, (lua_Integer)SetPlayerCameraLookAt(playerid, x, y, z, cut));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetCameraBehindPlayer" --> SetCameraBehindPlayer ( playerid :integer ) stdret :integer
static int luaamx_SetCameraBehindPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SetCameraBehindPlayer(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerCameraPos" --> GetPlayerCameraPos ( playerid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetPlayerCameraPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerCameraPos(playerid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerCameraFrontVector" --> GetPlayerCameraFrontVector ( playerid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetPlayerCameraFrontVector (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerCameraFrontVector(playerid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerCameraMode" --> GetPlayerCameraMode ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerCameraMode (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerCameraMode(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachCameraToObject" --> AttachCameraToObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_AttachCameraToObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AttachCameraToObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachCameraToPlayerObject" --> AttachCameraToPlayerObject ( playerid :integer, playerobjectid :integer ) stdret :integer
static int luaamx_AttachCameraToPlayerObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int playerobjectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    playerobjectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AttachCameraToPlayerObject(playerid, playerobjectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_InterpolateCameraPos" --> InterpolateCameraPos ( playerid :integer, FromX :number, FromY :number, FromZ :number, ToX :number, ToY :number, ToZ :number, time :integer, cut :integer ) stdret :integer
static int luaamx_InterpolateCameraPos (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float FromX = 0.0;
    float FromY = 0.0;
    float FromZ = 0.0;
    float ToX = 0.0;
    float ToY = 0.0;
    float ToZ = 0.0;
    int time = 0;
    int cut = 0;

    lua_settop(L, 9);
    playerid = luaL_checkint(L, 1);
    FromX = (float)luaL_checknumber(L, 2);
    FromY = (float)luaL_checknumber(L, 3);
    FromZ = (float)luaL_checknumber(L, 4);
    ToX = (float)luaL_checknumber(L, 5);
    ToY = (float)luaL_checknumber(L, 6);
    ToZ = (float)luaL_checknumber(L, 7);
    time = luaL_checkint(L, 8);
    cut = luaL_checkint(L, 9);

    lua_pushinteger(L, (lua_Integer)InterpolateCameraPos(playerid, FromX, FromY, FromZ, ToX, ToY, ToZ, time, cut));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_InterpolateCameraLookAt" --> InterpolateCameraLookAt ( playerid :integer, FromX :number, FromY :number, FromZ :number, ToX :number, ToY :number, ToZ :number, time :integer, cut :integer ) stdret :integer
static int luaamx_InterpolateCameraLookAt (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float FromX = 0.0;
    float FromY = 0.0;
    float FromZ = 0.0;
    float ToX = 0.0;
    float ToY = 0.0;
    float ToZ = 0.0;
    int time = 0;
    int cut = 0;

    lua_settop(L, 9);
    playerid = luaL_checkint(L, 1);
    FromX = (float)luaL_checknumber(L, 2);
    FromY = (float)luaL_checknumber(L, 3);
    FromZ = (float)luaL_checknumber(L, 4);
    ToX = (float)luaL_checknumber(L, 5);
    ToY = (float)luaL_checknumber(L, 6);
    ToZ = (float)luaL_checknumber(L, 7);
    time = luaL_checkint(L, 8);
    cut = luaL_checkint(L, 9);

    lua_pushinteger(L, (lua_Integer)InterpolateCameraLookAt(playerid, FromX, FromY, FromZ, ToX, ToY, ToZ, time, cut));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerConnected" --> IsPlayerConnected ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerConnected (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerConnected(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInVehicle" --> IsPlayerInVehicle ( playerid :integer, vehicleid :integer ) stdret :integer
static int luaamx_IsPlayerInVehicle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int vehicleid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerInVehicle(playerid, vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInAnyVehicle" --> IsPlayerInAnyVehicle ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerInAnyVehicle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerInAnyVehicle(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInCheckpoint" --> IsPlayerInCheckpoint ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerInCheckpoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerInCheckpoint(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInRaceCheckpoint" --> IsPlayerInRaceCheckpoint ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerInRaceCheckpoint (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerInRaceCheckpoint(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetPlayerVirtualWorld" --> SetPlayerVirtualWorld ( playerid :integer, worldid :integer ) stdret :integer
static int luaamx_SetPlayerVirtualWorld (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int worldid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    worldid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetPlayerVirtualWorld(playerid, worldid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVirtualWorld" --> GetPlayerVirtualWorld ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerVirtualWorld (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerVirtualWorld(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EnableStuntBonusForPlayer" --> EnableStuntBonusForPlayer ( playerid :integer, enable :integer ) stdret :integer
static int luaamx_EnableStuntBonusForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int enable = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    enable = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)EnableStuntBonusForPlayer(playerid, enable));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EnableStuntBonusForAll" --> EnableStuntBonusForAll ( enable :integer ) stdret :integer
static int luaamx_EnableStuntBonusForAll (lua_State* L) {
    int NumRetVal = 1;
    int enable = 0;

    lua_settop(L, 1);
    enable = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)EnableStuntBonusForAll(enable));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerSpectating" --> TogglePlayerSpectating ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerSpectating (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TogglePlayerSpectating(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerSpectatePlayer" --> PlayerSpectatePlayer ( playerid :integer, targetplayerid :integer, mode :integer ) stdret :integer
static int luaamx_PlayerSpectatePlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int targetplayerid = 0;
    int mode = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    targetplayerid = luaL_checkint(L, 2);
    mode = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerSpectatePlayer(playerid, targetplayerid, mode));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_PlayerSpectateVehicle" --> PlayerSpectateVehicle ( playerid :integer, targetvehicleid :integer, mode :integer ) stdret :integer
static int luaamx_PlayerSpectateVehicle (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int targetvehicleid = 0;
    int mode = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    targetvehicleid = luaL_checkint(L, 2);
    mode = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)PlayerSpectateVehicle(playerid, targetvehicleid, mode));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_StartRecordingPlayerData" --> StartRecordingPlayerData ( playerid :integer, recordtype :integer, recordname :string ) stdret :integer
static int luaamx_StartRecordingPlayerData (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int recordtype = 0;
    const char* recordname = NULL;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    recordtype = luaL_checkint(L, 2);
    recordname = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)StartRecordingPlayerData(playerid, recordtype, recordname));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_StopRecordingPlayerData" --> StopRecordingPlayerData ( playerid :integer ) stdret :integer
static int luaamx_StopRecordingPlayerData (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)StopRecordingPlayerData(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SelectTextDraw" --> SelectTextDraw ( playerid :integer, hovercolor :integer ) stdret :integer
static int luaamx_SelectTextDraw (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int hovercolor = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    hovercolor = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SelectTextDraw(playerid, hovercolor));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CancelSelectTextDraw" --> CancelSelectTextDraw ( playerid :integer ) stdret :integer
static int luaamx_CancelSelectTextDraw (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)CancelSelectTextDraw(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SendClientMessage" --> SendClientMessage ( playerid :integer, color :integer, message :string ) stdret :integer
static int luaamx_SendClientMessage (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int color = 0;
    const char* message = NULL;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);
    message = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)SendClientMessage(playerid, color, message));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SendClientMessageToAll" --> SendClientMessageToAll ( color :integer, message :string ) stdret :integer
static int luaamx_SendClientMessageToAll (lua_State* L) {
    int NumRetVal = 1;
    int color = 0;
    const char* message = NULL;

    lua_settop(L, 2);
    color = luaL_checkint(L, 1);
    message = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)SendClientMessageToAll(color, message));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SendPlayerMessageToPlayer" --> SendPlayerMessageToPlayer ( playerid :integer, senderid :integer, message :string ) stdret :integer
static int luaamx_SendPlayerMessageToPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int senderid = 0;
    const char* message = NULL;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    senderid = luaL_checkint(L, 2);
    message = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)SendPlayerMessageToPlayer(playerid, senderid, message));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SendPlayerMessageToAll" --> SendPlayerMessageToAll ( senderid :integer, message :string ) stdret :integer
static int luaamx_SendPlayerMessageToAll (lua_State* L) {
    int NumRetVal = 1;
    int senderid = 0;
    const char* message = NULL;

    lua_settop(L, 2);
    senderid = luaL_checkint(L, 1);
    message = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)SendPlayerMessageToAll(senderid, message));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SendDeathMessage" --> SendDeathMessage ( killer :integer, victim :integer, weapon :integer ) stdret :integer
static int luaamx_SendDeathMessage (lua_State* L) {
    int NumRetVal = 1;
    int killer = 0;
    int victim = 0;
    int weapon = 0;

    lua_settop(L, 3);
    killer = luaL_checkint(L, 1);
    victim = luaL_checkint(L, 2);
    weapon = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)SendDeathMessage(killer, victim, weapon));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GameTextForAll" --> GameTextForAll ( string :string, time :integer, style :integer ) stdret :integer
static int luaamx_GameTextForAll (lua_State* L) {
    int NumRetVal = 1;
    const char* string = NULL;
    int time = 0;
    int style = 0;

    lua_settop(L, 3);
    string = luaL_checkstring(L, 1);
    time = luaL_checkint(L, 2);
    style = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)GameTextForAll(string, time, style));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GameTextForPlayer" --> GameTextForPlayer ( playerid :integer, string :string, time :integer, style :integer ) stdret :integer
static int luaamx_GameTextForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* string = NULL;
    int time = 0;
    int style = 0;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    string = luaL_checkstring(L, 2);
    time = luaL_checkint(L, 3);
    style = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)GameTextForPlayer(playerid, string, time, style));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetTimer" --> SetTimer ( timerIndex :integer, interval :integer, repeating :integer ) stdret :integer
static int luaamx_SetTimer (lua_State* L) {
    int NumRetVal = 1;
    int timerIndex = 0;
    int interval = 0;
    int repeating = 0;

    lua_settop(L, 3);
    timerIndex = luaL_checkint(L, 1);
    interval = luaL_checkint(L, 2);
    repeating = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)SetTimer(timerIndex, interval, repeating));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_KillTimer" --> KillTimer ( timerid :integer ) stdret :integer
static int luaamx_KillTimer (lua_State* L) {
    int NumRetVal = 1;
    int timerid = 0;

    lua_settop(L, 1);
    timerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)KillTimer(timerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetMaxPlayers" --> GetMaxPlayers (  ) stdret :integer
static int luaamx_GetMaxPlayers (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)GetMaxPlayers());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetGameModeText" --> SetGameModeText ( text :string ) stdret :integer
static int luaamx_SetGameModeText (lua_State* L) {
    int NumRetVal = 1;
    const char* text = NULL;

    lua_settop(L, 1);
    text = luaL_checkstring(L, 1);

    lua_pushinteger(L, (lua_Integer)SetGameModeText(text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetTeamCount" --> SetTeamCount ( count :integer ) stdret :integer
static int luaamx_SetTeamCount (lua_State* L) {
    int NumRetVal = 1;
    int count = 0;

    lua_settop(L, 1);
    count = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SetTeamCount(count));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddPlayerClass" --> AddPlayerClass ( modelid :integer, x :number, y :number, z :number, z_angle :number, weapon1id :integer, weapon1ammo :integer, weapon2id :integer, weapon2ammo :integer, weapon3id :integer, weapon3ammo :integer ) stdret :integer
static int luaamx_AddPlayerClass (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float z_angle = 0.0;
    int weapon1id = 0;
    int weapon1ammo = 0;
    int weapon2id = 0;
    int weapon2ammo = 0;
    int weapon3id = 0;
    int weapon3ammo = 0;

    lua_settop(L, 11);
    modelid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    z_angle = (float)luaL_checknumber(L, 5);
    weapon1id = luaL_checkint(L, 6);
    weapon1ammo = luaL_checkint(L, 7);
    weapon2id = luaL_checkint(L, 8);
    weapon2ammo = luaL_checkint(L, 9);
    weapon3id = luaL_checkint(L, 10);
    weapon3ammo = luaL_checkint(L, 11);

    lua_pushinteger(L, (lua_Integer)AddPlayerClass(modelid, x, y, z, z_angle, weapon1id, weapon1ammo, weapon2id, weapon2ammo, weapon3id, weapon3ammo));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddPlayerClassEx" --> AddPlayerClassEx ( teamid :integer, modelid :integer, x :number, y :number, z :number, z_angle :number, weapon1id :integer, weapon1ammo :integer, weapon2id :integer, weapon2ammo :integer, weapon3id :integer, weapon3ammo :integer ) stdret :integer
static int luaamx_AddPlayerClassEx (lua_State* L) {
    int NumRetVal = 1;
    int teamid = 0;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float z_angle = 0.0;
    int weapon1id = 0;
    int weapon1ammo = 0;
    int weapon2id = 0;
    int weapon2ammo = 0;
    int weapon3id = 0;
    int weapon3ammo = 0;

    lua_settop(L, 12);
    teamid = luaL_checkint(L, 1);
    modelid = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    z_angle = (float)luaL_checknumber(L, 6);
    weapon1id = luaL_checkint(L, 7);
    weapon1ammo = luaL_checkint(L, 8);
    weapon2id = luaL_checkint(L, 9);
    weapon2ammo = luaL_checkint(L, 10);
    weapon3id = luaL_checkint(L, 11);
    weapon3ammo = luaL_checkint(L, 12);

    lua_pushinteger(L, (lua_Integer)AddPlayerClassEx(teamid, modelid, x, y, z, z_angle, weapon1id, weapon1ammo, weapon2id, weapon2ammo, weapon3id, weapon3ammo));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddStaticVehicle" --> AddStaticVehicle ( modelid :integer, spawn_x :number, spawn_y :number, spawn_z :number, z_angle :number, color1 :integer, color2 :integer ) stdret :integer
static int luaamx_AddStaticVehicle (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    float spawn_x = 0.0;
    float spawn_y = 0.0;
    float spawn_z = 0.0;
    float z_angle = 0.0;
    int color1 = 0;
    int color2 = 0;

    lua_settop(L, 7);
    modelid = luaL_checkint(L, 1);
    spawn_x = (float)luaL_checknumber(L, 2);
    spawn_y = (float)luaL_checknumber(L, 3);
    spawn_z = (float)luaL_checknumber(L, 4);
    z_angle = (float)luaL_checknumber(L, 5);
    color1 = luaL_checkint(L, 6);
    color2 = luaL_checkint(L, 7);

    lua_pushinteger(L, (lua_Integer)AddStaticVehicle(modelid, spawn_x, spawn_y, spawn_z, z_angle, color1, color2));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddStaticVehicleEx" --> AddStaticVehicleEx ( modelid :integer, spawn_x :number, spawn_y :number, spawn_z :number, z_angle :number, color1 :integer, color2 :integer, respawn_delay :integer ) stdret :integer
static int luaamx_AddStaticVehicleEx (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    float spawn_x = 0.0;
    float spawn_y = 0.0;
    float spawn_z = 0.0;
    float z_angle = 0.0;
    int color1 = 0;
    int color2 = 0;
    int respawn_delay = 0;

    lua_settop(L, 8);
    modelid = luaL_checkint(L, 1);
    spawn_x = (float)luaL_checknumber(L, 2);
    spawn_y = (float)luaL_checknumber(L, 3);
    spawn_z = (float)luaL_checknumber(L, 4);
    z_angle = (float)luaL_checknumber(L, 5);
    color1 = luaL_checkint(L, 6);
    color2 = luaL_checkint(L, 7);
    respawn_delay = luaL_checkint(L, 8);

    lua_pushinteger(L, (lua_Integer)AddStaticVehicleEx(modelid, spawn_x, spawn_y, spawn_z, z_angle, color1, color2, respawn_delay));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddStaticPickup" --> AddStaticPickup ( model :integer, type :integer, x :number, y :number, z :number, virtualworld :integer ) stdret :integer
static int luaamx_AddStaticPickup (lua_State* L) {
    int NumRetVal = 1;
    int model = 0;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int virtualworld = 0;

    lua_settop(L, 6);
    model = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    virtualworld = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)AddStaticPickup(model, type, x, y, z, virtualworld));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreatePickup" --> CreatePickup ( model :integer, type :integer, x :number, y :number, z :number, virtualworld :integer ) stdret :integer
static int luaamx_CreatePickup (lua_State* L) {
    int NumRetVal = 1;
    int model = 0;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int virtualworld = 0;

    lua_settop(L, 6);
    model = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    virtualworld = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)CreatePickup(model, type, x, y, z, virtualworld));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyPickup" --> DestroyPickup ( pickup :integer ) stdret :integer
static int luaamx_DestroyPickup (lua_State* L) {
    int NumRetVal = 1;
    int pickup = 0;

    lua_settop(L, 1);
    pickup = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyPickup(pickup));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ShowNameTags" --> ShowNameTags ( show :integer ) stdret :integer
static int luaamx_ShowNameTags (lua_State* L) {
    int NumRetVal = 1;
    int show = 0;

    lua_settop(L, 1);
    show = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)ShowNameTags(show));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ShowPlayerMarkers" --> ShowPlayerMarkers ( show :integer ) stdret :integer
static int luaamx_ShowPlayerMarkers (lua_State* L) {
    int NumRetVal = 1;
    int show = 0;

    lua_settop(L, 1);
    show = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)ShowPlayerMarkers(show));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GameModeExit" --> GameModeExit (  ) stdret :integer
static int luaamx_GameModeExit (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)GameModeExit());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetWorldTime" --> SetWorldTime ( hour :integer ) stdret :integer
static int luaamx_SetWorldTime (lua_State* L) {
    int NumRetVal = 1;
    int hour = 0;

    lua_settop(L, 1);
    hour = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SetWorldTime(hour));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetWeaponName" --> GetWeaponName ( weaponid :integer ) stdret :integer, weapon :string
static int luaamx_GetWeaponName (lua_State* L) {
    int NumRetVal = 1;
    int weaponid = 0;
    char* weapon = (char*)calloc((size_t)128, sizeof(char));
    const static int len = 128;

    lua_settop(L, 1);
    weaponid = luaL_checkint(L, 1);
    if (weapon == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "weapon");};

    lua_pushinteger(L, (lua_Integer)GetWeaponName(weaponid, weapon, len));

    lua_pushstring(L, weapon); free(weapon); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EnableTirePopping" --> EnableTirePopping ( enable :integer ) stdret :integer
static int luaamx_EnableTirePopping (lua_State* L) {
    int NumRetVal = 1;
    int enable = 0;

    lua_settop(L, 1);
    enable = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)EnableTirePopping(enable));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EnableVehicleFriendlyFire" --> EnableVehicleFriendlyFire (  ) stdret :integer
static int luaamx_EnableVehicleFriendlyFire (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)EnableVehicleFriendlyFire());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AllowInteriorWeapons" --> AllowInteriorWeapons ( allow :integer ) stdret :integer
static int luaamx_AllowInteriorWeapons (lua_State* L) {
    int NumRetVal = 1;
    int allow = 0;

    lua_settop(L, 1);
    allow = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)AllowInteriorWeapons(allow));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetWeather" --> SetWeather ( weatherid :integer ) stdret :integer
static int luaamx_SetWeather (lua_State* L) {
    int NumRetVal = 1;
    int weatherid = 0;

    lua_settop(L, 1);
    weatherid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SetWeather(weatherid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetGravity" --> SetGravity ( gravity :number ) stdret :integer
static int luaamx_SetGravity (lua_State* L) {
    int NumRetVal = 1;
    float gravity = 0.0;

    lua_settop(L, 1);
    gravity = (float)luaL_checknumber(L, 1);

    lua_pushinteger(L, (lua_Integer)SetGravity(gravity));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetDeathDropAmount" --> SetDeathDropAmount ( amount :integer ) stdret :integer
static int luaamx_SetDeathDropAmount (lua_State* L) {
    int NumRetVal = 1;
    int amount = 0;

    lua_settop(L, 1);
    amount = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SetDeathDropAmount(amount));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateExplosion" --> CreateExplosion ( x :number, y :number, z :number, type :integer, Radius :number ) stdret :integer
static int luaamx_CreateExplosion (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int type = 0;
    float Radius = 0.0;

    lua_settop(L, 5);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    type = luaL_checkint(L, 4);
    Radius = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)CreateExplosion(x, y, z, type, Radius));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EnableZoneNames" --> EnableZoneNames ( enable :integer ) stdret :integer
static int luaamx_EnableZoneNames (lua_State* L) {
    int NumRetVal = 1;
    int enable = 0;

    lua_settop(L, 1);
    enable = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)EnableZoneNames(enable));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_UsePlayerPedAnims" --> UsePlayerPedAnims (  ) stdret :integer
static int luaamx_UsePlayerPedAnims (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)UsePlayerPedAnims());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DisableInteriorEnterExits" --> DisableInteriorEnterExits (  ) stdret :integer
static int luaamx_DisableInteriorEnterExits (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DisableInteriorEnterExits());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetNameTagDrawDistance" --> SetNameTagDrawDistance ( distance :number ) stdret :integer
static int luaamx_SetNameTagDrawDistance (lua_State* L) {
    int NumRetVal = 1;
    float distance = 0.0;

    lua_settop(L, 1);
    distance = (float)luaL_checknumber(L, 1);

    lua_pushinteger(L, (lua_Integer)SetNameTagDrawDistance(distance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DisableNameTagLOS" --> DisableNameTagLOS (  ) stdret :integer
static int luaamx_DisableNameTagLOS (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DisableNameTagLOS());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_LimitGlobalChatRadius" --> LimitGlobalChatRadius ( chat_radius :number ) stdret :integer
static int luaamx_LimitGlobalChatRadius (lua_State* L) {
    int NumRetVal = 1;
    float chat_radius = 0.0;

    lua_settop(L, 1);
    chat_radius = (float)luaL_checknumber(L, 1);

    lua_pushinteger(L, (lua_Integer)LimitGlobalChatRadius(chat_radius));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_LimitPlayerMarkerRadius" --> LimitPlayerMarkerRadius ( marker_radius :number ) stdret :integer
static int luaamx_LimitPlayerMarkerRadius (lua_State* L) {
    int NumRetVal = 1;
    float marker_radius = 0.0;

    lua_settop(L, 1);
    marker_radius = (float)luaL_checknumber(L, 1);

    lua_pushinteger(L, (lua_Integer)LimitPlayerMarkerRadius(marker_radius));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ConnectNPC" --> ConnectNPC ( name :string, script :string ) stdret :integer
static int luaamx_ConnectNPC (lua_State* L) {
    int NumRetVal = 1;
    const char* name = NULL;
    const char* script = NULL;

    lua_settop(L, 2);
    name = luaL_checkstring(L, 1);
    script = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)ConnectNPC(name, script));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerNPC" --> IsPlayerNPC ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerNPC (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerNPC(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerAdmin" --> IsPlayerAdmin ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerAdmin (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerAdmin(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Kick" --> Kick ( playerid :integer ) stdret :integer
static int luaamx_Kick (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)Kick(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Ban" --> Ban ( playerid :integer ) stdret :integer
static int luaamx_Ban (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)Ban(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_BanEx" --> BanEx ( playerid :integer, reason :string ) stdret :integer
static int luaamx_BanEx (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* reason = NULL;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    reason = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)BanEx(playerid, reason));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SendRconCommand" --> SendRconCommand ( cmd :string ) stdret :integer
static int luaamx_SendRconCommand (lua_State* L) {
    int NumRetVal = 1;
    const char* cmd = NULL;

    lua_settop(L, 1);
    cmd = luaL_checkstring(L, 1);

    lua_pushinteger(L, (lua_Integer)SendRconCommand(cmd));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetServerVarAsString" --> GetServerVarAsString ( varname :string ) stdret :integer, buffer :string
static int luaamx_GetServerVarAsString (lua_State* L) {
    int NumRetVal = 1;
    const char* varname = NULL;
    char* buffer = (char*)calloc((size_t)128, sizeof(char));
    const static int len = 128;

    lua_settop(L, 1);
    varname = luaL_checkstring(L, 1);
    if (buffer == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "buffer");};

    lua_pushinteger(L, (lua_Integer)GetServerVarAsString(varname, buffer, len));

    lua_pushstring(L, buffer); free(buffer); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetServerVarAsInt" --> GetServerVarAsInt ( varname :string ) stdret :integer
static int luaamx_GetServerVarAsInt (lua_State* L) {
    int NumRetVal = 1;
    const char* varname = NULL;

    lua_settop(L, 1);
    varname = luaL_checkstring(L, 1);

    lua_pushinteger(L, (lua_Integer)GetServerVarAsInt(varname));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetServerVarAsBool" --> GetServerVarAsBool ( varname :string ) stdret :integer
static int luaamx_GetServerVarAsBool (lua_State* L) {
    int NumRetVal = 1;
    const char* varname = NULL;

    lua_settop(L, 1);
    varname = luaL_checkstring(L, 1);

    lua_pushinteger(L, (lua_Integer)GetServerVarAsBool(varname));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerNetworkStats" --> GetPlayerNetworkStats ( playerid :integer ) stdret :integer, retstr :string
static int luaamx_GetPlayerNetworkStats (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    char* retstr = (char*)calloc((size_t)128, sizeof(char));
    const static int retstr_size = 128;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);
    if (retstr == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "retstr");};

    lua_pushinteger(L, (lua_Integer)GetPlayerNetworkStats(playerid, retstr, retstr_size));

    lua_pushstring(L, retstr); free(retstr); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetNetworkStats" --> GetNetworkStats (  ) stdret :integer, retstr :string
static int luaamx_GetNetworkStats (lua_State* L) {
    int NumRetVal = 1;
    char* retstr = (char*)calloc((size_t)128, sizeof(char));
    const static int retstr_size = 128;

    lua_settop(L, 0);
    if (retstr == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "retstr");};

    lua_pushinteger(L, (lua_Integer)GetNetworkStats(retstr, retstr_size));

    lua_pushstring(L, retstr); free(retstr); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVersion" --> GetPlayerVersion ( playerid :integer ) stdret :integer, version :string
static int luaamx_GetPlayerVersion (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    char* version = (char*)calloc((size_t)128, sizeof(char));
    const static int len = 128;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);
    if (version == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "version");};

    lua_pushinteger(L, (lua_Integer)GetPlayerVersion(playerid, version, len));

    lua_pushstring(L, version); free(version); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateMenu" --> CreateMenu ( title :string, columns :integer, x :number, y :number, col1width :number, col2width :number ) stdret :integer
static int luaamx_CreateMenu (lua_State* L) {
    int NumRetVal = 1;
    const char* title = NULL;
    int columns = 0;
    float x = 0.0;
    float y = 0.0;
    float col1width = 0.0;
    float col2width = 0.0;

    lua_settop(L, 6);
    title = luaL_checkstring(L, 1);
    columns = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    col1width = (float)luaL_checknumber(L, 5);
    col2width = (float)luaL_checknumber(L, 6);

    lua_pushinteger(L, (lua_Integer)CreateMenu(title, columns, x, y, col1width, col2width));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyMenu" --> DestroyMenu ( menuid :integer ) stdret :integer
static int luaamx_DestroyMenu (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;

    lua_settop(L, 1);
    menuid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyMenu(menuid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddMenuItem" --> AddMenuItem ( menuid :integer, column :integer, menutext :string ) stdret :integer
static int luaamx_AddMenuItem (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;
    int column = 0;
    const char* menutext = NULL;

    lua_settop(L, 3);
    menuid = luaL_checkint(L, 1);
    column = luaL_checkint(L, 2);
    menutext = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)AddMenuItem(menuid, column, menutext));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetMenuColumnHeader" --> SetMenuColumnHeader ( menuid :integer, column :integer, columnheader :string ) stdret :integer
static int luaamx_SetMenuColumnHeader (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;
    int column = 0;
    const char* columnheader = NULL;

    lua_settop(L, 3);
    menuid = luaL_checkint(L, 1);
    column = luaL_checkint(L, 2);
    columnheader = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)SetMenuColumnHeader(menuid, column, columnheader));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ShowMenuForPlayer" --> ShowMenuForPlayer ( menuid :integer, playerid :integer ) stdret :integer
static int luaamx_ShowMenuForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;
    int playerid = 0;

    lua_settop(L, 2);
    menuid = luaL_checkint(L, 1);
    playerid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)ShowMenuForPlayer(menuid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_HideMenuForPlayer" --> HideMenuForPlayer ( menuid :integer, playerid :integer ) stdret :integer
static int luaamx_HideMenuForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;
    int playerid = 0;

    lua_settop(L, 2);
    menuid = luaL_checkint(L, 1);
    playerid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)HideMenuForPlayer(menuid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidMenu" --> IsValidMenu ( menuid :integer ) stdret :integer
static int luaamx_IsValidMenu (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;

    lua_settop(L, 1);
    menuid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidMenu(menuid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DisableMenu" --> DisableMenu ( menuid :integer ) stdret :integer
static int luaamx_DisableMenu (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;

    lua_settop(L, 1);
    menuid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DisableMenu(menuid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DisableMenuRow" --> DisableMenuRow ( menuid :integer, row :integer ) stdret :integer
static int luaamx_DisableMenuRow (lua_State* L) {
    int NumRetVal = 1;
    int menuid = 0;
    int row = 0;

    lua_settop(L, 2);
    menuid = luaL_checkint(L, 1);
    row = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)DisableMenuRow(menuid, row));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerMenu" --> GetPlayerMenu ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerMenu (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerMenu(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawCreate" --> TextDrawCreate ( x :number, y :number, text :string ) stdret :integer
static int luaamx_TextDrawCreate (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    const char* text = NULL;

    lua_settop(L, 3);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    text = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)TextDrawCreate(x, y, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawDestroy" --> TextDrawDestroy ( text :integer ) stdret :integer
static int luaamx_TextDrawDestroy (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;

    lua_settop(L, 1);
    text = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)TextDrawDestroy(text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawLetterSize" --> TextDrawLetterSize ( text :integer, x :number, y :number ) stdret :integer
static int luaamx_TextDrawLetterSize (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    float x = 0.0;
    float y = 0.0;

    lua_settop(L, 3);
    text = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);

    lua_pushinteger(L, (lua_Integer)TextDrawLetterSize(text, x, y));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawTextSize" --> TextDrawTextSize ( text :integer, x :number, y :number ) stdret :integer
static int luaamx_TextDrawTextSize (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    float x = 0.0;
    float y = 0.0;

    lua_settop(L, 3);
    text = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);

    lua_pushinteger(L, (lua_Integer)TextDrawTextSize(text, x, y));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawAlignment" --> TextDrawAlignment ( text :integer, alignment :integer ) stdret :integer
static int luaamx_TextDrawAlignment (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int alignment = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    alignment = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawAlignment(text, alignment));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawColor" --> TextDrawColor ( text :integer, color :integer ) stdret :integer
static int luaamx_TextDrawColor (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int color = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawColor(text, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawUseBox" --> TextDrawUseBox ( text :integer, use :integer ) stdret :integer
static int luaamx_TextDrawUseBox (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int use = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    use = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawUseBox(text, use));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawBoxColor" --> TextDrawBoxColor ( text :integer, color :integer ) stdret :integer
static int luaamx_TextDrawBoxColor (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int color = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawBoxColor(text, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetShadow" --> TextDrawSetShadow ( text :integer, size :integer ) stdret :integer
static int luaamx_TextDrawSetShadow (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int size = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    size = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawSetShadow(text, size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetOutline" --> TextDrawSetOutline ( text :integer, size :integer ) stdret :integer
static int luaamx_TextDrawSetOutline (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int size = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    size = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawSetOutline(text, size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawBackgroundColor" --> TextDrawBackgroundColor ( text :integer, color :integer ) stdret :integer
static int luaamx_TextDrawBackgroundColor (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int color = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawBackgroundColor(text, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawFont" --> TextDrawFont ( text :integer, font :integer ) stdret :integer
static int luaamx_TextDrawFont (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int font = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    font = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawFont(text, font));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetProportional" --> TextDrawSetProportional ( text :integer, set :integer ) stdret :integer
static int luaamx_TextDrawSetProportional (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    int set = 0;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    set = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawSetProportional(text, set));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetSelectable" --> TextDrawSetSelectable ( textid :integer, set :integer ) stdret :integer
static int luaamx_TextDrawSetSelectable (lua_State* L) {
    int NumRetVal = 1;
    int textid = 0;
    int set = 0;

    lua_settop(L, 2);
    textid = luaL_checkint(L, 1);
    set = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawSetSelectable(textid, set));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawShowForPlayer" --> TextDrawShowForPlayer ( playerid :integer, text :integer ) stdret :integer
static int luaamx_TextDrawShowForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int text = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    text = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawShowForPlayer(playerid, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawHideForPlayer" --> TextDrawHideForPlayer ( playerid :integer, text :integer ) stdret :integer
static int luaamx_TextDrawHideForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int text = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    text = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawHideForPlayer(playerid, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawShowForAll" --> TextDrawShowForAll ( text :integer ) stdret :integer
static int luaamx_TextDrawShowForAll (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;

    lua_settop(L, 1);
    text = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)TextDrawShowForAll(text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawHideForAll" --> TextDrawHideForAll ( text :integer ) stdret :integer
static int luaamx_TextDrawHideForAll (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;

    lua_settop(L, 1);
    text = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)TextDrawHideForAll(text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetString" --> TextDrawSetString ( text :integer, string :string ) stdret :integer
static int luaamx_TextDrawSetString (lua_State* L) {
    int NumRetVal = 1;
    int text = 0;
    const char* string = NULL;

    lua_settop(L, 2);
    text = luaL_checkint(L, 1);
    string = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawSetString(text, string));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetPreviewModel" --> TextDrawSetPreviewModel ( textid :integer, modelindex :integer ) stdret :integer
static int luaamx_TextDrawSetPreviewModel (lua_State* L) {
    int NumRetVal = 1;
    int textid = 0;
    int modelindex = 0;

    lua_settop(L, 2);
    textid = luaL_checkint(L, 1);
    modelindex = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TextDrawSetPreviewModel(textid, modelindex));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetPreviewRot" --> TextDrawSetPreviewRot ( textid :integer, fRotX :number, fRotY :number, fRotZ :number, fZoom :number ) stdret :integer
static int luaamx_TextDrawSetPreviewRot (lua_State* L) {
    int NumRetVal = 1;
    int textid = 0;
    float fRotX = 0.0;
    float fRotY = 0.0;
    float fRotZ = 0.0;
    float fZoom = 0.0;

    lua_settop(L, 5);
    textid = luaL_checkint(L, 1);
    fRotX = (float)luaL_checknumber(L, 2);
    fRotY = (float)luaL_checknumber(L, 3);
    fRotZ = (float)luaL_checknumber(L, 4);
    fZoom = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)TextDrawSetPreviewRot(textid, fRotX, fRotY, fRotZ, fZoom));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TextDrawSetPreviewVehCol" --> TextDrawSetPreviewVehCol ( textid :integer, color1 :integer, color2 :integer ) stdret :integer
static int luaamx_TextDrawSetPreviewVehCol (lua_State* L) {
    int NumRetVal = 1;
    int textid = 0;
    int color1 = 0;
    int color2 = 0;

    lua_settop(L, 3);
    textid = luaL_checkint(L, 1);
    color1 = luaL_checkint(L, 2);
    color2 = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)TextDrawSetPreviewVehCol(textid, color1, color2));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneCreate" --> GangZoneCreate ( minx :number, miny :number, maxx :number, maxy :number ) stdret :integer
static int luaamx_GangZoneCreate (lua_State* L) {
    int NumRetVal = 1;
    float minx = 0.0;
    float miny = 0.0;
    float maxx = 0.0;
    float maxy = 0.0;

    lua_settop(L, 4);
    minx = (float)luaL_checknumber(L, 1);
    miny = (float)luaL_checknumber(L, 2);
    maxx = (float)luaL_checknumber(L, 3);
    maxy = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)GangZoneCreate(minx, miny, maxx, maxy));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneDestroy" --> GangZoneDestroy ( zone :integer ) stdret :integer
static int luaamx_GangZoneDestroy (lua_State* L) {
    int NumRetVal = 1;
    int zone = 0;

    lua_settop(L, 1);
    zone = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GangZoneDestroy(zone));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneShowForPlayer" --> GangZoneShowForPlayer ( playerid :integer, zone :integer, color :integer ) stdret :integer
static int luaamx_GangZoneShowForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int zone = 0;
    int color = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    zone = luaL_checkint(L, 2);
    color = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)GangZoneShowForPlayer(playerid, zone, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneShowForAll" --> GangZoneShowForAll ( zone :integer, color :integer ) stdret :integer
static int luaamx_GangZoneShowForAll (lua_State* L) {
    int NumRetVal = 1;
    int zone = 0;
    int color = 0;

    lua_settop(L, 2);
    zone = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GangZoneShowForAll(zone, color));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneHideForPlayer" --> GangZoneHideForPlayer ( playerid :integer, zone :integer ) stdret :integer
static int luaamx_GangZoneHideForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int zone = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    zone = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GangZoneHideForPlayer(playerid, zone));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneHideForAll" --> GangZoneHideForAll ( zone :integer ) stdret :integer
static int luaamx_GangZoneHideForAll (lua_State* L) {
    int NumRetVal = 1;
    int zone = 0;

    lua_settop(L, 1);
    zone = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GangZoneHideForAll(zone));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneFlashForPlayer" --> GangZoneFlashForPlayer ( playerid :integer, zone :integer, flashcolor :integer ) stdret :integer
static int luaamx_GangZoneFlashForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int zone = 0;
    int flashcolor = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    zone = luaL_checkint(L, 2);
    flashcolor = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)GangZoneFlashForPlayer(playerid, zone, flashcolor));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneFlashForAll" --> GangZoneFlashForAll ( zone :integer, flashcolor :integer ) stdret :integer
static int luaamx_GangZoneFlashForAll (lua_State* L) {
    int NumRetVal = 1;
    int zone = 0;
    int flashcolor = 0;

    lua_settop(L, 2);
    zone = luaL_checkint(L, 1);
    flashcolor = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GangZoneFlashForAll(zone, flashcolor));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneStopFlashForPlayer" --> GangZoneStopFlashForPlayer ( playerid :integer, zone :integer ) stdret :integer
static int luaamx_GangZoneStopFlashForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int zone = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    zone = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GangZoneStopFlashForPlayer(playerid, zone));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GangZoneStopFlashForAll" --> GangZoneStopFlashForAll ( zone :integer ) stdret :integer
static int luaamx_GangZoneStopFlashForAll (lua_State* L) {
    int NumRetVal = 1;
    int zone = 0;

    lua_settop(L, 1);
    zone = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GangZoneStopFlashForAll(zone));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Create3DTextLabel" --> Create3DTextLabel ( text :string, color :integer, x :number, y :number, z :number, DrawDistance :number, virtualworld :integer, testLOS :integer ) stdret :integer
static int luaamx_Create3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    const char* text = NULL;
    int color = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float DrawDistance = 0.0;
    int virtualworld = 0;
    int testLOS = 0;

    lua_settop(L, 8);
    text = luaL_checkstring(L, 1);
    color = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    DrawDistance = (float)luaL_checknumber(L, 6);
    virtualworld = luaL_checkint(L, 7);
    testLOS = luaL_checkint(L, 8);

    lua_pushinteger(L, (lua_Integer)Create3DTextLabel(text, color, x, y, z, DrawDistance, virtualworld, testLOS));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Delete3DTextLabel" --> Delete3DTextLabel ( id :integer ) stdret :integer
static int luaamx_Delete3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;

    lua_settop(L, 1);
    id = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)Delete3DTextLabel(id));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Attach3DTextLabelToPlayer" --> Attach3DTextLabelToPlayer ( id :integer, playerid :integer, OffsetX :number, OffsetY :number, OffsetZ :number ) stdret :integer
static int luaamx_Attach3DTextLabelToPlayer (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;
    int playerid = 0;
    float OffsetX = 0.0;
    float OffsetY = 0.0;
    float OffsetZ = 0.0;

    lua_settop(L, 5);
    id = luaL_checkint(L, 1);
    playerid = luaL_checkint(L, 2);
    OffsetX = (float)luaL_checknumber(L, 3);
    OffsetY = (float)luaL_checknumber(L, 4);
    OffsetZ = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)Attach3DTextLabelToPlayer(id, playerid, OffsetX, OffsetY, OffsetZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Attach3DTextLabelToVehicle" --> Attach3DTextLabelToVehicle ( id :integer, vehicleid :integer, OffsetX :number, OffsetY :number, OffsetZ :number ) stdret :integer
static int luaamx_Attach3DTextLabelToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;
    int vehicleid = 0;
    float OffsetX = 0.0;
    float OffsetY = 0.0;
    float OffsetZ = 0.0;

    lua_settop(L, 5);
    id = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);
    OffsetX = (float)luaL_checknumber(L, 3);
    OffsetY = (float)luaL_checknumber(L, 4);
    OffsetZ = (float)luaL_checknumber(L, 5);

    lua_pushinteger(L, (lua_Integer)Attach3DTextLabelToVehicle(id, vehicleid, OffsetX, OffsetY, OffsetZ));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Update3DTextLabelText" --> Update3DTextLabelText ( id :integer, color :integer, text :string ) stdret :integer
static int luaamx_Update3DTextLabelText (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;
    int color = 0;
    const char* text = NULL;

    lua_settop(L, 3);
    id = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);
    text = luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)Update3DTextLabelText(id, color, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreatePlayer3DTextLabel" --> CreatePlayer3DTextLabel ( playerid :integer, text :string, color :integer, x :number, y :number, z :number, DrawDistance :number, attachedplayer :integer, attachedvehicle :integer, testLOS :integer ) stdret :integer
static int luaamx_CreatePlayer3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    const char* text = NULL;
    int color = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float DrawDistance = 0.0;
    int attachedplayer = 0;
    int attachedvehicle = 0;
    int testLOS = 0;

    lua_settop(L, 10);
    playerid = luaL_checkint(L, 1);
    text = luaL_checkstring(L, 2);
    color = luaL_checkint(L, 3);
    x = (float)luaL_checknumber(L, 4);
    y = (float)luaL_checknumber(L, 5);
    z = (float)luaL_checknumber(L, 6);
    DrawDistance = (float)luaL_checknumber(L, 7);
    attachedplayer = luaL_checkint(L, 8);
    attachedvehicle = luaL_checkint(L, 9);
    testLOS = luaL_checkint(L, 10);

    lua_pushinteger(L, (lua_Integer)CreatePlayer3DTextLabel(playerid, text, color, x, y, z, DrawDistance, attachedplayer, attachedvehicle, testLOS));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DeletePlayer3DTextLabel" --> DeletePlayer3DTextLabel ( playerid :integer, id :integer ) stdret :integer
static int luaamx_DeletePlayer3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int id = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)DeletePlayer3DTextLabel(playerid, id));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_UpdatePlayer3DTextLabelText" --> UpdatePlayer3DTextLabelText ( playerid :integer, id :integer, color :integer, text :string ) stdret :integer
static int luaamx_UpdatePlayer3DTextLabelText (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int id = 0;
    int color = 0;
    const char* text = NULL;

    lua_settop(L, 4);
    playerid = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    color = luaL_checkint(L, 3);
    text = luaL_checkstring(L, 4);

    lua_pushinteger(L, (lua_Integer)UpdatePlayer3DTextLabelText(playerid, id, color, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ShowPlayerDialog" --> ShowPlayerDialog ( playerid :integer, dialogid :integer, style :integer, caption :string, info :string, button1 :string, button2 :string ) stdret :integer
static int luaamx_ShowPlayerDialog (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int dialogid = 0;
    int style = 0;
    const char* caption = NULL;
    const char* info = NULL;
    const char* button1 = NULL;
    const char* button2 = NULL;

    lua_settop(L, 7);
    playerid = luaL_checkint(L, 1);
    dialogid = luaL_checkint(L, 2);
    style = luaL_checkint(L, 3);
    caption = luaL_checkstring(L, 4);
    info = luaL_checkstring(L, 5);
    button1 = luaL_checkstring(L, 6);
    button2 = luaL_checkstring(L, 7);

    lua_pushinteger(L, (lua_Integer)ShowPlayerDialog(playerid, dialogid, style, caption, info, button1, button2));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateVehicle" --> CreateVehicle ( vehicletype :integer, x :number, y :number, z :number, rotation :number, color1 :integer, color2 :integer, respawn_delay :integer ) stdret :integer
static int luaamx_CreateVehicle (lua_State* L) {
    int NumRetVal = 1;
    int vehicletype = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float rotation = 0.0;
    int color1 = 0;
    int color2 = 0;
    int respawn_delay = 0;

    lua_settop(L, 8);
    vehicletype = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    rotation = (float)luaL_checknumber(L, 5);
    color1 = luaL_checkint(L, 6);
    color2 = luaL_checkint(L, 7);
    respawn_delay = luaL_checkint(L, 8);

    lua_pushinteger(L, (lua_Integer)CreateVehicle(vehicletype, x, y, z, rotation, color1, color2, respawn_delay));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyVehicle" --> DestroyVehicle ( vehicleid :integer ) stdret :integer
static int luaamx_DestroyVehicle (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyVehicle(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsVehicleStreamedIn" --> IsVehicleStreamedIn ( vehicleid :integer, forplayerid :integer ) stdret :integer
static int luaamx_IsVehicleStreamedIn (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int forplayerid = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    forplayerid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsVehicleStreamedIn(vehicleid, forplayerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehiclePos" --> GetVehiclePos ( vehicleid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetVehiclePos (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehiclePos(vehicleid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehiclePos" --> SetVehiclePos ( vehicleid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetVehiclePos (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    vehicleid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetVehiclePos(vehicleid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleZAngle" --> GetVehicleZAngle ( vehicleid :integer ) stdret :integer, z_angle :number
static int luaamx_GetVehicleZAngle (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float z_angle = 0.0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleZAngle(vehicleid, z_angle));

    lua_pushnumber(L, (lua_Number)z_angle); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleRotationQuat" --> GetVehicleRotationQuat ( vehicleid :integer ) stdret :integer, w :number, x :number, y :number, z :number
static int luaamx_GetVehicleRotationQuat (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float w = 0.0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleRotationQuat(vehicleid, w, x, y, z));

    lua_pushnumber(L, (lua_Number)w); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleZAngle" --> SetVehicleZAngle ( vehicleid :integer, z_angle :number ) stdret :integer
static int luaamx_SetVehicleZAngle (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float z_angle = 0.0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    z_angle = (float)luaL_checknumber(L, 2);

    lua_pushinteger(L, (lua_Integer)SetVehicleZAngle(vehicleid, z_angle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleParamsForPlayer" --> SetVehicleParamsForPlayer ( vehicleid :integer, playerid :integer, objective :integer, doorslocked :integer ) stdret :integer
static int luaamx_SetVehicleParamsForPlayer (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int playerid = 0;
    int objective = 0;
    int doorslocked = 0;

    lua_settop(L, 4);
    vehicleid = luaL_checkint(L, 1);
    playerid = luaL_checkint(L, 2);
    objective = luaL_checkint(L, 3);
    doorslocked = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)SetVehicleParamsForPlayer(vehicleid, playerid, objective, doorslocked));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ManualVehicleEngineAndLights" --> ManualVehicleEngineAndLights (  ) stdret :integer
static int luaamx_ManualVehicleEngineAndLights (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)ManualVehicleEngineAndLights());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleParamsEx" --> SetVehicleParamsEx ( vehicleid :integer, engine :integer, lights :integer, alarm :integer, doors :integer, bonnet :integer, boot :integer, objective :integer ) stdret :integer
static int luaamx_SetVehicleParamsEx (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int engine = 0;
    int lights = 0;
    int alarm = 0;
    int doors = 0;
    int bonnet = 0;
    int boot = 0;
    int objective = 0;

    lua_settop(L, 8);
    vehicleid = luaL_checkint(L, 1);
    engine = luaL_checkint(L, 2);
    lights = luaL_checkint(L, 3);
    alarm = luaL_checkint(L, 4);
    doors = luaL_checkint(L, 5);
    bonnet = luaL_checkint(L, 6);
    boot = luaL_checkint(L, 7);
    objective = luaL_checkint(L, 8);

    lua_pushinteger(L, (lua_Integer)SetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleParamsEx" --> GetVehicleParamsEx ( vehicleid :integer ) stdret :integer, engine :integer, lights :integer, alarm :integer, doors :integer, bonnet :integer, boot :integer, objective :integer
static int luaamx_GetVehicleParamsEx (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int engine = 0;
    int lights = 0;
    int alarm = 0;
    int doors = 0;
    int bonnet = 0;
    int boot = 0;
    int objective = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective));

    lua_pushinteger(L, (lua_Integer)engine); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)lights); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)alarm); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)doors); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)bonnet); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)boot); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)objective); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleToRespawn" --> SetVehicleToRespawn ( vehicleid :integer ) stdret :integer
static int luaamx_SetVehicleToRespawn (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)SetVehicleToRespawn(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_LinkVehicleToInterior" --> LinkVehicleToInterior ( vehicleid :integer, interiorid :integer ) stdret :integer
static int luaamx_LinkVehicleToInterior (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int interiorid = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    interiorid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)LinkVehicleToInterior(vehicleid, interiorid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AddVehicleComponent" --> AddVehicleComponent ( vehicleid :integer, componentid :integer ) stdret :integer
static int luaamx_AddVehicleComponent (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int componentid = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    componentid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AddVehicleComponent(vehicleid, componentid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_RemoveVehicleComponent" --> RemoveVehicleComponent ( vehicleid :integer, componentid :integer ) stdret :integer
static int luaamx_RemoveVehicleComponent (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int componentid = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    componentid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)RemoveVehicleComponent(vehicleid, componentid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ChangeVehicleColor" --> ChangeVehicleColor ( vehicleid :integer, color1 :integer, color2 :integer ) stdret :integer
static int luaamx_ChangeVehicleColor (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int color1 = 0;
    int color2 = 0;

    lua_settop(L, 3);
    vehicleid = luaL_checkint(L, 1);
    color1 = luaL_checkint(L, 2);
    color2 = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)ChangeVehicleColor(vehicleid, color1, color2));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_ChangeVehiclePaintjob" --> ChangeVehiclePaintjob ( vehicleid :integer, paintjobid :integer ) stdret :integer
static int luaamx_ChangeVehiclePaintjob (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int paintjobid = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    paintjobid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)ChangeVehiclePaintjob(vehicleid, paintjobid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleHealth" --> SetVehicleHealth ( vehicleid :integer, health :number ) stdret :integer
static int luaamx_SetVehicleHealth (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float health = 0.0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    health = (float)luaL_checknumber(L, 2);

    lua_pushinteger(L, (lua_Integer)SetVehicleHealth(vehicleid, health));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleHealth" --> GetVehicleHealth ( vehicleid :integer ) stdret :integer, health :number
static int luaamx_GetVehicleHealth (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float health = 0.0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleHealth(vehicleid, health));

    lua_pushnumber(L, (lua_Number)health); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachTrailerToVehicle" --> AttachTrailerToVehicle ( trailerid :integer, vehicleid :integer ) stdret :integer
static int luaamx_AttachTrailerToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int trailerid = 0;
    int vehicleid = 0;

    lua_settop(L, 2);
    trailerid = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AttachTrailerToVehicle(trailerid, vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DetachTrailerFromVehicle" --> DetachTrailerFromVehicle ( vehicleid :integer ) stdret :integer
static int luaamx_DetachTrailerFromVehicle (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DetachTrailerFromVehicle(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsTrailerAttachedToVehicle" --> IsTrailerAttachedToVehicle ( vehicleid :integer ) stdret :integer
static int luaamx_IsTrailerAttachedToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsTrailerAttachedToVehicle(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleTrailer" --> GetVehicleTrailer ( vehicleid :integer ) stdret :integer
static int luaamx_GetVehicleTrailer (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleTrailer(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleNumberPlate" --> SetVehicleNumberPlate ( vehicleid :integer, numberplate :string ) stdret :integer
static int luaamx_SetVehicleNumberPlate (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    const char* numberplate = NULL;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    numberplate = luaL_checkstring(L, 2);

    lua_pushinteger(L, (lua_Integer)SetVehicleNumberPlate(vehicleid, numberplate));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleModel" --> GetVehicleModel ( vehicleid :integer ) stdret :integer
static int luaamx_GetVehicleModel (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleModel(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleComponentInSlot" --> GetVehicleComponentInSlot ( vehicleid :integer, slot :integer ) stdret :integer
static int luaamx_GetVehicleComponentInSlot (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int slot = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    slot = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GetVehicleComponentInSlot(vehicleid, slot));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleComponentType" --> GetVehicleComponentType ( component :integer ) stdret :integer
static int luaamx_GetVehicleComponentType (lua_State* L) {
    int NumRetVal = 1;
    int component = 0;

    lua_settop(L, 1);
    component = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleComponentType(component));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_RepairVehicle" --> RepairVehicle ( vehicleid :integer ) stdret :integer
static int luaamx_RepairVehicle (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)RepairVehicle(vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleVelocity" --> GetVehicleVelocity ( vehicleid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetVehicleVelocity (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleVelocity(vehicleid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleVelocity" --> SetVehicleVelocity ( vehicleid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetVehicleVelocity (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    vehicleid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetVehicleVelocity(vehicleid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleAngularVelocity" --> SetVehicleAngularVelocity ( vehicleid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetVehicleAngularVelocity (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    vehicleid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetVehicleAngularVelocity(vehicleid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleDamageStatus" --> GetVehicleDamageStatus ( vehicleid :integer ) stdret :integer, panels :integer, doors :integer, lights :integer, tires :integer
static int luaamx_GetVehicleDamageStatus (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int panels = 0;
    int doors = 0;
    int lights = 0;
    int tires = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleDamageStatus(vehicleid, panels, doors, lights, tires));

    lua_pushinteger(L, (lua_Integer)panels); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)doors); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)lights); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)tires); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_UpdateVehicleDamageStatus" --> UpdateVehicleDamageStatus ( vehicleid :integer, panels :integer, doors :integer, lights :integer, tires :integer ) stdret :integer
static int luaamx_UpdateVehicleDamageStatus (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int panels = 0;
    int doors = 0;
    int lights = 0;
    int tires = 0;

    lua_settop(L, 5);
    vehicleid = luaL_checkint(L, 1);
    panels = luaL_checkint(L, 2);
    doors = luaL_checkint(L, 3);
    lights = luaL_checkint(L, 4);
    tires = luaL_checkint(L, 5);

    lua_pushinteger(L, (lua_Integer)UpdateVehicleDamageStatus(vehicleid, panels, doors, lights, tires));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleModelInfo" --> GetVehicleModelInfo ( vehiclemodel :integer, infotype :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetVehicleModelInfo (lua_State* L) {
    int NumRetVal = 1;
    int vehiclemodel = 0;
    int infotype = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 2);
    vehiclemodel = luaL_checkint(L, 1);
    infotype = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)GetVehicleModelInfo(vehiclemodel, infotype, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetVehicleVirtualWorld" --> SetVehicleVirtualWorld ( vehicleid :integer, worldid :integer ) stdret :integer
static int luaamx_SetVehicleVirtualWorld (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;
    int worldid = 0;

    lua_settop(L, 2);
    vehicleid = luaL_checkint(L, 1);
    worldid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)SetVehicleVirtualWorld(vehicleid, worldid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetVehicleVirtualWorld" --> GetVehicleVirtualWorld ( vehicleid :integer ) stdret :integer
static int luaamx_GetVehicleVirtualWorld (lua_State* L) {
    int NumRetVal = 1;
    int vehicleid = 0;

    lua_settop(L, 1);
    vehicleid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetVehicleVirtualWorld(vehicleid));

    //No other values returned

    return NumRetVal;
};


static const luaL_Reg[] FuncArr = {
    {"CreateObject",                   luaamx_CreateObject},
    {"AttachObjectToVehicle",          luaamx_AttachObjectToVehicle},
    {"AttachObjectToObject",           luaamx_AttachObjectToObject},
    {"AttachObjectToPlayer",           luaamx_AttachObjectToPlayer},
    {"SetObjectPos",                   luaamx_SetObjectPos},
    {"GetObjectPos",                   luaamx_GetObjectPos},
    {"SetObjectRot",                   luaamx_SetObjectRot},
    {"GetObjectRot",                   luaamx_GetObjectRot},
    {"IsValidObject",                  luaamx_IsValidObject},
    {"DestroyObject",                  luaamx_DestroyObject},
    {"MoveObject",                     luaamx_MoveObject},
    {"StopObject",                     luaamx_StopObject},
    {"IsObjectMoving",                 luaamx_IsObjectMoving},
    {"EditObject",                     luaamx_EditObject},
    {"EditPlayerObject",               luaamx_EditPlayerObject},
    {"SelectObject",                   luaamx_SelectObject},
    {"CancelEdit",                     luaamx_CancelEdit},
    {"CreatePlayerObject",             luaamx_CreatePlayerObject},
    {"AttachPlayerObjectToVehicle",    luaamx_AttachPlayerObjectToVehicle},
    {"SetPlayerObjectPos",             luaamx_SetPlayerObjectPos},
    {"GetPlayerObjectPos",             luaamx_GetPlayerObjectPos},
    {"SetPlayerObjectRot",             luaamx_SetPlayerObjectRot},
    {"GetPlayerObjectRot",             luaamx_GetPlayerObjectRot},
    {"IsValidPlayerObject",            luaamx_IsValidPlayerObject},
    {"DestroyPlayerObject",            luaamx_DestroyPlayerObject},
    {"MovePlayerObject",               luaamx_MovePlayerObject},
    {"StopPlayerObject",               luaamx_StopPlayerObject},
    {"IsPlayerObjectMoving",           luaamx_IsPlayerObjectMoving},
    {"AttachPlayerObjectToPlayer",     luaamx_AttachPlayerObjectToPlayer},
    {"SetObjectMaterial",              luaamx_SetObjectMaterial},
    {"SetPlayerObjectMaterial",        luaamx_SetPlayerObjectMaterial},
    {"SetObjectMaterialText",          luaamx_SetObjectMaterialText},
    {"SetPlayerObjectMaterialText",    luaamx_SetPlayerObjectMaterialText},
    {"SetSpawnInfo",                   luaamx_SetSpawnInfo},
    {"SpawnPlayer",                    luaamx_SpawnPlayer},
    {"SetPlayerPos",                   luaamx_SetPlayerPos},
    {"SetPlayerPosFindZ",              luaamx_SetPlayerPosFindZ},
    {"GetPlayerPos",                   luaamx_GetPlayerPos},
    {"SetPlayerFacingAngle",           luaamx_SetPlayerFacingAngle},
    {"GetPlayerFacingAngle",           luaamx_GetPlayerFacingAngle},
    {"IsPlayerInRangeOfPoint",         luaamx_IsPlayerInRangeOfPoint},
    {"IsPlayerStreamedIn",             luaamx_IsPlayerStreamedIn},
    {"SetPlayerInterior",              luaamx_SetPlayerInterior},
    {"GetPlayerInterior",              luaamx_GetPlayerInterior},
    {"SetPlayerHealth",                luaamx_SetPlayerHealth},
    {"GetPlayerHealth",                luaamx_GetPlayerHealth},
    {"SetPlayerArmour",                luaamx_SetPlayerArmour},
    {"GetPlayerArmour",                luaamx_GetPlayerArmour},
    {"SetPlayerAmmo",                  luaamx_SetPlayerAmmo},
    {"GetPlayerAmmo",                  luaamx_GetPlayerAmmo},
    {"GetPlayerWeaponState",           luaamx_GetPlayerWeaponState},
    {"GetPlayerTargetPlayer",          luaamx_GetPlayerTargetPlayer},
    {"SetPlayerTeam",                  luaamx_SetPlayerTeam},
    {"GetPlayerTeam",                  luaamx_GetPlayerTeam},
    {"SetPlayerScore",                 luaamx_SetPlayerScore},
    {"GetPlayerScore",                 luaamx_GetPlayerScore},
    {"GetPlayerDrunkLevel",            luaamx_GetPlayerDrunkLevel},
    {"SetPlayerDrunkLevel",            luaamx_SetPlayerDrunkLevel},
    {"SetPlayerColor",                 luaamx_SetPlayerColor},
    {"GetPlayerColor",                 luaamx_GetPlayerColor},
    {"SetPlayerSkin",                  luaamx_SetPlayerSkin},
    {"GetPlayerSkin",                  luaamx_GetPlayerSkin},
    {"GivePlayerWeapon",               luaamx_GivePlayerWeapon},
    {"ResetPlayerWeapons",             luaamx_ResetPlayerWeapons},
    {"SetPlayerArmedWeapon",           luaamx_SetPlayerArmedWeapon},
    {"GetPlayerWeaponData",            luaamx_GetPlayerWeaponData},
    {"GivePlayerMoney",                luaamx_GivePlayerMoney},
    {"ResetPlayerMoney",               luaamx_ResetPlayerMoney},
    {"SetPlayerName",                  luaamx_SetPlayerName},
    {"GetPlayerMoney",                 luaamx_GetPlayerMoney},
    {"GetPlayerState",                 luaamx_GetPlayerState},
    {"GetPlayerIp",                    luaamx_GetPlayerIp},
    {"GetPlayerPing",                  luaamx_GetPlayerPing},
    {"GetPlayerWeapon",                luaamx_GetPlayerWeapon},
    {"GetPlayerKeys",                  luaamx_GetPlayerKeys},
    {"GetPlayerName",                  luaamx_GetPlayerName},
    {"SetPlayerTime",                  luaamx_SetPlayerTime},
    {"GetPlayerTime",                  luaamx_GetPlayerTime},
    {"TogglePlayerClock",              luaamx_TogglePlayerClock},
    {"SetPlayerWeather",               luaamx_SetPlayerWeather},
    {"ForceClassSelection",            luaamx_ForceClassSelection},
    {"SetPlayerWantedLevel",           luaamx_SetPlayerWantedLevel},
    {"GetPlayerWantedLevel",           luaamx_GetPlayerWantedLevel},
    {"SetPlayerFightingStyle",         luaamx_SetPlayerFightingStyle},
    {"GetPlayerFightingStyle",         luaamx_GetPlayerFightingStyle},
    {"SetPlayerVelocity",              luaamx_SetPlayerVelocity},
    {"GetPlayerVelocity",              luaamx_GetPlayerVelocity},
    {"PlayCrimeReportForPlayer",       luaamx_PlayCrimeReportForPlayer},
    {"PlayAudioStreamForPlayer",       luaamx_PlayAudioStreamForPlayer},
    {"StopAudioStreamForPlayer",       luaamx_StopAudioStreamForPlayer},
    {"SetPlayerShopName",              luaamx_SetPlayerShopName},
    {"SetPlayerSkillLevel",            luaamx_SetPlayerSkillLevel},
    {"GetPlayerSurfingVehicleID",      luaamx_GetPlayerSurfingVehicleID},
    {"GetPlayerSurfingObjectID",       luaamx_GetPlayerSurfingObjectID},
    {"RemoveBuildingForPlayer",        luaamx_RemoveBuildingForPlayer},
    {"SetPlayerAttachedObject",        luaamx_SetPlayerAttachedObject},
    {"RemovePlayerAttachedObject",     luaamx_RemovePlayerAttachedObject},
    {"IsPlayerAttachedObjectSlotUsed", luaamx_IsPlayerAttachedObjectSlotUsed},
    {"EditAttachedObject",             luaamx_EditAttachedObject},
    {"CreatePlayerTextDraw",           luaamx_CreatePlayerTextDraw},
    {"PlayerTextDrawDestroy",          luaamx_PlayerTextDrawDestroy},
    {"PlayerTextDrawLetterSize",       luaamx_PlayerTextDrawLetterSize},
    {"PlayerTextDrawTextSize",         luaamx_PlayerTextDrawTextSize},
    {"PlayerTextDrawAlignment",        luaamx_PlayerTextDrawAlignment},
    {"PlayerTextDrawColor",            luaamx_PlayerTextDrawColor},
    {"PlayerTextDrawUseBox",           luaamx_PlayerTextDrawUseBox},
    {"PlayerTextDrawBoxColor",         luaamx_PlayerTextDrawBoxColor},
    {"PlayerTextDrawSetShadow",        luaamx_PlayerTextDrawSetShadow},
    {"PlayerTextDrawSetOutline",       luaamx_PlayerTextDrawSetOutline},
    {"PlayerTextDrawBackgroundColor",  luaamx_PlayerTextDrawBackgroundColor},
    {"PlayerTextDrawFont",             luaamx_PlayerTextDrawFont},
    {"PlayerTextDrawSetProportional",  luaamx_PlayerTextDrawSetProportional},
    {"PlayerTextDrawSetSelectable",    luaamx_PlayerTextDrawSetSelectable},
    {"PlayerTextDrawShow",             luaamx_PlayerTextDrawShow},
    {"PlayerTextDrawHide",             luaamx_PlayerTextDrawHide},
    {"PlayerTextDrawSetString",        luaamx_PlayerTextDrawSetString},
    {"PlayerTextDrawSetPreviewModel",  luaamx_PlayerTextDrawSetPreviewModel},
    {"PlayerTextDrawSetPreviewRot",    luaamx_PlayerTextDrawSetPreviewRot},
    {"PlayerTextDrawSetPreviewVehCol", luaamx_PlayerTextDrawSetPreviewVehCol},
    {"SetPlayerChatBubble",            luaamx_SetPlayerChatBubble},
    {"PutPlayerInVehicle",             luaamx_PutPlayerInVehicle},
    {"GetPlayerVehicleID",             luaamx_GetPlayerVehicleID},
    {"GetPlayerVehicleSeat",           luaamx_GetPlayerVehicleSeat},
    {"RemovePlayerFromVehicle",        luaamx_RemovePlayerFromVehicle},
    {"TogglePlayerControllable",       luaamx_TogglePlayerControllable},
    {"PlayerPlaySound",                luaamx_PlayerPlaySound},
    {"ApplyAnimation",                 luaamx_ApplyAnimation},
    {"ClearAnimations",                luaamx_ClearAnimations},
    {"GetPlayerAnimationIndex",        luaamx_GetPlayerAnimationIndex},
    {"GetAnimationName",               luaamx_GetAnimationName},
    {"GetPlayerSpecialAction",         luaamx_GetPlayerSpecialAction},
    {"SetPlayerSpecialAction",         luaamx_SetPlayerSpecialAction},
    {"SetPlayerCheckpoint",            luaamx_SetPlayerCheckpoint},
    {"DisablePlayerCheckpoint",        luaamx_DisablePlayerCheckpoint},
    {"SetPlayerRaceCheckpoint",        luaamx_SetPlayerRaceCheckpoint},
    {"DisablePlayerRaceCheckpoint",    luaamx_DisablePlayerRaceCheckpoint},
    {"SetPlayerWorldBounds",           luaamx_SetPlayerWorldBounds},
    {"SetPlayerMarkerForPlayer",       luaamx_SetPlayerMarkerForPlayer},
    {"ShowPlayerNameTagForPlayer",     luaamx_ShowPlayerNameTagForPlayer},
    {"SetPlayerMapIcon",               luaamx_SetPlayerMapIcon},
    {"RemovePlayerMapIcon",            luaamx_RemovePlayerMapIcon},
    {"SetPlayerCameraPos",             luaamx_SetPlayerCameraPos},
    {"SetPlayerCameraLookAt",          luaamx_SetPlayerCameraLookAt},
    {"SetCameraBehindPlayer",          luaamx_SetCameraBehindPlayer},
    {"GetPlayerCameraPos",             luaamx_GetPlayerCameraPos},
    {"GetPlayerCameraFrontVector",     luaamx_GetPlayerCameraFrontVector},
    {"GetPlayerCameraMode",            luaamx_GetPlayerCameraMode},
    {"AttachCameraToObject",           luaamx_AttachCameraToObject},
    {"AttachCameraToPlayerObject",     luaamx_AttachCameraToPlayerObject},
    {"InterpolateCameraPos",           luaamx_InterpolateCameraPos},
    {"InterpolateCameraLookAt",        luaamx_InterpolateCameraLookAt},
    {"IsPlayerConnected",              luaamx_IsPlayerConnected},
    {"IsPlayerInVehicle",              luaamx_IsPlayerInVehicle},
    {"IsPlayerInAnyVehicle",           luaamx_IsPlayerInAnyVehicle},
    {"IsPlayerInCheckpoint",           luaamx_IsPlayerInCheckpoint},
    {"IsPlayerInRaceCheckpoint",       luaamx_IsPlayerInRaceCheckpoint},
    {"SetPlayerVirtualWorld",          luaamx_SetPlayerVirtualWorld},
    {"GetPlayerVirtualWorld",          luaamx_GetPlayerVirtualWorld},
    {"EnableStuntBonusForPlayer",      luaamx_EnableStuntBonusForPlayer},
    {"EnableStuntBonusForAll",         luaamx_EnableStuntBonusForAll},
    {"TogglePlayerSpectating",         luaamx_TogglePlayerSpectating},
    {"PlayerSpectatePlayer",           luaamx_PlayerSpectatePlayer},
    {"PlayerSpectateVehicle",          luaamx_PlayerSpectateVehicle},
    {"StartRecordingPlayerData",       luaamx_StartRecordingPlayerData},
    {"StopRecordingPlayerData",        luaamx_StopRecordingPlayerData},
    {"SelectTextDraw",                 luaamx_SelectTextDraw},
    {"CancelSelectTextDraw",           luaamx_CancelSelectTextDraw},
    {"SendClientMessage",              luaamx_SendClientMessage},
    {"SendClientMessageToAll",         luaamx_SendClientMessageToAll},
    {"SendPlayerMessageToPlayer",      luaamx_SendPlayerMessageToPlayer},
    {"SendPlayerMessageToAll",         luaamx_SendPlayerMessageToAll},
    {"SendDeathMessage",               luaamx_SendDeathMessage},
    {"GameTextForAll",                 luaamx_GameTextForAll},
    {"GameTextForPlayer",              luaamx_GameTextForPlayer},
    {"SetTimer",                       luaamx_SetTimer},
    {"KillTimer",                      luaamx_KillTimer},
    {"GetMaxPlayers",                  luaamx_GetMaxPlayers},
    {"SetGameModeText",                luaamx_SetGameModeText},
    {"SetTeamCount",                   luaamx_SetTeamCount},
    {"AddPlayerClass",                 luaamx_AddPlayerClass},
    {"AddPlayerClassEx",               luaamx_AddPlayerClassEx},
    {"AddStaticVehicle",               luaamx_AddStaticVehicle},
    {"AddStaticVehicleEx",             luaamx_AddStaticVehicleEx},
    {"AddStaticPickup",                luaamx_AddStaticPickup},
    {"CreatePickup",                   luaamx_CreatePickup},
    {"DestroyPickup",                  luaamx_DestroyPickup},
    {"ShowNameTags",                   luaamx_ShowNameTags},
    {"ShowPlayerMarkers",              luaamx_ShowPlayerMarkers},
    {"GameModeExit",                   luaamx_GameModeExit},
    {"SetWorldTime",                   luaamx_SetWorldTime},
    {"GetWeaponName",                  luaamx_GetWeaponName},
    {"EnableTirePopping",              luaamx_EnableTirePopping},
    {"EnableVehicleFriendlyFire",      luaamx_EnableVehicleFriendlyFire},
    {"AllowInteriorWeapons",           luaamx_AllowInteriorWeapons},
    {"SetWeather",                     luaamx_SetWeather},
    {"SetGravity",                     luaamx_SetGravity},
    {"SetDeathDropAmount",             luaamx_SetDeathDropAmount},
    {"CreateExplosion",                luaamx_CreateExplosion},
    {"EnableZoneNames",                luaamx_EnableZoneNames},
    {"UsePlayerPedAnims",              luaamx_UsePlayerPedAnims},
    {"DisableInteriorEnterExits",      luaamx_DisableInteriorEnterExits},
    {"SetNameTagDrawDistance",         luaamx_SetNameTagDrawDistance},
    {"DisableNameTagLOS",              luaamx_DisableNameTagLOS},
    {"LimitGlobalChatRadius",          luaamx_LimitGlobalChatRadius},
    {"LimitPlayerMarkerRadius",        luaamx_LimitPlayerMarkerRadius},
    {"ConnectNPC",                     luaamx_ConnectNPC},
    {"IsPlayerNPC",                    luaamx_IsPlayerNPC},
    {"IsPlayerAdmin",                  luaamx_IsPlayerAdmin},
    {"Kick",                           luaamx_Kick},
    {"Ban",                            luaamx_Ban},
    {"BanEx",                          luaamx_BanEx},
    {"SendRconCommand",                luaamx_SendRconCommand},
    {"GetServerVarAsString",           luaamx_GetServerVarAsString},
    {"GetServerVarAsInt",              luaamx_GetServerVarAsInt},
    {"GetServerVarAsBool",             luaamx_GetServerVarAsBool},
    {"GetPlayerNetworkStats",          luaamx_GetPlayerNetworkStats},
    {"GetNetworkStats",                luaamx_GetNetworkStats},
    {"GetPlayerVersion",               luaamx_GetPlayerVersion},
    {"CreateMenu",                     luaamx_CreateMenu},
    {"DestroyMenu",                    luaamx_DestroyMenu},
    {"AddMenuItem",                    luaamx_AddMenuItem},
    {"SetMenuColumnHeader",            luaamx_SetMenuColumnHeader},
    {"ShowMenuForPlayer",              luaamx_ShowMenuForPlayer},
    {"HideMenuForPlayer",              luaamx_HideMenuForPlayer},
    {"IsValidMenu",                    luaamx_IsValidMenu},
    {"DisableMenu",                    luaamx_DisableMenu},
    {"DisableMenuRow",                 luaamx_DisableMenuRow},
    {"GetPlayerMenu",                  luaamx_GetPlayerMenu},
    {"TextDrawCreate",                 luaamx_TextDrawCreate},
    {"TextDrawDestroy",                luaamx_TextDrawDestroy},
    {"TextDrawLetterSize",             luaamx_TextDrawLetterSize},
    {"TextDrawTextSize",               luaamx_TextDrawTextSize},
    {"TextDrawAlignment",              luaamx_TextDrawAlignment},
    {"TextDrawColor",                  luaamx_TextDrawColor},
    {"TextDrawUseBox",                 luaamx_TextDrawUseBox},
    {"TextDrawBoxColor",               luaamx_TextDrawBoxColor},
    {"TextDrawSetShadow",              luaamx_TextDrawSetShadow},
    {"TextDrawSetOutline",             luaamx_TextDrawSetOutline},
    {"TextDrawBackgroundColor",        luaamx_TextDrawBackgroundColor},
    {"TextDrawFont",                   luaamx_TextDrawFont},
    {"TextDrawSetProportional",        luaamx_TextDrawSetProportional},
    {"TextDrawSetSelectable",          luaamx_TextDrawSetSelectable},
    {"TextDrawShowForPlayer",          luaamx_TextDrawShowForPlayer},
    {"TextDrawHideForPlayer",          luaamx_TextDrawHideForPlayer},
    {"TextDrawShowForAll",             luaamx_TextDrawShowForAll},
    {"TextDrawHideForAll",             luaamx_TextDrawHideForAll},
    {"TextDrawSetString",              luaamx_TextDrawSetString},
    {"TextDrawSetPreviewModel",        luaamx_TextDrawSetPreviewModel},
    {"TextDrawSetPreviewRot",          luaamx_TextDrawSetPreviewRot},
    {"TextDrawSetPreviewVehCol",       luaamx_TextDrawSetPreviewVehCol},
    {"GangZoneCreate",                 luaamx_GangZoneCreate},
    {"GangZoneDestroy",                luaamx_GangZoneDestroy},
    {"GangZoneShowForPlayer",          luaamx_GangZoneShowForPlayer},
    {"GangZoneShowForAll",             luaamx_GangZoneShowForAll},
    {"GangZoneHideForPlayer",          luaamx_GangZoneHideForPlayer},
    {"GangZoneHideForAll",             luaamx_GangZoneHideForAll},
    {"GangZoneFlashForPlayer",         luaamx_GangZoneFlashForPlayer},
    {"GangZoneFlashForAll",            luaamx_GangZoneFlashForAll},
    {"GangZoneStopFlashForPlayer",     luaamx_GangZoneStopFlashForPlayer},
    {"GangZoneStopFlashForAll",        luaamx_GangZoneStopFlashForAll},
    {"Create3DTextLabel",              luaamx_Create3DTextLabel},
    {"Delete3DTextLabel",              luaamx_Delete3DTextLabel},
    {"Attach3DTextLabelToPlayer",      luaamx_Attach3DTextLabelToPlayer},
    {"Attach3DTextLabelToVehicle",     luaamx_Attach3DTextLabelToVehicle},
    {"Update3DTextLabelText",          luaamx_Update3DTextLabelText},
    {"CreatePlayer3DTextLabel",        luaamx_CreatePlayer3DTextLabel},
    {"DeletePlayer3DTextLabel",        luaamx_DeletePlayer3DTextLabel},
    {"UpdatePlayer3DTextLabelText",    luaamx_UpdatePlayer3DTextLabelText},
    {"ShowPlayerDialog",               luaamx_ShowPlayerDialog},
    {"CreateVehicle",                  luaamx_CreateVehicle},
    {"DestroyVehicle",                 luaamx_DestroyVehicle},
    {"IsVehicleStreamedIn",            luaamx_IsVehicleStreamedIn},
    {"GetVehiclePos",                  luaamx_GetVehiclePos},
    {"SetVehiclePos",                  luaamx_SetVehiclePos},
    {"GetVehicleZAngle",               luaamx_GetVehicleZAngle},
    {"GetVehicleRotationQuat",         luaamx_GetVehicleRotationQuat},
    {"SetVehicleZAngle",               luaamx_SetVehicleZAngle},
    {"SetVehicleParamsForPlayer",      luaamx_SetVehicleParamsForPlayer},
    {"ManualVehicleEngineAndLights",   luaamx_ManualVehicleEngineAndLights},
    {"SetVehicleParamsEx",             luaamx_SetVehicleParamsEx},
    {"GetVehicleParamsEx",             luaamx_GetVehicleParamsEx},
    {"SetVehicleToRespawn",            luaamx_SetVehicleToRespawn},
    {"LinkVehicleToInterior",          luaamx_LinkVehicleToInterior},
    {"AddVehicleComponent",            luaamx_AddVehicleComponent},
    {"RemoveVehicleComponent",         luaamx_RemoveVehicleComponent},
    {"ChangeVehicleColor",             luaamx_ChangeVehicleColor},
    {"ChangeVehiclePaintjob",          luaamx_ChangeVehiclePaintjob},
    {"SetVehicleHealth",               luaamx_SetVehicleHealth},
    {"GetVehicleHealth",               luaamx_GetVehicleHealth},
    {"AttachTrailerToVehicle",         luaamx_AttachTrailerToVehicle},
    {"DetachTrailerFromVehicle",       luaamx_DetachTrailerFromVehicle},
    {"IsTrailerAttachedToVehicle",     luaamx_IsTrailerAttachedToVehicle},
    {"GetVehicleTrailer",              luaamx_GetVehicleTrailer},
    {"SetVehicleNumberPlate",          luaamx_SetVehicleNumberPlate},
    {"GetVehicleModel",                luaamx_GetVehicleModel},
    {"GetVehicleComponentInSlot",      luaamx_GetVehicleComponentInSlot},
    {"GetVehicleComponentType",        luaamx_GetVehicleComponentType},
    {"RepairVehicle",                  luaamx_RepairVehicle},
    {"GetVehicleVelocity",             luaamx_GetVehicleVelocity},
    {"SetVehicleVelocity",             luaamx_SetVehicleVelocity},
    {"SetVehicleAngularVelocity",      luaamx_SetVehicleAngularVelocity},
    {"GetVehicleDamageStatus",         luaamx_GetVehicleDamageStatus},
    {"UpdateVehicleDamageStatus",      luaamx_UpdateVehicleDamageStatus},
    {"GetVehicleModelInfo",            luaamx_GetVehicleModelInfo},
    {"SetVehicleVirtualWorld",         luaamx_SetVehicleVirtualWorld},
    {"GetVehicleVirtualWorld",         luaamx_GetVehicleVirtualWorld},
    {NULL, NULL}
};