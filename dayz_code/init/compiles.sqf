if (!isDedicated) then {
	diag_log "Loading custom client compiles";
	
	player_selectSlot = compile preprocessFileLineNumbers "dayz_code\compile\ui_selectSlot.sqf";
};