AMX_Function_Declarations = {
   {Name       = [[CreateObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[rX]],
        Type = [[float]]},
       {Name = [[rY]],
        Type = [[float]]},
       {Name = [[rZ]],
        Type = [[float]]},
       {Name = [[drawDistance]],
        Type = [[float]]}}};

   {Name       = [[AttachObjectToVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[OffsetX]],
        Type = [[float]]},
       {Name = [[OffsetY]],
        Type = [[float]]},
       {Name = [[OffsetZ]],
        Type = [[float]]},
       {Name = [[RotX]],
        Type = [[float]]},
       {Name = [[RotY]],
        Type = [[float]]},
       {Name = [[RotZ]],
        Type = [[float]]}}};

   {Name       = [[AttachObjectToObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[attachtoid]],
        Type = [[int]]},
       {Name = [[offsetX]],
        Type = [[float]]},
       {Name = [[offsetY]],
        Type = [[float]]},
       {Name = [[offsetZ]],
        Type = [[float]]},
       {Name = [[rotX]],
        Type = [[float]]},
       {Name = [[rotY]],
        Type = [[float]]},
       {Name = [[rotZ]],
        Type = [[float]]},
       {Name = [[syncRotation]],
        Type = [[int]]}}};

   {Name       = [[AttachObjectToPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[OffsetX]],
        Type = [[float]]},
       {Name = [[OffsetY]],
        Type = [[float]]},
       {Name = [[OffsetZ]],
        Type = [[float]]},
       {Name = [[rX]],
        Type = [[float]]},
       {Name = [[rY]],
        Type = [[float]]},
       {Name = [[rZ]],
        Type = [[float]]}}};

   {Name       = [[SetObjectPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[GetObjectPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetObjectRot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[rotX]],
        Type = [[float]]},
       {Name = [[rotY]],
        Type = [[float]]},
       {Name = [[rotZ]],
        Type = [[float]]}}};

   {Name       = [[GetObjectRot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[rotX]],
        Type = [[float&]]},
       {Name = [[rotY]],
        Type = [[float&]]},
       {Name = [[rotZ]],
        Type = [[float&]]}}};

   {Name       = [[IsValidObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[DestroyObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[MoveObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[Speed]],
        Type = [[float]]},
       {Name = [[rotX]],
        Type = [[float]]},
       {Name = [[rotY]],
        Type = [[float]]},
       {Name = [[rotZ]],
        Type = [[float]]}}};

   {Name       = [[StopObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[IsObjectMoving]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[EditObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[EditPlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[SelectObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[CancelEdit]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[CreatePlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[rx]],
        Type = [[float]]},
       {Name = [[ry]],
        Type = [[float]]},
       {Name = [[rz]],
        Type = [[float]]},
       {Name = [[drawDistance]],
        Type = [[float]]}}};

   {Name       = [[AttachPlayerObjectToVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[fOffsetX]],
        Type = [[float]]},
       {Name = [[fOffsetY]],
        Type = [[float]]},
       {Name = [[fOffsetZ]],
        Type = [[float]]},
       {Name = [[fRotX]],
        Type = [[float]]},
       {Name = [[fRotY]],
        Type = [[float]]},
       {Name = [[fRotZ]],
        Type = [[float]]}}};

   {Name       = [[SetPlayerObjectPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerObjectPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetPlayerObjectRot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[rotX]],
        Type = [[float]]},
       {Name = [[rotY]],
        Type = [[float]]},
       {Name = [[rotZ]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerObjectRot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[rotX]],
        Type = [[float&]]},
       {Name = [[rotY]],
        Type = [[float&]]},
       {Name = [[rotZ]],
        Type = [[float&]]}}};

   {Name       = [[IsValidPlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[DestroyPlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[MovePlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[Speed]],
        Type = [[float]]},
       {Name = [[rotX]],
        Type = [[float]]},
       {Name = [[rotY]],
        Type = [[float]]},
       {Name = [[rotZ]],
        Type = [[float]]}}};

   {Name       = [[StopPlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerObjectMoving]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[AttachPlayerObjectToPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectplayer]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[attachplayer]],
        Type = [[int]]},
       {Name = [[OffsetX]],
        Type = [[float]]},
       {Name = [[OffsetY]],
        Type = [[float]]},
       {Name = [[OffsetZ]],
        Type = [[float]]},
       {Name = [[rX]],
        Type = [[float]]},
       {Name = [[rY]],
        Type = [[float]]},
       {Name = [[rZ]],
        Type = [[float]]}}};

   {Name       = [[SetObjectMaterial]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[materialindex]],
        Type = [[int]]},
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[txdname]],
        Type = [[char*]]},
       {Name = [[texturename]],
        Type = [[char*]]},
       {Name = [[materialcolor]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerObjectMaterial]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[materialindex]],
        Type = [[int]]},
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[txdname]],
        Type = [[char*]]},
       {Name = [[texturename]],
        Type = [[char*]]},
       {Name = [[materialcolor]],
        Type = [[int]]}}};

   {Name       = [[SetObjectMaterialText]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[char*]]},
       {Name = [[materialindex]],
        Type = [[int]]},
       {Name = [[materialsize]],
        Type = [[int]]},
       {Name = [[fontface]],
        Type = [[char*]]},
       {Name = [[fontsize]],
        Type = [[int]]},
       {Name = [[bold]],
        Type = [[int]]},
       {Name = [[fontcolor]],
        Type = [[int]]},
       {Name = [[backcolor]],
        Type = [[int]]},
       {Name = [[textalignment]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerObjectMaterialText]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[char*]]},
       {Name = [[materialindex]],
        Type = [[int]]},
       {Name = [[materialsize]],
        Type = [[int]]},
       {Name = [[fontface]],
        Type = [[char*]]},
       {Name = [[fontsize]],
        Type = [[int]]},
       {Name = [[bold]],
        Type = [[int]]},
       {Name = [[fontcolor]],
        Type = [[int]]},
       {Name = [[backcolor]],
        Type = [[int]]},
       {Name = [[textalignment]],
        Type = [[int]]}}};

   {Name       = [[SetSpawnInfo]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[team]],
        Type = [[int]]},
       {Name = [[skin]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[rotation]],
        Type = [[float]]},
       {Name = [[weapon1]],
        Type = [[int]]},
       {Name = [[weapon1_ammo]],
        Type = [[int]]},
       {Name = [[weapon2]],
        Type = [[int]]},
       {Name = [[weapon2_ammo]],
        Type = [[int]]},
       {Name = [[weapon3]],
        Type = [[int]]},
       {Name = [[weapon3_ammo]],
        Type = [[int]]}}};

   {Name       = [[SpawnPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[SetPlayerPosFindZ]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetPlayerFacingAngle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[ang]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerFacingAngle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[ang]],
        Type = [[float&]]}}};

   {Name       = [[IsPlayerInRangeOfPoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[range]],
        Type = [[float]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[IsPlayerStreamedIn]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[forplayerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerInterior]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[interiorid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerInterior]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerHealth]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[health]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerHealth]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[health]],
        Type = [[float&]]}}};

   {Name       = [[SetPlayerArmour]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[armour]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerArmour]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[armour]],
        Type = [[float&]]}}};

   {Name       = [[SetPlayerAmmo]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[weaponslot]],
        Type = [[int]]},
       {Name = [[ammo]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerAmmo]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerWeaponState]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerTargetPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerTeam]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[teamid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerTeam]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerScore]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[score]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerScore]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerDrunkLevel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerDrunkLevel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[level]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerSkin]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[skinid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerSkin]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GivePlayerWeapon]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[weaponid]],
        Type = [[int]]},
       {Name = [[ammo]],
        Type = [[int]]}}};

   {Name       = [[ResetPlayerWeapons]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerArmedWeapon]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[weaponid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerWeaponData]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[slot]],
        Type = [[int]]},
       {Name = [[weapons]],
        Type = [[int&]]},
       {Name = [[ammo]],
        Type = [[int&]]}}};

   {Name       = [[GivePlayerMoney]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[money]],
        Type = [[int]]}}};

   {Name       = [[ResetPlayerMoney]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerName]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[name]],
        Type = [[const char*]]}}};

   {Name       = [[GetPlayerMoney]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerState]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerIp]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[name]],
        Type = [[char*]],
        OutStr = [[len]]},
       {Name = [[len]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerPing]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerWeapon]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerKeys]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[keys]],
        Type = [[int&]]},
       {Name = [[updown]],
        Type = [[int&]]},
       {Name = [[leftright]],
        Type = [[int&]]}}};

   {Name       = [[GetPlayerName]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[name]],
        Type = [[char*]],
        OutStr = [[len]]},
       {Name = [[len]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerTime]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[hour]],
        Type = [[int]]},
       {Name = [[minute]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerTime]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[hour]],
        Type = [[int&]]},
       {Name = [[minute]],
        Type = [[int&]]}}};

   {Name       = [[TogglePlayerClock]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[toggle]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerWeather]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[weather]],
        Type = [[int]]}}};

   {Name       = [[ForceClassSelection]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerWantedLevel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[level]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerWantedLevel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerFightingStyle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[style]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerFightingStyle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerVelocity]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[GetPlayerVelocity]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[PlayCrimeReportForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[suspectid]],
        Type = [[int]]},
       {Name = [[crime]],
        Type = [[int]]}}};

   {Name       = [[PlayAudioStreamForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[url]],
        Type = [[const char*]]},
       {Name = [[posX]],
        Type = [[float]]},
       {Name = [[posY]],
        Type = [[float]]},
       {Name = [[posZ]],
        Type = [[float]]},
       {Name = [[distance]],
        Type = [[float]]},
       {Name = [[usepos]],
        Type = [[int]]}}};

   {Name       = [[StopAudioStreamForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerShopName]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[shopname]],
        Type = [[const char*]]}}};

   {Name       = [[SetPlayerSkillLevel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[skill]],
        Type = [[int]]},
       {Name = [[level]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerSurfingVehicleID]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerSurfingObjectID]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[RemoveBuildingForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[radius]],
        Type = [[float]]}}};

   {Name       = [[SetPlayerAttachedObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[index]],
        Type = [[int]]},
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[bone]],
        Type = [[int]]},
       {Name = [[fOffsetX]],
        Type = [[float]]},
       {Name = [[fOffsetY]],
        Type = [[float]]},
       {Name = [[fOffsetZ]],
        Type = [[float]]},
       {Name = [[frotX]],
        Type = [[float]]},
       {Name = [[frotY]],
        Type = [[float]]},
       {Name = [[frotZ]],
        Type = [[float]]},
       {Name = [[fScaleX]],
        Type = [[float]]},
       {Name = [[fScaleY]],
        Type = [[float]]},
       {Name = [[fScaleZ]],
        Type = [[float]]},
       {Name = [[materialcolor1]],
        Type = [[int]]},
       {Name = [[materialcolor2]],
        Type = [[int]]}}};

   {Name       = [[RemovePlayerAttachedObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[index]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerAttachedObjectSlotUsed]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[index]],
        Type = [[int]]}}};

   {Name       = [[EditAttachedObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[index]],
        Type = [[int]]}}};

   {Name       = [[CreatePlayerTextDraw]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[text]],
        Type = [[char*]]}}};

   {Name       = [[PlayerTextDrawDestroy]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawLetterSize]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]}}};

   {Name       = [[PlayerTextDrawTextSize]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]}}};

   {Name       = [[PlayerTextDrawAlignment]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[alignment]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawUseBox]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[use]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawBoxColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawSetShadow]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[size]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawSetOutline]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[size]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawBackgroundColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawFont]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[font]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawSetProportional]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[set]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawSetSelectable]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[set]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawShow]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawHide]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawSetString]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[string]],
        Type = [[char*]]}}};

   {Name       = [[PlayerTextDrawSetPreviewModel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[modelindex]],
        Type = [[int]]}}};

   {Name       = [[PlayerTextDrawSetPreviewRot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[fRotX]],
        Type = [[float]]},
       {Name = [[fRotY]],
        Type = [[float]]},
       {Name = [[fRotZ]],
        Type = [[float]]},
       {Name = [[fZoom]],
        Type = [[float]]}}};

   {Name       = [[PlayerTextDrawSetPreviewVehCol]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[textId]],
        Type = [[int]]},
       {Name = [[color1]],
        Type = [[int]]},
       {Name = [[color2]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerChatBubble]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[const char*]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[drawdistance]],
        Type = [[float]]},
       {Name = [[expiretime]],
        Type = [[int]]}}};

   {Name       = [[PutPlayerInVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[seatid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerVehicleID]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerVehicleSeat]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[RemovePlayerFromVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[TogglePlayerControllable]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[toggle]],
        Type = [[int]]}}};

   {Name       = [[PlayerPlaySound]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[soundid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[ApplyAnimation]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[animlib]],
        Type = [[const char*]]},
       {Name = [[animname]],
        Type = [[const char*]]},
       {Name = [[fDelta]],
        Type = [[float]]},
       {Name = [[loop]],
        Type = [[int]]},
       {Name = [[lockx]],
        Type = [[int]]},
       {Name = [[locky]],
        Type = [[int]]},
       {Name = [[freeze]],
        Type = [[int]]},
       {Name = [[time]],
        Type = [[int]]},
       {Name = [[forcesync]],
        Type = [[int]]}}};

   {Name       = [[ClearAnimations]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[forcesync]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerAnimationIndex]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetAnimationName]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[index]],
        Type = [[int]]},
       {Name = [[animlib]],
        Type = [[char*]],
        OutStr = [[len1]]},
       {Name = [[len1]],
        Type = [[int]]},
       {Name = [[animname]],
        Type = [[char*]],
        OutStr = [[len2]]},
       {Name = [[len2]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerSpecialAction]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerSpecialAction]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[actionid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerCheckpoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[size]],
        Type = [[float]]}}};

   {Name       = [[DisablePlayerCheckpoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerRaceCheckpoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[type]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[nextx]],
        Type = [[float]]},
       {Name = [[nexty]],
        Type = [[float]]},
       {Name = [[nextz]],
        Type = [[float]]},
       {Name = [[size]],
        Type = [[float]]}}};

   {Name       = [[DisablePlayerRaceCheckpoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerWorldBounds]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x_max]],
        Type = [[float]]},
       {Name = [[x_min]],
        Type = [[float]]},
       {Name = [[y_max]],
        Type = [[float]]},
       {Name = [[y_min]],
        Type = [[float]]}}};

   {Name       = [[SetPlayerMarkerForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[showplayerid]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[ShowPlayerNameTagForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[showplayerid]],
        Type = [[int]]},
       {Name = [[show]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerMapIcon]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[iconid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[markertype]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[style]],
        Type = [[int]]}}};

   {Name       = [[RemovePlayerMapIcon]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[iconid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerCameraPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[SetPlayerCameraLookAt]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[cut]],
        Type = [[int]]}}};

   {Name       = [[SetCameraBehindPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerCameraPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[GetPlayerCameraFrontVector]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[GetPlayerCameraMode]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[AttachCameraToObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objectid]],
        Type = [[int]]}}};

   {Name       = [[AttachCameraToPlayerObject]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[playerobjectid]],
        Type = [[int]]}}};

   {Name       = [[InterpolateCameraPos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[FromX]],
        Type = [[float]]},
       {Name = [[FromY]],
        Type = [[float]]},
       {Name = [[FromZ]],
        Type = [[float]]},
       {Name = [[ToX]],
        Type = [[float]]},
       {Name = [[ToY]],
        Type = [[float]]},
       {Name = [[ToZ]],
        Type = [[float]]},
       {Name = [[time]],
        Type = [[int]]},
       {Name = [[cut]],
        Type = [[int]]}}};

   {Name       = [[InterpolateCameraLookAt]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[FromX]],
        Type = [[float]]},
       {Name = [[FromY]],
        Type = [[float]]},
       {Name = [[FromZ]],
        Type = [[float]]},
       {Name = [[ToX]],
        Type = [[float]]},
       {Name = [[ToY]],
        Type = [[float]]},
       {Name = [[ToZ]],
        Type = [[float]]},
       {Name = [[time]],
        Type = [[int]]},
       {Name = [[cut]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerConnected]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerInVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerInAnyVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerInCheckpoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerInRaceCheckpoint]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SetPlayerVirtualWorld]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[worldid]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerVirtualWorld]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[EnableStuntBonusForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[enable]],
        Type = [[int]]}}};

   {Name       = [[EnableStuntBonusForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[enable]],
        Type = [[int]]}}};

   {Name       = [[TogglePlayerSpectating]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[toggle]],
        Type = [[int]]}}};

   {Name       = [[PlayerSpectatePlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[targetplayerid]],
        Type = [[int]]},
       {Name = [[mode]],
        Type = [[int]]}}};

   {Name       = [[PlayerSpectateVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[targetvehicleid]],
        Type = [[int]]},
       {Name = [[mode]],
        Type = [[int]]}}};

   {Name       = [[StartRecordingPlayerData]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[recordtype]],
        Type = [[int]]},
       {Name = [[recordname]],
        Type = [[const char*]]}}};

   {Name       = [[StopRecordingPlayerData]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SelectTextDraw]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[hovercolor]],
        Type = [[int]]}}};

   {Name       = [[CancelSelectTextDraw]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[SendClientMessage]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[message]],
        Type = [[const char*]]}}};

   {Name       = [[SendClientMessageToAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[message]],
        Type = [[const char*]]}}};

   {Name       = [[SendPlayerMessageToPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[senderid]],
        Type = [[int]]},
       {Name = [[message]],
        Type = [[const char*]]}}};

   {Name       = [[SendPlayerMessageToAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[senderid]],
        Type = [[int]]},
       {Name = [[message]],
        Type = [[const char*]]}}};

   {Name       = [[SendDeathMessage]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[killer]],
        Type = [[int]]},
       {Name = [[victim]],
        Type = [[int]]},
       {Name = [[weapon]],
        Type = [[int]]}}};

   {Name       = [[GameTextForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[string]],
        Type = [[const char*]]},
       {Name = [[time]],
        Type = [[int]]},
       {Name = [[style]],
        Type = [[int]]}}};

   {Name       = [[GameTextForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[string]],
        Type = [[const char*]]},
       {Name = [[time]],
        Type = [[int]]},
       {Name = [[style]],
        Type = [[int]]}}};

   {Name       = [[SetTimer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[timerIndex]],
        Type = [[int]]},
       {Name = [[interval]],
        Type = [[int]]},
       {Name = [[repeating]],
        Type = [[int]]}}};

   {Name       = [[KillTimer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[timerid]],
        Type = [[int]]}}};

   {Name       = [[GetMaxPlayers]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[SetGameModeText]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[const char*]]}}};

   {Name       = [[SetTeamCount]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[count]],
        Type = [[int]]}}};

   {Name       = [[AddPlayerClass]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[z_angle]],
        Type = [[float]]},
       {Name = [[weapon1id]],
        Type = [[int]]},
       {Name = [[weapon1ammo]],
        Type = [[int]]},
       {Name = [[weapon2id]],
        Type = [[int]]},
       {Name = [[weapon2ammo]],
        Type = [[int]]},
       {Name = [[weapon3id]],
        Type = [[int]]},
       {Name = [[weapon3ammo]],
        Type = [[int]]}}};

   {Name       = [[AddPlayerClassEx]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[teamid]],
        Type = [[int]]},
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[z_angle]],
        Type = [[float]]},
       {Name = [[weapon1id]],
        Type = [[int]]},
       {Name = [[weapon1ammo]],
        Type = [[int]]},
       {Name = [[weapon2id]],
        Type = [[int]]},
       {Name = [[weapon2ammo]],
        Type = [[int]]},
       {Name = [[weapon3id]],
        Type = [[int]]},
       {Name = [[weapon3ammo]],
        Type = [[int]]}}};

   {Name       = [[AddStaticVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[spawn_x]],
        Type = [[float]]},
       {Name = [[spawn_y]],
        Type = [[float]]},
       {Name = [[spawn_z]],
        Type = [[float]]},
       {Name = [[z_angle]],
        Type = [[float]]},
       {Name = [[color1]],
        Type = [[int]]},
       {Name = [[color2]],
        Type = [[int]]}}};

   {Name       = [[AddStaticVehicleEx]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[modelid]],
        Type = [[int]]},
       {Name = [[spawn_x]],
        Type = [[float]]},
       {Name = [[spawn_y]],
        Type = [[float]]},
       {Name = [[spawn_z]],
        Type = [[float]]},
       {Name = [[z_angle]],
        Type = [[float]]},
       {Name = [[color1]],
        Type = [[int]]},
       {Name = [[color2]],
        Type = [[int]]},
       {Name = [[respawn_delay]],
        Type = [[int]]}}};

   {Name       = [[AddStaticPickup]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[model]],
        Type = [[int]]},
       {Name = [[type]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[virtualworld]],
        Type = [[int]]}}};

   {Name       = [[CreatePickup]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[model]],
        Type = [[int]]},
       {Name = [[type]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[virtualworld]],
        Type = [[int]]}}};

   {Name       = [[DestroyPickup]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[pickup]],
        Type = [[int]]}}};

   {Name       = [[ShowNameTags]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[show]],
        Type = [[int]]}}};

   {Name       = [[ShowPlayerMarkers]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[show]],
        Type = [[int]]}}};

   {Name       = [[GameModeExit]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[SetWorldTime]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[hour]],
        Type = [[int]]}}};

   {Name       = [[GetWeaponName]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[weaponid]],
        Type = [[int]]},
       {Name = [[weapon]],
        Type = [[char*]],
        OutStr = [[len]]},
       {Name = [[len]],
        Type = [[int]]}}};

   {Name       = [[EnableTirePopping]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[enable]],
        Type = [[int]]}}};

   {Name       = [[EnableVehicleFriendlyFire]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[AllowInteriorWeapons]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[allow]],
        Type = [[int]]}}};

   {Name       = [[SetWeather]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[weatherid]],
        Type = [[int]]}}};

   {Name       = [[SetGravity]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[gravity]],
        Type = [[float]]}}};

   {Name       = [[SetDeathDropAmount]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[amount]],
        Type = [[int]]}}};

   {Name       = [[CreateExplosion]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[type]],
        Type = [[int]]},
       {Name = [[Radius]],
        Type = [[float]]}}};

   {Name       = [[EnableZoneNames]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[enable]],
        Type = [[int]]}}};

   {Name       = [[UsePlayerPedAnims]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[DisableInteriorEnterExits]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[SetNameTagDrawDistance]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[distance]],
        Type = [[float]]}}};

   {Name       = [[DisableNameTagLOS]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[LimitGlobalChatRadius]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[chat_radius]],
        Type = [[float]]}}};

   {Name       = [[LimitPlayerMarkerRadius]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[marker_radius]],
        Type = [[float]]}}};

   {Name       = [[ConnectNPC]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[name]],
        Type = [[const char*]]},
       {Name = [[script]],
        Type = [[const char*]]}}};

   {Name       = [[IsPlayerNPC]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[IsPlayerAdmin]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[Kick]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[Ban]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[BanEx]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[reason]],
        Type = [[const char*]]}}};

   {Name       = [[SendRconCommand]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[cmd]],
        Type = [[const char*]]}}};

   {Name       = [[GetServerVarAsString]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[varname]],
        Type = [[const char*]]},
       {Name = [[buffer]],
        Type = [[char*]],
        OutStr = [[len]]},
       {Name = [[len]],
        Type = [[int]]}}};

   {Name       = [[GetServerVarAsInt]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[varname]],
        Type = [[const char*]]}}};

   {Name       = [[GetServerVarAsBool]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[varname]],
        Type = [[const char*]]}}};

   {Name       = [[GetPlayerNetworkStats]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[retstr]],
        Type = [[char*]],
        OutStr = [[retstr_size]]},
       {Name = [[retstr_size]],
        Type = [[int]]}}};

   {Name       = [[GetNetworkStats]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[retstr]],
        Type = [[char*]],
        OutStr = [[retstr_size]]},
       {Name = [[retstr_size]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerVersion]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[version]],
        Type = [[char*]],
        OutStr = [[len]]},
       {Name = [[len]],
        Type = [[int]]}}};

   {Name       = [[CreateMenu]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[title]],
        Type = [[const char*]]},
       {Name = [[columns]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[col1width]],
        Type = [[float]]},
       {Name = [[col2width]],
        Type = [[float]]}}};

   {Name       = [[DestroyMenu]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]}}};

   {Name       = [[AddMenuItem]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]},
       {Name = [[column]],
        Type = [[int]]},
       {Name = [[menutext]],
        Type = [[const char*]]}}};

   {Name       = [[SetMenuColumnHeader]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]},
       {Name = [[column]],
        Type = [[int]]},
       {Name = [[columnheader]],
        Type = [[const char*]]}}};

   {Name       = [[ShowMenuForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]},
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[HideMenuForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]},
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[IsValidMenu]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]}}};

   {Name       = [[DisableMenu]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]}}};

   {Name       = [[DisableMenuRow]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[menuid]],
        Type = [[int]]},
       {Name = [[row]],
        Type = [[int]]}}};

   {Name       = [[GetPlayerMenu]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]}}};

   {Name       = [[TextDrawCreate]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[text]],
        Type = [[const char*]]}}};

   {Name       = [[TextDrawDestroy]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]}}};

   {Name       = [[TextDrawLetterSize]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]}}};

   {Name       = [[TextDrawTextSize]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]}}};

   {Name       = [[TextDrawAlignment]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[alignment]],
        Type = [[int]]}}};

   {Name       = [[TextDrawColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[TextDrawUseBox]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[use]],
        Type = [[int]]}}};

   {Name       = [[TextDrawBoxColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[TextDrawSetShadow]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[size]],
        Type = [[int]]}}};

   {Name       = [[TextDrawSetOutline]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[size]],
        Type = [[int]]}}};

   {Name       = [[TextDrawBackgroundColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[TextDrawFont]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[font]],
        Type = [[int]]}}};

   {Name       = [[TextDrawSetProportional]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[set]],
        Type = [[int]]}}};

   {Name       = [[TextDrawSetSelectable]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[textid]],
        Type = [[int]]},
       {Name = [[set]],
        Type = [[int]]}}};

   {Name       = [[TextDrawShowForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[int]]}}};

   {Name       = [[TextDrawHideForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[int]]}}};

   {Name       = [[TextDrawShowForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]}}};

   {Name       = [[TextDrawHideForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]}}};

   {Name       = [[TextDrawSetString]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[int]]},
       {Name = [[string]],
        Type = [[const char*]]}}};

   {Name       = [[TextDrawSetPreviewModel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[textid]],
        Type = [[int]]},
       {Name = [[modelindex]],
        Type = [[int]]}}};

   {Name       = [[TextDrawSetPreviewRot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[textid]],
        Type = [[int]]},
       {Name = [[fRotX]],
        Type = [[float]]},
       {Name = [[fRotY]],
        Type = [[float]]},
       {Name = [[fRotZ]],
        Type = [[float]]},
       {Name = [[fZoom]],
        Type = [[float]]}}};

   {Name       = [[TextDrawSetPreviewVehCol]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[textid]],
        Type = [[int]]},
       {Name = [[color1]],
        Type = [[int]]},
       {Name = [[color2]],
        Type = [[int]]}}};

   {Name       = [[GangZoneCreate]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[minx]],
        Type = [[float]]},
       {Name = [[miny]],
        Type = [[float]]},
       {Name = [[maxx]],
        Type = [[float]]},
       {Name = [[maxy]],
        Type = [[float]]}}};

   {Name       = [[GangZoneDestroy]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[zone]],
        Type = [[int]]}}};

   {Name       = [[GangZoneShowForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[zone]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[GangZoneShowForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[zone]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]}}};

   {Name       = [[GangZoneHideForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[zone]],
        Type = [[int]]}}};

   {Name       = [[GangZoneHideForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[zone]],
        Type = [[int]]}}};

   {Name       = [[GangZoneFlashForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[zone]],
        Type = [[int]]},
       {Name = [[flashcolor]],
        Type = [[int]]}}};

   {Name       = [[GangZoneFlashForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[zone]],
        Type = [[int]]},
       {Name = [[flashcolor]],
        Type = [[int]]}}};

   {Name       = [[GangZoneStopFlashForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[zone]],
        Type = [[int]]}}};

   {Name       = [[GangZoneStopFlashForAll]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[zone]],
        Type = [[int]]}}};

   {Name       = [[Create3DTextLabel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[text]],
        Type = [[const char*]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[DrawDistance]],
        Type = [[float]]},
       {Name = [[virtualworld]],
        Type = [[int]]},
       {Name = [[testLOS]],
        Type = [[int]]}}};

   {Name       = [[Delete3DTextLabel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[id]],
        Type = [[int]]}}};

   {Name       = [[Attach3DTextLabelToPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[id]],
        Type = [[int]]},
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[OffsetX]],
        Type = [[float]]},
       {Name = [[OffsetY]],
        Type = [[float]]},
       {Name = [[OffsetZ]],
        Type = [[float]]}}};

   {Name       = [[Attach3DTextLabelToVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[id]],
        Type = [[int]]},
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[OffsetX]],
        Type = [[float]]},
       {Name = [[OffsetY]],
        Type = [[float]]},
       {Name = [[OffsetZ]],
        Type = [[float]]}}};

   {Name       = [[Update3DTextLabelText]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[id]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[const char*]]}}};

   {Name       = [[CreatePlayer3DTextLabel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[const char*]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[DrawDistance]],
        Type = [[float]]},
       {Name = [[attachedplayer]],
        Type = [[int]]},
       {Name = [[attachedvehicle]],
        Type = [[int]]},
       {Name = [[testLOS]],
        Type = [[int]]}}};

   {Name       = [[DeletePlayer3DTextLabel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[id]],
        Type = [[int]]}}};

   {Name       = [[UpdatePlayer3DTextLabelText]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[id]],
        Type = [[int]]},
       {Name = [[color]],
        Type = [[int]]},
       {Name = [[text]],
        Type = [[const char*]]}}};

   {Name       = [[ShowPlayerDialog]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[dialogid]],
        Type = [[int]]},
       {Name = [[style]],
        Type = [[int]]},
       {Name = [[caption]],
        Type = [[const char*]]},
       {Name = [[info]],
        Type = [[const char*]]},
       {Name = [[button1]],
        Type = [[const char*]]},
       {Name = [[button2]],
        Type = [[const char*]]}}};

   {Name       = [[CreateVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicletype]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]},
       {Name = [[rotation]],
        Type = [[float]]},
       {Name = [[color1]],
        Type = [[int]]},
       {Name = [[color2]],
        Type = [[int]]},
       {Name = [[respawn_delay]],
        Type = [[int]]}}};

   {Name       = [[DestroyVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[IsVehicleStreamedIn]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[forplayerid]],
        Type = [[int]]}}};

   {Name       = [[GetVehiclePos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetVehiclePos]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[GetVehicleZAngle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[z_angle]],
        Type = [[float&]]}}};

   {Name       = [[GetVehicleRotationQuat]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[w]],
        Type = [[float&]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetVehicleZAngle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[z_angle]],
        Type = [[float]]}}};

   {Name       = [[SetVehicleParamsForPlayer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[playerid]],
        Type = [[int]]},
       {Name = [[objective]],
        Type = [[int]]},
       {Name = [[doorslocked]],
        Type = [[int]]}}};

   {Name       = [[ManualVehicleEngineAndLights]];
    ReturnType = [[int]];
    Arguments  = {
}};

   {Name       = [[SetVehicleParamsEx]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[engine]],
        Type = [[int]]},
       {Name = [[lights]],
        Type = [[int]]},
       {Name = [[alarm]],
        Type = [[int]]},
       {Name = [[doors]],
        Type = [[int]]},
       {Name = [[bonnet]],
        Type = [[int]]},
       {Name = [[boot]],
        Type = [[int]]},
       {Name = [[objective]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleParamsEx]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[engine]],
        Type = [[int&]]},
       {Name = [[lights]],
        Type = [[int&]]},
       {Name = [[alarm]],
        Type = [[int&]]},
       {Name = [[doors]],
        Type = [[int&]]},
       {Name = [[bonnet]],
        Type = [[int&]]},
       {Name = [[boot]],
        Type = [[int&]]},
       {Name = [[objective]],
        Type = [[int&]]}}};

   {Name       = [[SetVehicleToRespawn]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[LinkVehicleToInterior]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[interiorid]],
        Type = [[int]]}}};

   {Name       = [[AddVehicleComponent]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[componentid]],
        Type = [[int]]}}};

   {Name       = [[RemoveVehicleComponent]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[componentid]],
        Type = [[int]]}}};

   {Name       = [[ChangeVehicleColor]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[color1]],
        Type = [[int]]},
       {Name = [[color2]],
        Type = [[int]]}}};

   {Name       = [[ChangeVehiclePaintjob]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[paintjobid]],
        Type = [[int]]}}};

   {Name       = [[SetVehicleHealth]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[health]],
        Type = [[float]]}}};

   {Name       = [[GetVehicleHealth]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[health]],
        Type = [[float&]]}}};

   {Name       = [[AttachTrailerToVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[trailerid]],
        Type = [[int]]},
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[DetachTrailerFromVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[IsTrailerAttachedToVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleTrailer]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[SetVehicleNumberPlate]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[numberplate]],
        Type = [[const char*]]}}};

   {Name       = [[GetVehicleModel]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleComponentInSlot]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[slot]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleComponentType]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[component]],
        Type = [[int]]}}};

   {Name       = [[RepairVehicle]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleVelocity]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetVehicleVelocity]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[SetVehicleAngularVelocity]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float]]},
       {Name = [[y]],
        Type = [[float]]},
       {Name = [[z]],
        Type = [[float]]}}};

   {Name       = [[GetVehicleDamageStatus]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[panels]],
        Type = [[int&]]},
       {Name = [[doors]],
        Type = [[int&]]},
       {Name = [[lights]],
        Type = [[int&]]},
       {Name = [[tires]],
        Type = [[int&]]}}};

   {Name       = [[UpdateVehicleDamageStatus]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[panels]],
        Type = [[int]]},
       {Name = [[doors]],
        Type = [[int]]},
       {Name = [[lights]],
        Type = [[int]]},
       {Name = [[tires]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleModelInfo]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehiclemodel]],
        Type = [[int]]},
       {Name = [[infotype]],
        Type = [[int]]},
       {Name = [[x]],
        Type = [[float&]]},
       {Name = [[y]],
        Type = [[float&]]},
       {Name = [[z]],
        Type = [[float&]]}}};

   {Name       = [[SetVehicleVirtualWorld]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]},
       {Name = [[worldid]],
        Type = [[int]]}}};

   {Name       = [[GetVehicleVirtualWorld]];
    ReturnType = [[int]];
    Arguments  = {
       {Name = [[vehicleid]],
        Type = [[int]]}}};

}

for _, Func in ipairs(AMX_Function_Declarations) do
    AMX_Function_Declarations[Func.Name] = Func
    for _, Arg in ipairs(Func.Arguments) do
        Func.Arguments[Arg.Name] = Arg
    end
end