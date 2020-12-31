/*
*    Authors: unknown (Unsung Mod) & johnb43
*
*    params:
*    0: _unit (object)
*    1: _action: animation
*    2: _sound: sound from CfgSounds
*    3: _distance: how far away the sound can be heard
*    4: _soundDelay: how much time it takes for the animation to line up with the sound
*    5: _soundOffsetDelay: how much time it takes for the sound to reach the bolting noise
*
*    Example:
*    [(_this select 0), 'uns_ba_GestureReloadMosinBolt', 'uns_pa_shotgunfired'] call WB_fnc_pa_fired_fixed
*/

params ["_unit", "_weapon", "_muzzle"];

if (_unit ammo _weapon == 0) exitWith {};

private _action = getText(configfile >> "CfgWeapons" >> _weapon >> "WB_reboltAction");
private _actionDelay = getNumber(configfile >> "CfgWeapons" >> _weapon >> "WB_reboltActionDelay");
private _sound = getText(configfile >> "CfgWeapons" >> _weapon >> "WB_reboltSound");
private _distance = getNumber(configfile >> "CfgWeapons" >> _weapon >> "WB_reboltSoundDistance");
private _soundDelay = getNumber(configfile >> "CfgWeapons" >> _weapon >> "WB_reboltSoundDelay");
private _soundOffsetDelay = getNumber(configfile >> "CfgWeapons" >> _weapon >> "WB_reboltSoundOffsetDelay");

[
    {
        params ["_unit", "_action", "_actionDelay", "_sound", "_distance", "_soundDelay", "_soundOffsetDelay", "_muzzle"];

        _unit setWeaponReloadingTime [_unit, _muzzle, 1];
        (inputAction "DefaultAction" == 0)
    }, {
        params ["_unit", "_action", "_actionDelay", "_sound", "_distance", "_soundDelay", "_soundOffsetDelay", "_muzzle"];

        [{
            params ["_unit", "_action"];
            _unit playAction _action;
        }, [_unit, _action], _actionDelay] call CBA_fnc_waitAndExecute;

        if ((player == _unit) && (cameraView != "EXTERNAL")) then {
            [{
                params ["_unit", "_sound", "_distance", "_soundOffsetDelay"];
                _unit say3d [_sound, _distance, 1, false, _soundOffsetDelay];
             },
             [_unit, _sound, _distance, _soundOffsetDelay], _soundDelay] call CBA_fnc_waitAndExecute;
        } else {
            if (((positionCameraToWorld [0,0,0]) distance _unit) <= _distance) then {
                private _dummy  = "#particlesource" createVehicleLocal (ASLtoATL (eyePos _unit));

                [{
                    params ["_dummy", "_sound", "_distance", "_soundOffsetDelay"];
                    _dummy say3d [_sound, _distance, 1, false, _soundOffsetDelay];
                 },
                 [_dummy, _sound, _distance, _soundOffsetDelay], _soundDelay] call CBA_fnc_waitAndExecute;

                [{deleteVehicle _this;}, _dummy, 2.5] call CBA_fnc_waitAndExecute;
            };
        };
    },
[_unit, _action, _actionDelay, _sound, _distance, _soundDelay, _soundOffsetDelay, _muzzle]] call CBA_fnc_waitUntilAndExecute;
