/*
	ANNOTATED FOR LUA FUNC GEN

	MODIFICATIONS:
		CreateDynamicPolygon & CreateDynamicPolygonEx, int* inarr type cast default to amx_NewArray, removed type cast to use overloaded NewArray function
		Removed Streamer_GetArrayData for its stupidity
*/

int Streamer_TickRate(int rate)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		rate
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_MaxItems(int type, int items)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		type, items
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_VisibleItems(int type, int items)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		type, items
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_CellDistance(float distance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(distance)
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_CellSize(float size)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(size)
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_ProcessActiveItems()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_ToggleIdleUpdate(int playerid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_ToggleItemUpdate(int playerid, int type, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		playerid, type, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_Update(int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_UpdateEx(int playerid, float x, float y, float z, int worldid, int interiorid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[7] =
	{
		sizeof(args) - sizeof(cell),
		playerid, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), worldid, interiorid
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_GetFloatData(int type, int id, int data, float& result)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell* result_phys;

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, amx_Allot(pAMX, 1, &result_phys)
	};

	int ret = func(pAMX, args);

	result = *((float*)result_phys);
	amx_Release(pAMX, args[4]);

	return ret;
}

int Streamer_SetFloatData(int type, int id, int data, float value)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, amx_ftoc(value)
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_GetIntData(int type, int id, int data)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_SetIntData(int type, int id, int data, int value)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, value
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_SetArrayData(int type, int id, int data, int* src, int maxlength) //INFEC_ANNOTATE (inarr:src:maxlength)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[6] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, amx_NewArray(pAMX, (int*)src, maxlength), maxlength
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[4]);

	return ret;
}

int Streamer_IsInArrayData(int type, int id, int data, int value)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, value
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_AppendArrayData(int type, int id, int data, int value)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, value
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_RemoveArrayData(int type, int id, int data, int value)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		type, id, data, value
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_GetUpperBound(int type)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		type
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_GetDistanceToItem(float x, float y, float z, int type, int id, float& distance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell* distance_phys;

	cell args[7] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), type, id, amx_Allot(pAMX, 1, &distance_phys)
	};

	int ret = func(pAMX, args);

	distance = *((float*)distance_phys);
	amx_Release(pAMX, args[6]);

	return ret;
}

int Streamer_IsItemVisible(int playerid, int type, int id)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		playerid, type, id
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_DestroyAllVisibleItems(int playerid, int type)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, type
	};

	int ret = func(pAMX, args);

	return ret;
}

int Streamer_CountVisibleItems(int playerid, int type)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, type
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicObject(int modelid, float x, float y, float z, float rx, float ry, float rz, int worldid, int interiorid, int playerid, float streamdistance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[12] =
	{
		sizeof(args) - sizeof(cell),
		modelid, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(rx), amx_ftoc(ry), amx_ftoc(rz), worldid, interiorid, playerid, amx_ftoc(streamdistance)
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyDynamicObject(int objectid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		objectid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamicObject(int objectid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		objectid
	};

	int ret = func(pAMX, args);

	return ret;
}

int SetDynamicObjectPos(int objectid, float x, float y, float z)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		objectid, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z)
	};

	int ret = func(pAMX, args);

	return ret;
}

int GetDynamicObjectPos(int objectid, float& x, float& y, float& z)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell* x_phys;
	cell* y_phys;
	cell* z_phys;

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		objectid, amx_Allot(pAMX, 1, &x_phys), amx_Allot(pAMX, 1, &y_phys), amx_Allot(pAMX, 1, &z_phys)
	};

	int ret = func(pAMX, args);

	x = *((float*)x_phys);
	amx_Release(pAMX, args[2]);

	y = *((float*)y_phys);
	amx_Release(pAMX, args[3]);

	z = *((float*)z_phys);
	amx_Release(pAMX, args[4]);

	return ret;
}

int SetDynamicObjectRot(int objectid, float rx, float ry, float rz)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		objectid, amx_ftoc(rx), amx_ftoc(ry), amx_ftoc(rz)
	};

	int ret = func(pAMX, args);

	return ret;
}

