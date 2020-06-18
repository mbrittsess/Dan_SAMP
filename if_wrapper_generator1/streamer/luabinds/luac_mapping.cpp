// FUNC_PROTOTYPE "luaamx_Streamer_TickRate" --> Streamer_TickRate ( rate :integer ) stdret :integer
static int luaamx_Streamer_TickRate (lua_State* L) {
    int NumRetVal = 1;
    int rate = 0;

    lua_settop(L, 1);
    rate = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)Streamer_TickRate(rate));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_MaxItems" --> Streamer_MaxItems ( type :integer, items :integer ) stdret :integer
static int luaamx_Streamer_MaxItems (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int items = 0;

    lua_settop(L, 2);
    type = luaL_checkint(L, 1);
    items = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)Streamer_MaxItems(type, items));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_VisibleItems" --> Streamer_VisibleItems ( type :integer, items :integer ) stdret :integer
static int luaamx_Streamer_VisibleItems (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int items = 0;

    lua_settop(L, 2);
    type = luaL_checkint(L, 1);
    items = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)Streamer_VisibleItems(type, items));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_CellDistance" --> Streamer_CellDistance ( distance :number ) stdret :integer
static int luaamx_Streamer_CellDistance (lua_State* L) {
    int NumRetVal = 1;
    float distance = 0.0;

    lua_settop(L, 1);
    distance = (float)luaL_checknumber(L, 1);

    lua_pushinteger(L, (lua_Integer)Streamer_CellDistance(distance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_CellSize" --> Streamer_CellSize ( size :number ) stdret :integer
static int luaamx_Streamer_CellSize (lua_State* L) {
    int NumRetVal = 1;
    float size = 0.0;

    lua_settop(L, 1);
    size = (float)luaL_checknumber(L, 1);

    lua_pushinteger(L, (lua_Integer)Streamer_CellSize(size));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_ProcessActiveItems" --> Streamer_ProcessActiveItems (  ) stdret :integer
static int luaamx_Streamer_ProcessActiveItems (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)Streamer_ProcessActiveItems());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_ToggleIdleUpdate" --> Streamer_ToggleIdleUpdate ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_Streamer_ToggleIdleUpdate (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)Streamer_ToggleIdleUpdate(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_ToggleItemUpdate" --> Streamer_ToggleItemUpdate ( playerid :integer, type :integer, toggle :integer ) stdret :integer
static int luaamx_Streamer_ToggleItemUpdate (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int type = 0;
    int toggle = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    toggle = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)Streamer_ToggleItemUpdate(playerid, type, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_Update" --> Streamer_Update ( playerid :integer ) stdret :integer
static int luaamx_Streamer_Update (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)Streamer_Update(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_UpdateEx" --> Streamer_UpdateEx ( playerid :integer, x :number, y :number, z :number, worldid :integer, interiorid :integer ) stdret :integer
static int luaamx_Streamer_UpdateEx (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int worldid = 0;
    int interiorid = 0;

    lua_settop(L, 6);
    playerid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    worldid = luaL_checkint(L, 5);
    interiorid = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)Streamer_UpdateEx(playerid, x, y, z, worldid, interiorid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_GetFloatData" --> Streamer_GetFloatData ( type :integer, id :integer, data :integer ) stdret :integer, result :number
static int luaamx_Streamer_GetFloatData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    float result = 0.0;

    lua_settop(L, 3);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)Streamer_GetFloatData(type, id, data, result));

    lua_pushnumber(L, (lua_Number)result); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_SetFloatData" --> Streamer_SetFloatData ( type :integer, id :integer, data :integer, value :number ) stdret :integer
static int luaamx_Streamer_SetFloatData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    float value = 0.0;

    lua_settop(L, 4);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);
    value = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)Streamer_SetFloatData(type, id, data, value));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_GetIntData" --> Streamer_GetIntData ( type :integer, id :integer, data :integer ) stdret :integer
static int luaamx_Streamer_GetIntData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;

    lua_settop(L, 3);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)Streamer_GetIntData(type, id, data));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_SetIntData" --> Streamer_SetIntData ( type :integer, id :integer, data :integer, value :integer ) stdret :integer
static int luaamx_Streamer_SetIntData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    int value = 0;

    lua_settop(L, 4);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);
    value = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)Streamer_SetIntData(type, id, data, value));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_SetArrayData" --> Streamer_SetArrayData ( type :integer, id :integer, data :integer, src :string ) stdret :integer
static int luaamx_Streamer_SetArrayData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    int* src = NULL;
    int maxlength = 0;

    lua_settop(L, 4);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);
    src = luaconv_OrderedIntArray(L, 4, &maxlength);

    lua_pushinteger(L, (lua_Integer)Streamer_SetArrayData(type, id, data, src, maxlength));

   free(src);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_IsInArrayData" --> Streamer_IsInArrayData ( type :integer, id :integer, data :integer, value :integer ) stdret :integer
static int luaamx_Streamer_IsInArrayData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    int value = 0;

    lua_settop(L, 4);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);
    value = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)Streamer_IsInArrayData(type, id, data, value));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_AppendArrayData" --> Streamer_AppendArrayData ( type :integer, id :integer, data :integer, value :integer ) stdret :integer
static int luaamx_Streamer_AppendArrayData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    int value = 0;

    lua_settop(L, 4);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);
    value = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)Streamer_AppendArrayData(type, id, data, value));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_RemoveArrayData" --> Streamer_RemoveArrayData ( type :integer, id :integer, data :integer, value :integer ) stdret :integer
static int luaamx_Streamer_RemoveArrayData (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    int id = 0;
    int data = 0;
    int value = 0;

    lua_settop(L, 4);
    type = luaL_checkint(L, 1);
    id = luaL_checkint(L, 2);
    data = luaL_checkint(L, 3);
    value = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)Streamer_RemoveArrayData(type, id, data, value));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_GetUpperBound" --> Streamer_GetUpperBound ( type :integer ) stdret :integer
static int luaamx_Streamer_GetUpperBound (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;

    lua_settop(L, 1);
    type = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)Streamer_GetUpperBound(type));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_GetDistanceToItem" --> Streamer_GetDistanceToItem ( x :number, y :number, z :number, type :integer, id :integer ) stdret :integer, distance :number
static int luaamx_Streamer_GetDistanceToItem (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int type = 0;
    int id = 0;
    float distance = 0.0;

    lua_settop(L, 5);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    type = luaL_checkint(L, 4);
    id = luaL_checkint(L, 5);

    lua_pushinteger(L, (lua_Integer)Streamer_GetDistanceToItem(x, y, z, type, id, distance));

    lua_pushnumber(L, (lua_Number)distance); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_IsItemVisible" --> Streamer_IsItemVisible ( playerid :integer, type :integer, id :integer ) stdret :integer
static int luaamx_Streamer_IsItemVisible (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int type = 0;
    int id = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    id = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)Streamer_IsItemVisible(playerid, type, id));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_DestroyAllVisibleItems" --> Streamer_DestroyAllVisibleItems ( playerid :integer, type :integer ) stdret :integer
