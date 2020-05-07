private ["_spawnLocations"];

spawnLocations = 
[
	[6207, 7759], // Stary Sobor
	[11950, 9104], // Berezino
	[6434, 2746], // Chernogorsk
	[2768, 5346],  // Zelenogorsk
	[2746, 10001], // Lopatino
	[11069, 12348] // Krasnostav
];

fnc_spawnVeins = {
	params["_bestPosition"];
	private _veinPosition = _bestPosition select 0;
	private _pos = [(_veinPosition select 0) + (random 500), (_veinPosition select 1) + (random 500)];
	private _pos2 = [(_veinPosition select 0) - (random 500), (_veinPosition select 1) - (random 500)];

	_spawnveh = "Land_cvp_rock";

	_veh = _spawnveh createVehicle [0,0,0];
	_veh enableSimulation false;
	_veh setDir round(random 360);
	_veh setPos _pos;
	
	_veh addMPEventHandler ["mpkilled", {
	killed = _this select 0;
	killer = _this select 1;

	killedpos = position killed;

	oreCount = random(15);
	oreSpawn = round(oreCount);

	_rockOre =  createVehicle ["WeaponHolderSimulated", [((killedpos select 0) + 2), ((killedpos select 1) + 2), 0], [], 0, "CAN_COLLIDE"];
	_rockOre  addItemCargo ["cvp_IronOre", round(random(12))];
	_rockOre1 = createVehicle ["WeaponHolderSimulated", [((killedpos select 0) - 2), ((killedpos select 1) - 2), 0], [], 0, "CAN_COLLIDE"];
	_rockOre1 addItemCargo ["cvp_IronOre", round(random(12))];
	uiSleep 30;
	deleteVehicle killed;
	}];

	_veh2 = _spawnveh createVehicle [0,0,0];
	_veh2 enableSimulation false;
	_veh2 setDir round(random 360);
	_veh2 setPos _pos2;
	
	_veh2 addMPEventHandler ["mpkilled", {
	killed = _this select 0;
	killer = _this select 1;

	killedpos = position killed;

	oreCount = random(15);
	oreSpawn = round(oreCount);

	_rockOre =  createVehicle ["WeaponHolderSimulated", [((killedpos select 0) + 2), ((killedpos select 1) + 2), 0], [], 0, "CAN_COLLIDE"];
	_rockOre  addItemCargo ["cvp_IronOre", round(random(12))];
	_rockOre1 = createVehicle ["WeaponHolderSimulated", [((killedpos select 0) - 2), ((killedpos select 1) - 2), 0], [], 0, "CAN_COLLIDE"];
	_rockOre1 addItemCargo ["cvp_IronOre", round(random(12))];

	uiSleep 30;

	deleteVehicle killed;
	}];

	[_pos] spawn fnc_spawnVeinMarkers;
};

fnc_spawnVeinMarkers = {
	params["_pos", "_pos2"];
	private _markerNum = random 50;
	_veinMarker = createMarker [format["Vein %1", _markerNum], _pos];
	_veinMarker setMarkerColor "ColorOrange";
	_veinMarker setMarkerAlpha 1;
	_veinMarker setMarkerText format["Vein %1", _markerNum];
	_veinMarker setMarkerType "loc_Rock";
	_veinMarker setMarkerBrush "Vertical";
	_veinMarker setMarkerSize [(1), (1)];

	_veinMarker2 = createMarker [format["Vein %1", _markerNum], _pos];
	_veinMarker2 setMarkerColor "ColorOrange";
	_veinMarker2 setMarkerAlpha 1;
	_veinMarker2 setMarkerText format["Vein %1", _markerNum];
	_veinMarker2 setMarkerType "loc_Rock";
	_veinMarker2 setMarkerBrush "Vertical";
	_veinMarker2 setMarkerSize [(1), (1)];
};

{
	_location = spawnLocations select _forEachIndex;
	_selectBest = selectBestPlaces [_location, 500, "(1 + forest) * (1 + hills) * (1 - houses) * (1 - sea)", 10, 25];
	_bestPosition = _selectBest select 1;

	[_bestPosition] spawn fnc_spawnVeins;

	sleep 1;
} forEach spawnLocations;