int GetDynamicObjectRot(int objectid, float& rx, float& ry, float& rz)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell* rx_phys;
	cell* ry_phys;
	cell* rz_phys;

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		objectid, amx_Allot(pAMX, 1, &rx_phys), amx_Allot(pAMX, 1, &ry_phys), amx_Allot(pAMX, 1, &rz_phys)
	};

	int ret = func(pAMX, args);

	rx = *((float*)rx_phys);
	amx_Release(pAMX, args[2]);

	ry = *((float*)ry_phys);
	amx_Release(pAMX, args[3]);

	rz = *((float*)rz_phys);
	amx_Release(pAMX, args[4]);

	return ret;
}

int MoveDynamicObject(int objectid, float x, float y, float z, float speed, float rx, float ry, float rz)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[9] =
	{
		sizeof(args) - sizeof(cell),
		objectid, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(speed), amx_ftoc(rx), amx_ftoc(ry), amx_ftoc(rz)
	};

	int ret = func(pAMX, args);

	return ret;
}

int StopDynamicObject(int objectid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		objectid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsDynamicObjectMoving(int objectid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		objectid
	};

	int ret = func(pAMX, args);

	return ret;
}

int AttachCameraToDynamicObject(int playerid, int objectid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, objectid
	};

	int ret = func(pAMX, args);

	return ret;
}

int AttachDynamicObjectToVehicle(int objectid, int vehicleid, float offsetx, float offsety, float offsetz, float rx, float ry, float rz)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[9] =
	{
		sizeof(args) - sizeof(cell),
		objectid, vehicleid, amx_ftoc(offsetx), amx_ftoc(offsety), amx_ftoc(offsetz), amx_ftoc(rx), amx_ftoc(ry), amx_ftoc(rz)
	};

	int ret = func(pAMX, args);

	return ret;
}

int EditDynamicObject(int playerid, int objectid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, objectid
	};

	int ret = func(pAMX, args);

	return ret;
}

int GetDynamicObjectMaterial(int objectid, int materialindex, int& modelid, int* txdname, int* texturename, int& materialcolor, int maxtxdname, int maxtexturename) //INFEC_ANNOTATE (outstr:txdname:maxtxdname) (outstr:texturename:maxtexturename)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell* modelid_phys;
	cell* txdname_phys;
	cell* texturename_phys;
	cell* materialcolor_phys;

	cell args[9] =
	{
		sizeof(args) - sizeof(cell),
		objectid, materialindex, amx_Allot(pAMX, 1, &modelid_phys), amx_Allot(pAMX, maxtxdname, &txdname_phys), amx_Allot(pAMX, maxtexturename, &texturename_phys), amx_Allot(pAMX, 1, &materialcolor_phys), maxtxdname, maxtexturename
	};

	int ret = func(pAMX, args);

	modelid = *((int*)modelid_phys);
	amx_Release(pAMX, args[3]);

	amx_GetString((char*)txdname, txdname_phys, 0, maxtxdname);
	amx_Release(pAMX, args[4]);

	amx_GetString((char*)texturename, texturename_phys, 0, maxtexturename);
	amx_Release(pAMX, args[5]);

	materialcolor = *((int*)materialcolor_phys);
	amx_Release(pAMX, args[6]);

	return ret;
}

int SetDynamicObjectMaterial(int objectid, int materialindex, int modelid, int* txdname, int* texturename, int materialcolor)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[7] =
	{
		sizeof(args) - sizeof(cell),
		objectid, materialindex, modelid, amx_NewString(pAMX, (const char*)txdname), amx_NewString(pAMX, (const char*)texturename), materialcolor
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[4]);

	amx_Release(pAMX, args[5]);

	return ret;
}