static int luaamx_Streamer_DestroyAllVisibleItems (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int type = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)Streamer_DestroyAllVisibleItems(playerid, type));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_Streamer_CountVisibleItems" --> Streamer_CountVisibleItems ( playerid :integer, type :integer ) stdret :integer
static int luaamx_Streamer_CountVisibleItems (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int type = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)Streamer_CountVisibleItems(playerid, type));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicObject" --> CreateDynamicObject ( modelid :integer, x :number, y :number, z :number, rx :number, ry :number, rz :number, worldid :integer, interiorid :integer, playerid :integer, streamdistance :number ) stdret :integer
static int luaamx_CreateDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;
    float streamdistance = 0.0;

    lua_settop(L, 11);
    modelid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    rx = (float)luaL_checknumber(L, 5);
    ry = (float)luaL_checknumber(L, 6);
    rz = (float)luaL_checknumber(L, 7);
    worldid = luaL_checkint(L, 8);
    interiorid = luaL_checkint(L, 9);
    playerid = luaL_checkint(L, 10);
    streamdistance = (float)luaL_checknumber(L, 11);

    lua_pushinteger(L, (lua_Integer)CreateDynamicObject(modelid, x, y, z, rx, ry, rz, worldid, interiorid, playerid, streamdistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamicObject" --> DestroyDynamicObject ( objectid :integer ) stdret :integer
static int luaamx_DestroyDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamicObject(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamicObject" --> IsValidDynamicObject ( objectid :integer ) stdret :integer
static int luaamx_IsValidDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamicObject(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetDynamicObjectPos" --> SetDynamicObjectPos ( objectid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_SetDynamicObjectPos (lua_State* L) {
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

    lua_pushinteger(L, (lua_Integer)SetDynamicObjectPos(objectid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetDynamicObjectPos" --> GetDynamicObjectPos ( objectid :integer ) stdret :integer, x :number, y :number, z :number
static int luaamx_GetDynamicObjectPos (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetDynamicObjectPos(objectid, x, y, z));

    lua_pushnumber(L, (lua_Number)x); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)y); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)z); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetDynamicObjectRot" --> SetDynamicObjectRot ( objectid :integer, rx :number, ry :number, rz :number ) stdret :integer
static int luaamx_SetDynamicObjectRot (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;

    lua_settop(L, 4);
    objectid = luaL_checkint(L, 1);
    rx = (float)luaL_checknumber(L, 2);
    ry = (float)luaL_checknumber(L, 3);
    rz = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)SetDynamicObjectRot(objectid, rx, ry, rz));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetDynamicObjectRot" --> GetDynamicObjectRot ( objectid :integer ) stdret :integer, rx :number, ry :number, rz :number
static int luaamx_GetDynamicObjectRot (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetDynamicObjectRot(objectid, rx, ry, rz));

    lua_pushnumber(L, (lua_Number)rx); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)ry); NumRetVal += 1;
    lua_pushnumber(L, (lua_Number)rz); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_MoveDynamicObject" --> MoveDynamicObject ( objectid :integer, x :number, y :number, z :number, speed :number, rx :number, ry :number, rz :number ) stdret :integer
static int luaamx_MoveDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float speed = 0.0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;

    lua_settop(L, 8);
    objectid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    speed = (float)luaL_checknumber(L, 5);
    rx = (float)luaL_checknumber(L, 6);
    ry = (float)luaL_checknumber(L, 7);
    rz = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)MoveDynamicObject(objectid, x, y, z, speed, rx, ry, rz));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_StopDynamicObject" --> StopDynamicObject ( objectid :integer ) stdret :integer
static int luaamx_StopDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)StopDynamicObject(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsDynamicObjectMoving" --> IsDynamicObjectMoving ( objectid :integer ) stdret :integer
static int luaamx_IsDynamicObjectMoving (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;

    lua_settop(L, 1);
    objectid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsDynamicObjectMoving(objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachCameraToDynamicObject" --> AttachCameraToDynamicObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_AttachCameraToDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AttachCameraToDynamicObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachDynamicObjectToVehicle" --> AttachDynamicObjectToVehicle ( objectid :integer, vehicleid :integer, offsetx :number, offsety :number, offsetz :number, rx :number, ry :number, rz :number ) stdret :integer
static int luaamx_AttachDynamicObjectToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int vehicleid = 0;
    float offsetx = 0.0;
    float offsety = 0.0;
    float offsetz = 0.0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;

    lua_settop(L, 8);
    objectid = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);
    offsetx = (float)luaL_checknumber(L, 3);
    offsety = (float)luaL_checknumber(L, 4);
    offsetz = (float)luaL_checknumber(L, 5);
    rx = (float)luaL_checknumber(L, 6);
    ry = (float)luaL_checknumber(L, 7);
    rz = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)AttachDynamicObjectToVehicle(objectid, vehicleid, offsetx, offsety, offsetz, rx, ry, rz));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_EditDynamicObject" --> EditDynamicObject ( playerid :integer, objectid :integer ) stdret :integer
static int luaamx_EditDynamicObject (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int objectid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)EditDynamicObject(playerid, objectid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetDynamicObjectMaterial" --> GetDynamicObjectMaterial ( objectid :integer, materialindex :integer ) stdret :integer, modelid :integer, txdname :string, texturename :string, materialcolor :integer
static int luaamx_GetDynamicObjectMaterial (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int materialindex = 0;
    int modelid = 0;
    int* txdname = (int*)calloc((size_t)128, sizeof(char));
    int* texturename = (int*)calloc((size_t)128, sizeof(char));
    int materialcolor = 0;
    const static int maxtxdname = 128;
    const static int maxtexturename = 128;

    lua_settop(L, 2);
    objectid = luaL_checkint(L, 1);
    materialindex = luaL_checkint(L, 2);
    if (txdname == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "txdname");};
    if (texturename == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "texturename");};

    lua_pushinteger(L, (lua_Integer)GetDynamicObjectMaterial(objectid, materialindex, modelid, txdname, texturename, materialcolor, maxtxdname, maxtexturename));

    lua_pushinteger(L, (lua_Integer)modelid); NumRetVal += 1;
    lua_pushstring(L, (char*)txdname); free(txdname); NumRetVal += 1;
    lua_pushstring(L, (char*)texturename); free(texturename); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)materialcolor); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetDynamicObjectMaterial" --> SetDynamicObjectMaterial ( objectid :integer, materialindex :integer, modelid :integer, txdname :string, texturename :string, materialcolor :integer ) stdret :integer
static int luaamx_SetDynamicObjectMaterial (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int materialindex = 0;
    int modelid = 0;
    int* txdname = NULL;
    int* texturename = NULL;
    int materialcolor = 0;

    lua_settop(L, 6);
    objectid = luaL_checkint(L, 1);
    materialindex = luaL_checkint(L, 2);
    modelid = luaL_checkint(L, 3);
    txdname = (int*)luaL_checkstring(L, 4);
    texturename = (int*)luaL_checkstring(L, 5);
    materialcolor = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)SetDynamicObjectMaterial(objectid, materialindex, modelid, txdname, texturename, materialcolor));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetDynamicObjectMaterialText" --> GetDynamicObjectMaterialText ( objectid :integer, materialindex :integer ) stdret :integer, text :string, materialsize :integer, fontface :string, fontsize :integer, bold :integer, fontcolor :integer, backcolor :integer, textalignment :integer
