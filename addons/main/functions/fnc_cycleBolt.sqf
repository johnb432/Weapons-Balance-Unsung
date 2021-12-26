#include "script_component.hpp"
/*
 * Authors: unknown (Unsung Mod) & johnb43
 * Plays sounds and animations for bolt action weapons.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 * 2: Muzzle <STRING>
 *
 * Return Value:
 * Nothing
 *
 * Public: No
 */

params ["_unit", "_weapon", "_muzzle"];

if ((_unit ammo _weapon) isEqualTo 0) exitWith {};

private _config = configfile >> "CfgWeapons" >> _weapon;
private _action = getText (_config >> "WB_reboltAction");
private _actionDelay = getNumber (_config >> "WB_reboltActionDelay");
private _sound = getText (_config >> "WB_reboltSound");
private _distance = getNumber (_config >> "WB_reboltSoundDistance");
private _soundDelay = getNumber (_config >> "WB_reboltSoundDelay");
private _soundOffsetDelay = getNumber (_config >> "WB_reboltSoundOffsetDelay");

// This is to prevent a weird sound bug that is played whenever you play a sound for the first time
if !(_sound in GVAR(soundCache)) then {
    // Play sound somewhere far away (hopefully)
    private _helper = "#particlesource" createVehicleLocal [1, 1, 1];

    _helper say3D [_sound, 1, 2, false, 0];

    [{
        deleteVehicle _this;
    }, _helper, 6] call CBA_fnc_waitAndExecute;

    GVAR(soundCache) pushBack _sound;
};

[
    // Wait until player has stopped pressed the left mouse button
    {
        params ["_unit", "_muzzle"];

        _unit setWeaponReloadingTime [_unit, _muzzle, 1];

        (inputAction "DefaultAction") isEqualTo 0;
    }, {
        params ["_unit", "", "_action", "_actionDelay", "_sound", "_distance", "_soundDelay", "_soundOffsetDelay"];

        // Play animation
        [{
            (_this select 0) playAction (_this select 1);
        }, [_unit, _action], _actionDelay] call CBA_fnc_waitAndExecute;

        // If player is himself and in first person, play sound normally
        if (((call CBA_fnc_currentUnit) isEqualTo _unit) && {cameraView isNotEqualTo "EXTERNAL"}) then {
            [{
                // say3D follows the unit if moving
                (_this select 0) say3D [_this select 1, _this select 2, 1, false, _this select 3];
            }, [_unit, _sound, _distance, _soundOffsetDelay], _soundDelay] call CBA_fnc_waitAndExecute;
        } else {
            // Otherwise make a helper to play sound near unit, if player is within distance of shot
            if (((positionCameraToWorld [0, 0, 0]) distance _unit) <= _distance) then {
                private _helper = "#particlesource" createVehicleLocal (ASLtoATL (eyePos _unit));

                [{
                    (_this select 0) say3D [_this select 1, _this select 2, 1, false, _this select 3];

                    [{
                        deleteVehicle _this;
                    }, _this select 0, 6] call CBA_fnc_waitAndExecute;
                }, [_helper, _sound, _distance, _soundOffsetDelay], _soundDelay] call CBA_fnc_waitAndExecute;
            };
        };
    },
[_unit, _muzzle, _action, _actionDelay, _sound, _distance, _soundDelay, _soundOffsetDelay]] call CBA_fnc_waitUntilAndExecute;