int GetDynamicObjectMaterialText(int objectid, int materialindex, int* text, int& materialsize, int* fontface, int& fontsize, int& bold, int& fontcolor, int& backcolor, int& textalignment, int maxtext, int maxfontface) //INFEC_ANNOTATE (outstr:text:maxtext) (outstr:fontface:maxfontface)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell* materialsize_phys;
	cell* fontsize_phys;
	cell* bold_phys;
	cell* fontcolor_phys;
	cell* backcolor_phys;
	cell* textalignment_phys;

	cell args[13] =
	{
		sizeof(args) - sizeof(cell),
		objectid, materialindex, amx_NewString(pAMX, (const char*)text), amx_Allot(pAMX, 1, &materialsize_phys), amx_NewString(pAMX, (const char*)fontface), amx_Allot(pAMX, 1, &fontsize_phys), amx_Allot(pAMX, 1, &bold_phys), amx_Allot(pAMX, 1, &fontcolor_phys), amx_Allot(pAMX, 1, &backcolor_phys), amx_Allot(pAMX, 1, &textalignment_phys), maxtext, maxfontface
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[3]);

	materialsize = *((int*)materialsize_phys);
	amx_Release(pAMX, args[4]);

	amx_Release(pAMX, args[5]);

	fontsize = *((int*)fontsize_phys);
	amx_Release(pAMX, args[6]);

	bold = *((int*)bold_phys);
	amx_Release(pAMX, args[7]);

	fontcolor = *((int*)fontcolor_phys);
	amx_Release(pAMX, args[8]);

	backcolor = *((int*)backcolor_phys);
	amx_Release(pAMX, args[9]);

	textalignment = *((int*)textalignment_phys);
	amx_Release(pAMX, args[10]);

	return ret;
}

int SetDynamicObjectMaterialText(int objectid, int materialindex, int* text, int materialsize, int* fontface, int fontsize, int bold, int fontcolor, int backcolor, int textalignment)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[11] =
	{
		sizeof(args) - sizeof(cell),
		objectid, materialindex, amx_NewString(pAMX, (const char*)text), materialsize, amx_NewString(pAMX, (const char*)fontface), fontsize, bold, fontcolor, backcolor, textalignment
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[3]);

	amx_Release(pAMX, args[5]);

	return ret;
}