static int luaamx_GetDynamicObjectMaterialText (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int materialindex = 0;
    int* text = (int*)calloc((size_t)128, sizeof(char));
    int materialsize = 0;
    int* fontface = (int*)calloc((size_t)128, sizeof(char));
    int fontsize = 0;
    int bold = 0;
    int fontcolor = 0;
    int backcolor = 0;
    int textalignment = 0;
    const static int maxtext = 128;
    const static int maxfontface = 128;

    lua_settop(L, 2);
    objectid = luaL_checkint(L, 1);
    materialindex = luaL_checkint(L, 2);
    if (text == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "text");};
    if (fontface == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "fontface");};

    lua_pushinteger(L, (lua_Integer)GetDynamicObjectMaterialText(objectid, materialindex, text, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment, maxtext, maxfontface));

    lua_pushstring(L, (char*)text); free(text); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)materialsize); NumRetVal += 1;
    lua_pushstring(L, (char*)fontface); free(fontface); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)fontsize); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)bold); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)fontcolor); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)backcolor); NumRetVal += 1;
    lua_pushinteger(L, (lua_Integer)textalignment); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_SetDynamicObjectMaterialText" --> SetDynamicObjectMaterialText ( objectid :integer, materialindex :integer, text :string, materialsize :integer, fontface :string, fontsize :integer, bold :integer, fontcolor :integer, backcolor :integer, textalignment :integer ) stdret :integer