int DestroyAllDynamicObjects()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamicObjects()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicPickup(int modelid, int type, float x, float y, float z, int worldid, int interiorid, int playerid, float streamdistance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[10] =
	{
		sizeof(args) - sizeof(cell),
		modelid, type, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), worldid, interiorid, playerid, amx_ftoc(streamdistance)
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyDynamicPickup(int pickupid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		pickupid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamicPickup(int pickupid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		pickupid
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyAllDynamicPickups()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamicPickups()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicCP(float x, float y, float z, float size, int worldid, int interiorid, int playerid, float streamdistance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[9] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(size), worldid, interiorid, playerid, amx_ftoc(streamdistance)
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyDynamicCP(int checkpointid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		checkpointid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamicCP(int checkpointid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		checkpointid
	};

	int ret = func(pAMX, args);

	return ret;
}

int TogglePlayerDynamicCP(int playerid, int checkpointid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		playerid, checkpointid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int TogglePlayerAllDynamicCPs(int playerid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsPlayerInDynamicCP(int playerid, int checkpointid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, checkpointid
	};

	int ret = func(pAMX, args);

	return ret;
}

int GetPlayerVisibleDynamicCP(int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyAllDynamicCPs()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamicCPs()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicRaceCP(int type, float x, float y, float z, float nextx, float nexty, float nextz, float size, int worldid, int interiorid, int playerid, float streamdistance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[13] =
	{
		sizeof(args) - sizeof(cell),
		type, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(nextx), amx_ftoc(nexty), amx_ftoc(nextz), amx_ftoc(size), worldid, interiorid, playerid, amx_ftoc(streamdistance)
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyDynamicRaceCP(int checkpointid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		checkpointid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamicRaceCP(int checkpointid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		checkpointid
	};

	int ret = func(pAMX, args);

	return ret;
}

int TogglePlayerDynamicRaceCP(int playerid, int checkpointid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		playerid, checkpointid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int TogglePlayerAllDynamicRaceCPs(int playerid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsPlayerInDynamicRaceCP(int playerid, int checkpointid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, checkpointid
	};

	int ret = func(pAMX, args);

	return ret;
}

int GetPlayerVisibleDynamicRaceCP(int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyAllDynamicRaceCPs()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamicRaceCPs()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicMapIcon(float x, float y, float z, int type, int color, int worldid, int interiorid, int playerid, float streamdistance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[10] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), type, color, worldid, interiorid, playerid, amx_ftoc(streamdistance)
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyDynamicMapIcon(int iconid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		iconid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamicMapIcon(int iconid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		iconid
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyAllDynamicMapIcons()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamicMapIcons()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamic3DTextLabel(int* text, int color, float x, float y, float z, float drawdistance, int attachedplayer, int attachedvehicle, int testlos, int worldid, int interiorid, int playerid, float streamdistance)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[14] =
	{
		sizeof(args) - sizeof(cell),
		amx_NewString(pAMX, (const char*)text), color, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(drawdistance), attachedplayer, attachedvehicle, testlos, worldid, interiorid, playerid, amx_ftoc(streamdistance)
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[1]);

	return ret;
}

int DestroyDynamic3DTextLabel(int id)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		id
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamic3DTextLabel(int id)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		id
	};

	int ret = func(pAMX, args);

	return ret;
}

int GetDynamic3DTextLabelText(int id, int* text, int maxlength) //INFEC_ANNOTATE (outstr:text:maxlength)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		id, amx_NewString(pAMX, (const char*)text), maxlength
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[2]);

	return ret;
}

int UpdateDynamic3DTextLabelText(int id, int color, int* text)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		id, color, amx_NewString(pAMX, (const char*)text)
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[3]);

	return ret;
}

int DestroyAllDynamic3DTextLabels()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamic3DTextLabels()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicCircle(float x, float y, float size, int worldid, int interiorid, int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[7] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(size), worldid, interiorid, playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicRectangle(float minx, float miny, float maxx, float maxy, int worldid, int interiorid, int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[8] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(minx), amx_ftoc(miny), amx_ftoc(maxx), amx_ftoc(maxy), worldid, interiorid, playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicSphere(float x, float y, float z, float size, int worldid, int interiorid, int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[8] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(size), worldid, interiorid, playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicCube(float minx, float miny, float minz, float maxx, float maxy, float maxz, int worldid, int interiorid, int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[10] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(minx), amx_ftoc(miny), amx_ftoc(minz), amx_ftoc(maxx), amx_ftoc(maxy), amx_ftoc(maxz), worldid, interiorid, playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicPolygon(float* points, float minz, float maxz, int maxpoints, int worldid, int interiorid, int playerid) //INFEC_ANNOTATE (inarr:points:maxpoints)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[8] =
	{
		sizeof(args) - sizeof(cell),
		amx_NewArray(pAMX, (float*)points, maxpoints), amx_ftoc(minz), amx_ftoc(maxz), maxpoints, worldid, interiorid, playerid
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[1]);

	return ret;
}

int DestroyDynamicArea(int areaid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		areaid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsValidDynamicArea(int areaid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		areaid
	};

	int ret = func(pAMX, args);

	return ret;
}

int TogglePlayerDynamicArea(int playerid, int areaid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		playerid, areaid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int TogglePlayerAllDynamicAreas(int playerid, int toggle)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, toggle
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsPlayerInDynamicArea(int playerid, int areaid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		playerid, areaid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsPlayerInAnyDynamicArea(int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[2] =
	{
		sizeof(args) - sizeof(cell),
		playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsPointInDynamicArea(int areaid, float x, float y, float z)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		areaid, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z)
	};

	int ret = func(pAMX, args);

	return ret;
}

int IsPointInAnyDynamicArea(float x, float y, float z)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[4] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z)
	};

	int ret = func(pAMX, args);

	return ret;
}

int AttachDynamicAreaToObject(int areaid, int objectid, int type, int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[5] =
	{
		sizeof(args) - sizeof(cell),
		areaid, objectid, type, playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int AttachDynamicAreaToPlayer(int areaid, int playerid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		areaid, playerid
	};

	int ret = func(pAMX, args);

	return ret;
}

int AttachDynamicAreaToVehicle(int areaid, int vehicleid)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[3] =
	{
		sizeof(args) - sizeof(cell),
		areaid, vehicleid
	};

	int ret = func(pAMX, args);

	return ret;
}

int DestroyAllDynamicAreas()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CountDynamicAreas()
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
	cell args[1] =
	{
		sizeof(args) - sizeof(cell),
		
	};

	int ret = func(pAMX, args);

	return ret;
}

int CreateDynamicObjectEx(int modelid, float x, float y, float z, float rx, float ry, float rz, float drawdistance, float streamdistance, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[16] =
	{
		sizeof(args) - sizeof(cell),
		modelid, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(rx), amx_ftoc(ry), amx_ftoc(rz), amx_ftoc(drawdistance), amx_ftoc(streamdistance), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[10]);

	amx_Release(pAMX, args[11]);

	amx_Release(pAMX, args[12]);

	return ret;
}

int CreateDynamicPickupEx(int modelid, int type, float x, float y, float z, float streamdistance, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[13] =
	{
		sizeof(args) - sizeof(cell),
		modelid, type, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(streamdistance), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[7]);

	amx_Release(pAMX, args[8]);

	amx_Release(pAMX, args[9]);

	return ret;
}

int CreateDynamicCPEx(float x, float y, float z, float size, float streamdistance, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[12] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(size), amx_ftoc(streamdistance), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[6]);

	amx_Release(pAMX, args[7]);

	amx_Release(pAMX, args[8]);

	return ret;
}

int CreateDynamicRaceCPEx(int type, float x, float y, float z, float nextx, float nexty, float nextz, float size, float streamdistance, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[16] =
	{
		sizeof(args) - sizeof(cell),
		type, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(nextx), amx_ftoc(nexty), amx_ftoc(nextz), amx_ftoc(size), amx_ftoc(streamdistance), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[10]);

	amx_Release(pAMX, args[11]);

	amx_Release(pAMX, args[12]);

	return ret;
}

int CreateDynamicMapIconEx(float x, float y, float z, int type, int color, int style, float streamdistance, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[14] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), type, color, style, amx_ftoc(streamdistance), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[8]);

	amx_Release(pAMX, args[9]);

	amx_Release(pAMX, args[10]);

	return ret;
}

int CreateDynamic3DTextLabelEx(int* text, int color, float x, float y, float z, float drawdistance, int attachedplayer, int attachedvehicle, int testlos, float streamdistance, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[17] =
	{
		sizeof(args) - sizeof(cell),
		amx_NewString(pAMX, (const char*)text), color, amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(drawdistance), attachedplayer, attachedvehicle, testlos, amx_ftoc(streamdistance), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[1]);

	amx_Release(pAMX, args[11]);

	amx_Release(pAMX, args[12]);

	amx_Release(pAMX, args[13]);

	return ret;
}

int CreateDynamicCircleEx(float x, float y, float size, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[10] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(size), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[4]);

	amx_Release(pAMX, args[5]);

	amx_Release(pAMX, args[6]);

	return ret;
}

int CreateDynamicRectangleEx(float minx, float miny, float maxx, float maxy, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[11] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(minx), amx_ftoc(miny), amx_ftoc(maxx), amx_ftoc(maxy), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[5]);

	amx_Release(pAMX, args[6]);

	amx_Release(pAMX, args[7]);

	return ret;
}