static int luaamx_SetDynamicObjectMaterialText (lua_State* L) {
    int NumRetVal = 1;
    int objectid = 0;
    int materialindex = 0;
    int* text = NULL;
    int materialsize = 0;
    int* fontface = NULL;
    int fontsize = 0;
    int bold = 0;
    int fontcolor = 0;
    int backcolor = 0;
    int textalignment = 0;

    lua_settop(L, 10);
    objectid = luaL_checkint(L, 1);
    materialindex = luaL_checkint(L, 2);
    text = (int*)luaL_checkstring(L, 3);
    materialsize = luaL_checkint(L, 4);
    fontface = (int*)luaL_checkstring(L, 5);
    fontsize = luaL_checkint(L, 6);
    bold = luaL_checkint(L, 7);
    fontcolor = luaL_checkint(L, 8);
    backcolor = luaL_checkint(L, 9);
    textalignment = luaL_checkint(L, 10);

    lua_pushinteger(L, (lua_Integer)SetDynamicObjectMaterialText(objectid, materialindex, text, materialsize, fontface, fontsize, bold, fontcolor, backcolor, textalignment));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamicObjects" --> DestroyAllDynamicObjects (  ) stdret :integer
static int luaamx_DestroyAllDynamicObjects (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamicObjects());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamicObjects" --> CountDynamicObjects (  ) stdret :integer
static int luaamx_CountDynamicObjects (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamicObjects());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicPickup" --> CreateDynamicPickup ( modelid :integer, type :integer, x :number, y :number, z :number, worldid :integer, interiorid :integer, playerid :integer, streamdistance :number ) stdret :integer
static int luaamx_CreateDynamicPickup (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;
    float streamdistance = 0.0;

    lua_settop(L, 9);
    modelid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    worldid = luaL_checkint(L, 6);
    interiorid = luaL_checkint(L, 7);
    playerid = luaL_checkint(L, 8);
    streamdistance = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)CreateDynamicPickup(modelid, type, x, y, z, worldid, interiorid, playerid, streamdistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamicPickup" --> DestroyDynamicPickup ( pickupid :integer ) stdret :integer
static int luaamx_DestroyDynamicPickup (lua_State* L) {
    int NumRetVal = 1;
    int pickupid = 0;

    lua_settop(L, 1);
    pickupid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamicPickup(pickupid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamicPickup" --> IsValidDynamicPickup ( pickupid :integer ) stdret :integer
static int luaamx_IsValidDynamicPickup (lua_State* L) {
    int NumRetVal = 1;
    int pickupid = 0;

    lua_settop(L, 1);
    pickupid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamicPickup(pickupid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamicPickups" --> DestroyAllDynamicPickups (  ) stdret :integer
static int luaamx_DestroyAllDynamicPickups (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamicPickups());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamicPickups" --> CountDynamicPickups (  ) stdret :integer
static int luaamx_CountDynamicPickups (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamicPickups());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicCP" --> CreateDynamicCP ( x :number, y :number, z :number, size :number, worldid :integer, interiorid :integer, playerid :integer, streamdistance :number ) stdret :integer
static int luaamx_CreateDynamicCP (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float size = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;
    float streamdistance = 0.0;

    lua_settop(L, 8);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    size = (float)luaL_checknumber(L, 4);
    worldid = luaL_checkint(L, 5);
    interiorid = luaL_checkint(L, 6);
    playerid = luaL_checkint(L, 7);
    streamdistance = (float)luaL_checknumber(L, 8);

    lua_pushinteger(L, (lua_Integer)CreateDynamicCP(x, y, z, size, worldid, interiorid, playerid, streamdistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamicCP" --> DestroyDynamicCP ( checkpointid :integer ) stdret :integer
static int luaamx_DestroyDynamicCP (lua_State* L) {
    int NumRetVal = 1;
    int checkpointid = 0;

    lua_settop(L, 1);
    checkpointid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamicCP(checkpointid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamicCP" --> IsValidDynamicCP ( checkpointid :integer ) stdret :integer
static int luaamx_IsValidDynamicCP (lua_State* L) {
    int NumRetVal = 1;
    int checkpointid = 0;

    lua_settop(L, 1);
    checkpointid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamicCP(checkpointid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerDynamicCP" --> TogglePlayerDynamicCP ( playerid :integer, checkpointid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerDynamicCP (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int checkpointid = 0;
    int toggle = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    checkpointid = luaL_checkint(L, 2);
    toggle = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)TogglePlayerDynamicCP(playerid, checkpointid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerAllDynamicCPs" --> TogglePlayerAllDynamicCPs ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerAllDynamicCPs (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TogglePlayerAllDynamicCPs(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInDynamicCP" --> IsPlayerInDynamicCP ( playerid :integer, checkpointid :integer ) stdret :integer
static int luaamx_IsPlayerInDynamicCP (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int checkpointid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    checkpointid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerInDynamicCP(playerid, checkpointid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVisibleDynamicCP" --> GetPlayerVisibleDynamicCP ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerVisibleDynamicCP (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerVisibleDynamicCP(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamicCPs" --> DestroyAllDynamicCPs (  ) stdret :integer
static int luaamx_DestroyAllDynamicCPs (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamicCPs());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamicCPs" --> CountDynamicCPs (  ) stdret :integer
static int luaamx_CountDynamicCPs (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamicCPs());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicRaceCP" --> CreateDynamicRaceCP ( type :integer, x :number, y :number, z :number, nextx :number, nexty :number, nextz :number, size :number, worldid :integer, interiorid :integer, playerid :integer, streamdistance :number ) stdret :integer
static int luaamx_CreateDynamicRaceCP (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float nextx = 0.0;
    float nexty = 0.0;
    float nextz = 0.0;
    float size = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;
    float streamdistance = 0.0;

    lua_settop(L, 12);
    type = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    nextx = (float)luaL_checknumber(L, 5);
    nexty = (float)luaL_checknumber(L, 6);
    nextz = (float)luaL_checknumber(L, 7);
    size = (float)luaL_checknumber(L, 8);
    worldid = luaL_checkint(L, 9);
    interiorid = luaL_checkint(L, 10);
    playerid = luaL_checkint(L, 11);
    streamdistance = (float)luaL_checknumber(L, 12);

    lua_pushinteger(L, (lua_Integer)CreateDynamicRaceCP(type, x, y, z, nextx, nexty, nextz, size, worldid, interiorid, playerid, streamdistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamicRaceCP" --> DestroyDynamicRaceCP ( checkpointid :integer ) stdret :integer
static int luaamx_DestroyDynamicRaceCP (lua_State* L) {
    int NumRetVal = 1;
    int checkpointid = 0;

    lua_settop(L, 1);
    checkpointid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamicRaceCP(checkpointid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamicRaceCP" --> IsValidDynamicRaceCP ( checkpointid :integer ) stdret :integer
static int luaamx_IsValidDynamicRaceCP (lua_State* L) {
    int NumRetVal = 1;
    int checkpointid = 0;

    lua_settop(L, 1);
    checkpointid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamicRaceCP(checkpointid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerDynamicRaceCP" --> TogglePlayerDynamicRaceCP ( playerid :integer, checkpointid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerDynamicRaceCP (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int checkpointid = 0;
    int toggle = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    checkpointid = luaL_checkint(L, 2);
    toggle = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)TogglePlayerDynamicRaceCP(playerid, checkpointid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerAllDynamicRaceCPs" --> TogglePlayerAllDynamicRaceCPs ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerAllDynamicRaceCPs (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TogglePlayerAllDynamicRaceCPs(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInDynamicRaceCP" --> IsPlayerInDynamicRaceCP ( playerid :integer, checkpointid :integer ) stdret :integer
static int luaamx_IsPlayerInDynamicRaceCP (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int checkpointid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    checkpointid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerInDynamicRaceCP(playerid, checkpointid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetPlayerVisibleDynamicRaceCP" --> GetPlayerVisibleDynamicRaceCP ( playerid :integer ) stdret :integer
static int luaamx_GetPlayerVisibleDynamicRaceCP (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)GetPlayerVisibleDynamicRaceCP(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamicRaceCPs" --> DestroyAllDynamicRaceCPs (  ) stdret :integer
static int luaamx_DestroyAllDynamicRaceCPs (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamicRaceCPs());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamicRaceCPs" --> CountDynamicRaceCPs (  ) stdret :integer
static int luaamx_CountDynamicRaceCPs (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamicRaceCPs());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicMapIcon" --> CreateDynamicMapIcon ( x :number, y :number, z :number, type :integer, color :integer, worldid :integer, interiorid :integer, playerid :integer, streamdistance :number ) stdret :integer
static int luaamx_CreateDynamicMapIcon (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int type = 0;
    int color = 0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;
    float streamdistance = 0.0;

    lua_settop(L, 9);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    type = luaL_checkint(L, 4);
    color = luaL_checkint(L, 5);
    worldid = luaL_checkint(L, 6);
    interiorid = luaL_checkint(L, 7);
    playerid = luaL_checkint(L, 8);
    streamdistance = (float)luaL_checknumber(L, 9);

    lua_pushinteger(L, (lua_Integer)CreateDynamicMapIcon(x, y, z, type, color, worldid, interiorid, playerid, streamdistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamicMapIcon" --> DestroyDynamicMapIcon ( iconid :integer ) stdret :integer
static int luaamx_DestroyDynamicMapIcon (lua_State* L) {
    int NumRetVal = 1;
    int iconid = 0;

    lua_settop(L, 1);
    iconid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamicMapIcon(iconid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamicMapIcon" --> IsValidDynamicMapIcon ( iconid :integer ) stdret :integer
static int luaamx_IsValidDynamicMapIcon (lua_State* L) {
    int NumRetVal = 1;
    int iconid = 0;

    lua_settop(L, 1);
    iconid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamicMapIcon(iconid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamicMapIcons" --> DestroyAllDynamicMapIcons (  ) stdret :integer
static int luaamx_DestroyAllDynamicMapIcons (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamicMapIcons());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamicMapIcons" --> CountDynamicMapIcons (  ) stdret :integer
static int luaamx_CountDynamicMapIcons (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamicMapIcons());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamic3DTextLabel" --> CreateDynamic3DTextLabel ( text :string, color :integer, x :number, y :number, z :number, drawdistance :number, attachedplayer :integer, attachedvehicle :integer, testlos :integer, worldid :integer, interiorid :integer, playerid :integer, streamdistance :number ) stdret :integer
static int luaamx_CreateDynamic3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    int* text = NULL;
    int color = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float drawdistance = 0.0;
    int attachedplayer = 0;
    int attachedvehicle = 0;
    int testlos = 0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;
    float streamdistance = 0.0;

    lua_settop(L, 13);
    text = (int*)luaL_checkstring(L, 1);
    color = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    drawdistance = (float)luaL_checknumber(L, 6);
    attachedplayer = luaL_checkint(L, 7);
    attachedvehicle = luaL_checkint(L, 8);
    testlos = luaL_checkint(L, 9);
    worldid = luaL_checkint(L, 10);
    interiorid = luaL_checkint(L, 11);
    playerid = luaL_checkint(L, 12);
    streamdistance = (float)luaL_checknumber(L, 13);

    lua_pushinteger(L, (lua_Integer)CreateDynamic3DTextLabel(text, color, x, y, z, drawdistance, attachedplayer, attachedvehicle, testlos, worldid, interiorid, playerid, streamdistance));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamic3DTextLabel" --> DestroyDynamic3DTextLabel ( id :integer ) stdret :integer
static int luaamx_DestroyDynamic3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;

    lua_settop(L, 1);
    id = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamic3DTextLabel(id));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamic3DTextLabel" --> IsValidDynamic3DTextLabel ( id :integer ) stdret :integer
static int luaamx_IsValidDynamic3DTextLabel (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;

    lua_settop(L, 1);
    id = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamic3DTextLabel(id));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_GetDynamic3DTextLabelText" --> GetDynamic3DTextLabelText ( id :integer ) stdret :integer, text :string
static int luaamx_GetDynamic3DTextLabelText (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;
    int* text = (int*)calloc((size_t)128, sizeof(char));
    const static int maxlength = 128;

    lua_settop(L, 1);
    id = luaL_checkint(L, 1);
    if (text == NULL) {luaL_error(L, "Memory-allocation failure for return value '%s' (tried to allocate 128 bytes)", "text");};

    lua_pushinteger(L, (lua_Integer)GetDynamic3DTextLabelText(id, text, maxlength));

    lua_pushstring(L, (char*)text); free(text); NumRetVal += 1;

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_UpdateDynamic3DTextLabelText" --> UpdateDynamic3DTextLabelText ( id :integer, color :integer, text :string ) stdret :integer
static int luaamx_UpdateDynamic3DTextLabelText (lua_State* L) {
    int NumRetVal = 1;
    int id = 0;
    int color = 0;
    int* text = NULL;

    lua_settop(L, 3);
    id = luaL_checkint(L, 1);
    color = luaL_checkint(L, 2);
    text = (int*)luaL_checkstring(L, 3);

    lua_pushinteger(L, (lua_Integer)UpdateDynamic3DTextLabelText(id, color, text));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamic3DTextLabels" --> DestroyAllDynamic3DTextLabels (  ) stdret :integer
static int luaamx_DestroyAllDynamic3DTextLabels (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamic3DTextLabels());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamic3DTextLabels" --> CountDynamic3DTextLabels (  ) stdret :integer
static int luaamx_CountDynamic3DTextLabels (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamic3DTextLabels());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicCircle" --> CreateDynamicCircle ( x :number, y :number, size :number, worldid :integer, interiorid :integer, playerid :integer ) stdret :integer
static int luaamx_CreateDynamicCircle (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float size = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;

    lua_settop(L, 6);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    size = (float)luaL_checknumber(L, 3);
    worldid = luaL_checkint(L, 4);
    interiorid = luaL_checkint(L, 5);
    playerid = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)CreateDynamicCircle(x, y, size, worldid, interiorid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicRectangle" --> CreateDynamicRectangle ( minx :number, miny :number, maxx :number, maxy :number, worldid :integer, interiorid :integer, playerid :integer ) stdret :integer
static int luaamx_CreateDynamicRectangle (lua_State* L) {
    int NumRetVal = 1;
    float minx = 0.0;
    float miny = 0.0;
    float maxx = 0.0;
    float maxy = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;

    lua_settop(L, 7);
    minx = (float)luaL_checknumber(L, 1);
    miny = (float)luaL_checknumber(L, 2);
    maxx = (float)luaL_checknumber(L, 3);
    maxy = (float)luaL_checknumber(L, 4);
    worldid = luaL_checkint(L, 5);
    interiorid = luaL_checkint(L, 6);
    playerid = luaL_checkint(L, 7);

    lua_pushinteger(L, (lua_Integer)CreateDynamicRectangle(minx, miny, maxx, maxy, worldid, interiorid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicSphere" --> CreateDynamicSphere ( x :number, y :number, z :number, size :number, worldid :integer, interiorid :integer, playerid :integer ) stdret :integer
static int luaamx_CreateDynamicSphere (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float size = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;

    lua_settop(L, 7);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    size = (float)luaL_checknumber(L, 4);
    worldid = luaL_checkint(L, 5);
    interiorid = luaL_checkint(L, 6);
    playerid = luaL_checkint(L, 7);

    lua_pushinteger(L, (lua_Integer)CreateDynamicSphere(x, y, z, size, worldid, interiorid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicCube" --> CreateDynamicCube ( minx :number, miny :number, minz :number, maxx :number, maxy :number, maxz :number, worldid :integer, interiorid :integer, playerid :integer ) stdret :integer
static int luaamx_CreateDynamicCube (lua_State* L) {
    int NumRetVal = 1;
    float minx = 0.0;
    float miny = 0.0;
    float minz = 0.0;
    float maxx = 0.0;
    float maxy = 0.0;
    float maxz = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;

    lua_settop(L, 9);
    minx = (float)luaL_checknumber(L, 1);
    miny = (float)luaL_checknumber(L, 2);
    minz = (float)luaL_checknumber(L, 3);
    maxx = (float)luaL_checknumber(L, 4);
    maxy = (float)luaL_checknumber(L, 5);
    maxz = (float)luaL_checknumber(L, 6);
    worldid = luaL_checkint(L, 7);
    interiorid = luaL_checkint(L, 8);
    playerid = luaL_checkint(L, 9);

    lua_pushinteger(L, (lua_Integer)CreateDynamicCube(minx, miny, minz, maxx, maxy, maxz, worldid, interiorid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicPolygon" --> CreateDynamicPolygon ( points :string, minz :number, maxz :number, worldid :integer, interiorid :integer, playerid :integer ) stdret :integer
static int luaamx_CreateDynamicPolygon (lua_State* L) {
    int NumRetVal = 1;
    float* points = NULL;
    int maxpoints = 0;
    float minz = 0.0;
    float maxz = 0.0;
    int worldid = 0;
    int interiorid = 0;
    int playerid = 0;

    lua_settop(L, 6);
    points = luaconv_OrderedFloatArray(L, 1, &maxpoints);
    minz = (float)luaL_checknumber(L, 2);
    maxz = (float)luaL_checknumber(L, 3);
    worldid = luaL_checkint(L, 4);
    interiorid = luaL_checkint(L, 5);
    playerid = luaL_checkint(L, 6);

    lua_pushinteger(L, (lua_Integer)CreateDynamicPolygon(points, minz, maxz, maxpoints, worldid, interiorid, playerid));

   free(points);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyDynamicArea" --> DestroyDynamicArea ( areaid :integer ) stdret :integer
static int luaamx_DestroyDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    int areaid = 0;

    lua_settop(L, 1);
    areaid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)DestroyDynamicArea(areaid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsValidDynamicArea" --> IsValidDynamicArea ( areaid :integer ) stdret :integer
static int luaamx_IsValidDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    int areaid = 0;

    lua_settop(L, 1);
    areaid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsValidDynamicArea(areaid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerDynamicArea" --> TogglePlayerDynamicArea ( playerid :integer, areaid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int areaid = 0;
    int toggle = 0;

    lua_settop(L, 3);
    playerid = luaL_checkint(L, 1);
    areaid = luaL_checkint(L, 2);
    toggle = luaL_checkint(L, 3);

    lua_pushinteger(L, (lua_Integer)TogglePlayerDynamicArea(playerid, areaid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_TogglePlayerAllDynamicAreas" --> TogglePlayerAllDynamicAreas ( playerid :integer, toggle :integer ) stdret :integer
static int luaamx_TogglePlayerAllDynamicAreas (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int toggle = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    toggle = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)TogglePlayerAllDynamicAreas(playerid, toggle));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInDynamicArea" --> IsPlayerInDynamicArea ( playerid :integer, areaid :integer ) stdret :integer
static int luaamx_IsPlayerInDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;
    int areaid = 0;

    lua_settop(L, 2);
    playerid = luaL_checkint(L, 1);
    areaid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)IsPlayerInDynamicArea(playerid, areaid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPlayerInAnyDynamicArea" --> IsPlayerInAnyDynamicArea ( playerid :integer ) stdret :integer
static int luaamx_IsPlayerInAnyDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    int playerid = 0;

    lua_settop(L, 1);
    playerid = luaL_checkint(L, 1);

    lua_pushinteger(L, (lua_Integer)IsPlayerInAnyDynamicArea(playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPointInDynamicArea" --> IsPointInDynamicArea ( areaid :integer, x :number, y :number, z :number ) stdret :integer
static int luaamx_IsPointInDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    int areaid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 4);
    areaid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);

    lua_pushinteger(L, (lua_Integer)IsPointInDynamicArea(areaid, x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_IsPointInAnyDynamicArea" --> IsPointInAnyDynamicArea ( x :number, y :number, z :number ) stdret :integer
static int luaamx_IsPointInAnyDynamicArea (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    lua_settop(L, 3);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);

    lua_pushinteger(L, (lua_Integer)IsPointInAnyDynamicArea(x, y, z));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachDynamicAreaToObject" --> AttachDynamicAreaToObject ( areaid :integer, objectid :integer, type :integer, playerid :integer ) stdret :integer
static int luaamx_AttachDynamicAreaToObject (lua_State* L) {
    int NumRetVal = 1;
    int areaid = 0;
    int objectid = 0;
    int type = 0;
    int playerid = 0;

    lua_settop(L, 4);
    areaid = luaL_checkint(L, 1);
    objectid = luaL_checkint(L, 2);
    type = luaL_checkint(L, 3);
    playerid = luaL_checkint(L, 4);

    lua_pushinteger(L, (lua_Integer)AttachDynamicAreaToObject(areaid, objectid, type, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachDynamicAreaToPlayer" --> AttachDynamicAreaToPlayer ( areaid :integer, playerid :integer ) stdret :integer
static int luaamx_AttachDynamicAreaToPlayer (lua_State* L) {
    int NumRetVal = 1;
    int areaid = 0;
    int playerid = 0;

    lua_settop(L, 2);
    areaid = luaL_checkint(L, 1);
    playerid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AttachDynamicAreaToPlayer(areaid, playerid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_AttachDynamicAreaToVehicle" --> AttachDynamicAreaToVehicle ( areaid :integer, vehicleid :integer ) stdret :integer
static int luaamx_AttachDynamicAreaToVehicle (lua_State* L) {
    int NumRetVal = 1;
    int areaid = 0;
    int vehicleid = 0;

    lua_settop(L, 2);
    areaid = luaL_checkint(L, 1);
    vehicleid = luaL_checkint(L, 2);

    lua_pushinteger(L, (lua_Integer)AttachDynamicAreaToVehicle(areaid, vehicleid));

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_DestroyAllDynamicAreas" --> DestroyAllDynamicAreas (  ) stdret :integer
static int luaamx_DestroyAllDynamicAreas (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)DestroyAllDynamicAreas());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CountDynamicAreas" --> CountDynamicAreas (  ) stdret :integer
static int luaamx_CountDynamicAreas (lua_State* L) {
    int NumRetVal = 1;

    lua_settop(L, 0);

    lua_pushinteger(L, (lua_Integer)CountDynamicAreas());

    //No other values returned

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicObjectEx" --> CreateDynamicObjectEx ( modelid :integer, x :number, y :number, z :number, rx :number, ry :number, rz :number, drawdistance :number, streamdistance :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicObjectEx (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float rx = 0.0;
    float ry = 0.0;
    float rz = 0.0;
    float drawdistance = 0.0;
    float streamdistance = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 12);
    modelid = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    rx = (float)luaL_checknumber(L, 5);
    ry = (float)luaL_checknumber(L, 6);
    rz = (float)luaL_checknumber(L, 7);
    drawdistance = (float)luaL_checknumber(L, 8);
    streamdistance = (float)luaL_checknumber(L, 9);
    worlds = luaconv_OrderedIntArray(L, 10, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 11, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 12, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicObjectEx(modelid, x, y, z, rx, ry, rz, drawdistance, streamdistance, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicPickupEx" --> CreateDynamicPickupEx ( modelid :integer, type :integer, x :number, y :number, z :number, streamdistance :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicPickupEx (lua_State* L) {
    int NumRetVal = 1;
    int modelid = 0;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float streamdistance = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 9);
    modelid = luaL_checkint(L, 1);
    type = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    streamdistance = (float)luaL_checknumber(L, 6);
    worlds = luaconv_OrderedIntArray(L, 7, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 8, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 9, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicPickupEx(modelid, type, x, y, z, streamdistance, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicCPEx" --> CreateDynamicCPEx ( x :number, y :number, z :number, size :number, streamdistance :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicCPEx (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float size = 0.0;
    float streamdistance = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 8);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    size = (float)luaL_checknumber(L, 4);
    streamdistance = (float)luaL_checknumber(L, 5);
    worlds = luaconv_OrderedIntArray(L, 6, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 7, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 8, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicCPEx(x, y, z, size, streamdistance, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicRaceCPEx" --> CreateDynamicRaceCPEx ( type :integer, x :number, y :number, z :number, nextx :number, nexty :number, nextz :number, size :number, streamdistance :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicRaceCPEx (lua_State* L) {
    int NumRetVal = 1;
    int type = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float nextx = 0.0;
    float nexty = 0.0;
    float nextz = 0.0;
    float size = 0.0;
    float streamdistance = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 12);
    type = luaL_checkint(L, 1);
    x = (float)luaL_checknumber(L, 2);
    y = (float)luaL_checknumber(L, 3);
    z = (float)luaL_checknumber(L, 4);
    nextx = (float)luaL_checknumber(L, 5);
    nexty = (float)luaL_checknumber(L, 6);
    nextz = (float)luaL_checknumber(L, 7);
    size = (float)luaL_checknumber(L, 8);
    streamdistance = (float)luaL_checknumber(L, 9);
    worlds = luaconv_OrderedIntArray(L, 10, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 11, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 12, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicRaceCPEx(type, x, y, z, nextx, nexty, nextz, size, streamdistance, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicMapIconEx" --> CreateDynamicMapIconEx ( x :number, y :number, z :number, type :integer, color :integer, style :integer, streamdistance :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicMapIconEx (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    int type = 0;
    int color = 0;
    int style = 0;
    float streamdistance = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 10);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    type = luaL_checkint(L, 4);
    color = luaL_checkint(L, 5);
    style = luaL_checkint(L, 6);
    streamdistance = (float)luaL_checknumber(L, 7);
    worlds = luaconv_OrderedIntArray(L, 8, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 9, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 10, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicMapIconEx(x, y, z, type, color, style, streamdistance, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamic3DTextLabelEx" --> CreateDynamic3DTextLabelEx ( text :string, color :integer, x :number, y :number, z :number, drawdistance :number, attachedplayer :integer, attachedvehicle :integer, testlos :integer, streamdistance :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamic3DTextLabelEx (lua_State* L) {
    int NumRetVal = 1;
    int* text = NULL;
    int color = 0;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float drawdistance = 0.0;
    int attachedplayer = 0;
    int attachedvehicle = 0;
    int testlos = 0;
    float streamdistance = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 13);
    text = (int*)luaL_checkstring(L, 1);
    color = luaL_checkint(L, 2);
    x = (float)luaL_checknumber(L, 3);
    y = (float)luaL_checknumber(L, 4);
    z = (float)luaL_checknumber(L, 5);
    drawdistance = (float)luaL_checknumber(L, 6);
    attachedplayer = luaL_checkint(L, 7);
    attachedvehicle = luaL_checkint(L, 8);
    testlos = luaL_checkint(L, 9);
    streamdistance = (float)luaL_checknumber(L, 10);
    worlds = luaconv_OrderedIntArray(L, 11, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 12, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 13, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamic3DTextLabelEx(text, color, x, y, z, drawdistance, attachedplayer, attachedvehicle, testlos, streamdistance, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicCircleEx" --> CreateDynamicCircleEx ( x :number, y :number, size :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicCircleEx (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float size = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 6);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    size = (float)luaL_checknumber(L, 3);
    worlds = luaconv_OrderedIntArray(L, 4, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 5, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 6, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicCircleEx(x, y, size, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicRectangleEx" --> CreateDynamicRectangleEx ( minx :number, miny :number, maxx :number, maxy :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicRectangleEx (lua_State* L) {
    int NumRetVal = 1;
    float minx = 0.0;
    float miny = 0.0;
    float maxx = 0.0;
    float maxy = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 7);
    minx = (float)luaL_checknumber(L, 1);
    miny = (float)luaL_checknumber(L, 2);
    maxx = (float)luaL_checknumber(L, 3);
    maxy = (float)luaL_checknumber(L, 4);
    worlds = luaconv_OrderedIntArray(L, 5, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 6, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 7, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicRectangleEx(minx, miny, maxx, maxy, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicSphereEx" --> CreateDynamicSphereEx ( x :number, y :number, z :number, size :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicSphereEx (lua_State* L) {
    int NumRetVal = 1;
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;
    float size = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 7);
    x = (float)luaL_checknumber(L, 1);
    y = (float)luaL_checknumber(L, 2);
    z = (float)luaL_checknumber(L, 3);
    size = (float)luaL_checknumber(L, 4);
    worlds = luaconv_OrderedIntArray(L, 5, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 6, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 7, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicSphereEx(x, y, z, size, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicCubeEx" --> CreateDynamicCubeEx ( minx :number, miny :number, minz :number, maxx :number, maxy :number, maxz :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicCubeEx (lua_State* L) {
    int NumRetVal = 1;
    float minx = 0.0;
    float miny = 0.0;
    float minz = 0.0;
    float maxx = 0.0;
    float maxy = 0.0;
    float maxz = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 9);
    minx = (float)luaL_checknumber(L, 1);
    miny = (float)luaL_checknumber(L, 2);
    minz = (float)luaL_checknumber(L, 3);
    maxx = (float)luaL_checknumber(L, 4);
    maxy = (float)luaL_checknumber(L, 5);
    maxz = (float)luaL_checknumber(L, 6);
    worlds = luaconv_OrderedIntArray(L, 7, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 8, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 9, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicCubeEx(minx, miny, minz, maxx, maxy, maxz, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


// FUNC_PROTOTYPE "luaamx_CreateDynamicPolygonEx" --> CreateDynamicPolygonEx ( points :string, minz :number, maxz :number, worlds :string, interiors :string, players :string ) stdret :integer
static int luaamx_CreateDynamicPolygonEx (lua_State* L) {
    int NumRetVal = 1;
    float* points = NULL;
    int maxpoints = 0;
    float minz = 0.0;
    float maxz = 0.0;
    int* worlds = NULL;
    int maxworlds = 0;
    int* interiors = NULL;
    int maxinteriors = 0;
    int* players = NULL;
    int maxplayers = 0;

    lua_settop(L, 6);
    points = luaconv_OrderedFloatArray(L, 1, &maxpoints);
    minz = (float)luaL_checknumber(L, 2);
    maxz = (float)luaL_checknumber(L, 3);
    worlds = luaconv_OrderedIntArray(L, 4, &maxworlds);
    interiors = luaconv_OrderedIntArray(L, 5, &maxinteriors);
    players = luaconv_OrderedIntArray(L, 6, &maxplayers);

    lua_pushinteger(L, (lua_Integer)CreateDynamicPolygonEx(points, minz, maxz, maxpoints, worlds, interiors, players, maxworlds, maxinteriors, maxplayers));

   free(points);
   free(worlds);
   free(interiors);
   free(players);

    return NumRetVal;
};


static const luaL_Reg FuncArr[] = {
    {"Streamer_TickRate",               luaamx_Streamer_TickRate},
    {"Streamer_MaxItems",               luaamx_Streamer_MaxItems},
    {"Streamer_VisibleItems",           luaamx_Streamer_VisibleItems},
    {"Streamer_CellDistance",           luaamx_Streamer_CellDistance},
    {"Streamer_CellSize",               luaamx_Streamer_CellSize},
    {"Streamer_ProcessActiveItems",     luaamx_Streamer_ProcessActiveItems},
    {"Streamer_ToggleIdleUpdate",       luaamx_Streamer_ToggleIdleUpdate},
    {"Streamer_ToggleItemUpdate",       luaamx_Streamer_ToggleItemUpdate},
    {"Streamer_Update",                 luaamx_Streamer_Update},
    {"Streamer_UpdateEx",               luaamx_Streamer_UpdateEx},
    {"Streamer_GetFloatData",           luaamx_Streamer_GetFloatData},
    {"Streamer_SetFloatData",           luaamx_Streamer_SetFloatData},
    {"Streamer_GetIntData",             luaamx_Streamer_GetIntData},
    {"Streamer_SetIntData",             luaamx_Streamer_SetIntData},
    {"Streamer_SetArrayData",           luaamx_Streamer_SetArrayData},
    {"Streamer_IsInArrayData",          luaamx_Streamer_IsInArrayData},
    {"Streamer_AppendArrayData",        luaamx_Streamer_AppendArrayData},
    {"Streamer_RemoveArrayData",        luaamx_Streamer_RemoveArrayData},
    {"Streamer_GetUpperBound",          luaamx_Streamer_GetUpperBound},
    {"Streamer_GetDistanceToItem",      luaamx_Streamer_GetDistanceToItem},
    {"Streamer_IsItemVisible",          luaamx_Streamer_IsItemVisible},
    {"Streamer_DestroyAllVisibleItems", luaamx_Streamer_DestroyAllVisibleItems},
    {"Streamer_CountVisibleItems",      luaamx_Streamer_CountVisibleItems},
    {"CreateDynamicObject",             luaamx_CreateDynamicObject},
    {"DestroyDynamicObject",            luaamx_DestroyDynamicObject},
    {"IsValidDynamicObject",            luaamx_IsValidDynamicObject},
    {"SetDynamicObjectPos",             luaamx_SetDynamicObjectPos},
    {"GetDynamicObjectPos",             luaamx_GetDynamicObjectPos},
    {"SetDynamicObjectRot",             luaamx_SetDynamicObjectRot},
    {"GetDynamicObjectRot",             luaamx_GetDynamicObjectRot},
    {"MoveDynamicObject",               luaamx_MoveDynamicObject},
    {"StopDynamicObject",               luaamx_StopDynamicObject},
    {"IsDynamicObjectMoving",           luaamx_IsDynamicObjectMoving},
    {"AttachCameraToDynamicObject",     luaamx_AttachCameraToDynamicObject},
    {"AttachDynamicObjectToVehicle",    luaamx_AttachDynamicObjectToVehicle},
    {"EditDynamicObject",               luaamx_EditDynamicObject},
    {"GetDynamicObjectMaterial",        luaamx_GetDynamicObjectMaterial},
    {"SetDynamicObjectMaterial",        luaamx_SetDynamicObjectMaterial},
    {"GetDynamicObjectMaterialText",    luaamx_GetDynamicObjectMaterialText},
    {"SetDynamicObjectMaterialText",    luaamx_SetDynamicObjectMaterialText},
    {"DestroyAllDynamicObjects",        luaamx_DestroyAllDynamicObjects},
    {"CountDynamicObjects",             luaamx_CountDynamicObjects},
    {"CreateDynamicPickup",             luaamx_CreateDynamicPickup},
    {"DestroyDynamicPickup",            luaamx_DestroyDynamicPickup},
    {"IsValidDynamicPickup",            luaamx_IsValidDynamicPickup},
    {"DestroyAllDynamicPickups",        luaamx_DestroyAllDynamicPickups},
    {"CountDynamicPickups",             luaamx_CountDynamicPickups},
    {"CreateDynamicCP",                 luaamx_CreateDynamicCP},
    {"DestroyDynamicCP",                luaamx_DestroyDynamicCP},
    {"IsValidDynamicCP",                luaamx_IsValidDynamicCP},
    {"TogglePlayerDynamicCP",           luaamx_TogglePlayerDynamicCP},
    {"TogglePlayerAllDynamicCPs",       luaamx_TogglePlayerAllDynamicCPs},
    {"IsPlayerInDynamicCP",             luaamx_IsPlayerInDynamicCP},
    {"GetPlayerVisibleDynamicCP",       luaamx_GetPlayerVisibleDynamicCP},
    {"DestroyAllDynamicCPs",            luaamx_DestroyAllDynamicCPs},
    {"CountDynamicCPs",                 luaamx_CountDynamicCPs},
    {"CreateDynamicRaceCP",             luaamx_CreateDynamicRaceCP},
    {"DestroyDynamicRaceCP",            luaamx_DestroyDynamicRaceCP},
    {"IsValidDynamicRaceCP",            luaamx_IsValidDynamicRaceCP},
    {"TogglePlayerDynamicRaceCP",       luaamx_TogglePlayerDynamicRaceCP},
    {"TogglePlayerAllDynamicRaceCPs",   luaamx_TogglePlayerAllDynamicRaceCPs},
    {"IsPlayerInDynamicRaceCP",         luaamx_IsPlayerInDynamicRaceCP},
    {"GetPlayerVisibleDynamicRaceCP",   luaamx_GetPlayerVisibleDynamicRaceCP},
    {"DestroyAllDynamicRaceCPs",        luaamx_DestroyAllDynamicRaceCPs},
    {"CountDynamicRaceCPs",             luaamx_CountDynamicRaceCPs},
    {"CreateDynamicMapIcon",            luaamx_CreateDynamicMapIcon},
    {"DestroyDynamicMapIcon",           luaamx_DestroyDynamicMapIcon},
    {"IsValidDynamicMapIcon",           luaamx_IsValidDynamicMapIcon},
    {"DestroyAllDynamicMapIcons",       luaamx_DestroyAllDynamicMapIcons},
    {"CountDynamicMapIcons",            luaamx_CountDynamicMapIcons},
    {"CreateDynamic3DTextLabel",        luaamx_CreateDynamic3DTextLabel},
    {"DestroyDynamic3DTextLabel",       luaamx_DestroyDynamic3DTextLabel},
    {"IsValidDynamic3DTextLabel",       luaamx_IsValidDynamic3DTextLabel},
    {"GetDynamic3DTextLabelText",       luaamx_GetDynamic3DTextLabelText},
    {"UpdateDynamic3DTextLabelText",    luaamx_UpdateDynamic3DTextLabelText},
    {"DestroyAllDynamic3DTextLabels",   luaamx_DestroyAllDynamic3DTextLabels},
    {"CountDynamic3DTextLabels",        luaamx_CountDynamic3DTextLabels},
    {"CreateDynamicCircle",             luaamx_CreateDynamicCircle},
    {"CreateDynamicRectangle",          luaamx_CreateDynamicRectangle},
    {"CreateDynamicSphere",             luaamx_CreateDynamicSphere},
    {"CreateDynamicCube",               luaamx_CreateDynamicCube},
    {"CreateDynamicPolygon",            luaamx_CreateDynamicPolygon},
    {"DestroyDynamicArea",              luaamx_DestroyDynamicArea},
    {"IsValidDynamicArea",              luaamx_IsValidDynamicArea},
    {"TogglePlayerDynamicArea",         luaamx_TogglePlayerDynamicArea},
    {"TogglePlayerAllDynamicAreas",     luaamx_TogglePlayerAllDynamicAreas},
    {"IsPlayerInDynamicArea",           luaamx_IsPlayerInDynamicArea},
    {"IsPlayerInAnyDynamicArea",        luaamx_IsPlayerInAnyDynamicArea},
    {"IsPointInDynamicArea",            luaamx_IsPointInDynamicArea},
    {"IsPointInAnyDynamicArea",         luaamx_IsPointInAnyDynamicArea},
    {"AttachDynamicAreaToObject",       luaamx_AttachDynamicAreaToObject},
    {"AttachDynamicAreaToPlayer",       luaamx_AttachDynamicAreaToPlayer},
    {"AttachDynamicAreaToVehicle",      luaamx_AttachDynamicAreaToVehicle},
    {"DestroyAllDynamicAreas",          luaamx_DestroyAllDynamicAreas},
    {"CountDynamicAreas",               luaamx_CountDynamicAreas},
    {"CreateDynamicObjectEx",           luaamx_CreateDynamicObjectEx},
    {"CreateDynamicPickupEx",           luaamx_CreateDynamicPickupEx},
    {"CreateDynamicCPEx",               luaamx_CreateDynamicCPEx},
    {"CreateDynamicRaceCPEx",           luaamx_CreateDynamicRaceCPEx},
    {"CreateDynamicMapIconEx",          luaamx_CreateDynamicMapIconEx},
    {"CreateDynamic3DTextLabelEx",      luaamx_CreateDynamic3DTextLabelEx},
    {"CreateDynamicCircleEx",           luaamx_CreateDynamicCircleEx},
    {"CreateDynamicRectangleEx",        luaamx_CreateDynamicRectangleEx},
    {"CreateDynamicSphereEx",           luaamx_CreateDynamicSphereEx},
    {"CreateDynamicCubeEx",             luaamx_CreateDynamicCubeEx},
    {"CreateDynamicPolygonEx",          luaamx_CreateDynamicPolygonEx},
    {NULL, NULL}
};