int CreateDynamicSphereEx(float x, float y, float z, float size, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[11] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(x), amx_ftoc(y), amx_ftoc(z), amx_ftoc(size), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[5]);

	amx_Release(pAMX, args[6]);

	amx_Release(pAMX, args[7]);

	return ret;
}

int CreateDynamicCubeEx(float minx, float miny, float minz, float maxx, float maxy, float maxz, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[13] =
	{
		sizeof(args) - sizeof(cell),
		amx_ftoc(minx), amx_ftoc(miny), amx_ftoc(minz), amx_ftoc(maxx), amx_ftoc(maxy), amx_ftoc(maxz), amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[7]);

	amx_Release(pAMX, args[8]);

	amx_Release(pAMX, args[9]);

	return ret;
}

int CreateDynamicPolygonEx(float* points, float minz, float maxz, int maxpoints, int* worlds, int* interiors, int* players, int maxworlds, int maxinteriors, int maxplayers) //INFEC_ANNOTATE (inarr:points:maxpoints) (inarr:worlds:maxworlds) (inarr:interiors:maxinteriors) (inarr:players:maxplayers)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);

	cell args[11] =
	{
		sizeof(args) - sizeof(cell),
		amx_NewArray(pAMX, (float*)points, maxpoints), amx_ftoc(minz), amx_ftoc(maxz), maxpoints, amx_NewArray(pAMX, (int*)worlds, maxworlds), amx_NewArray(pAMX, (int*)interiors, maxinteriors), amx_NewArray(pAMX, (int*)players, maxplayers), maxworlds, maxinteriors, maxplayers
	};

	int ret = func(pAMX, args);

	amx_Release(pAMX, args[1]);

	amx_Release(pAMX, args[5]);

	amx_Release(pAMX, args[6]);

	amx_Release(pAMX, args[7]);

	return ret;
}

