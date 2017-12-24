# Extra-Rc
Extra Right Click Options for Dayz Epoch 1.0.6.2.

Credit to maca134 for the original version of this mod.


### Installation Instructions

1. Click ***[Download Zip](https://github.com/worldwidesorrow/Extra-Rc/archive/master.zip)*** on the right sidebar of this Github page.

2. Extract the downloaded folder and open it
3. Go to your mission pbo and unpack it.
4. Copy the ***day_code*** to your mission folder or merge the files into the existing directories if you have other mods         installed which use the same folders.

Note: all files required for this mod are provided as examples in case you want to use diffmerge to merge the changes into your existing files. If you are performing this addition to an already modded server, then follow the instructions below.

5. Open init.sqf

	Find this line:

	~~~~java
	call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";
	~~~~
	
	Add the following line below it:
	
	~~~~java
call compile preprocessFileLineNumbers "dayz_code\init\compiles.sqf";
	~~~~


6. Open description.ext

	Find this line:

	~~~~java
	#include "\z\addons\dayz_code\Configs\CfgServerTrader\CfgServerTrader.hpp"
	~~~~
	
	Add the following line below it:
	
	~~~~java
#include "dayz_code\configs\extra_rc.hpp"
	~~~~
  
##### Optional Radio messages
Note: These are on by default, change *wai_radio_announce* in config.sqf to *false* in order to disable them.

1. Go to your mission pbo and unpack it.
2. Open init.sqf

	Find:

	~~~~java
	//[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";	
	~~~~
	
	Add below:
	
	~~~~java
	_nil = [] execVM "custom\remote\remote.sqf";
	~~~~

3. Copy the ***remote*** folder into your custom folder, if you do not have this one yet simply create it.
4. If you want to be able to switch the radio on or off go to step 5 (note: right click by maca required), else go to step 6 and both remove switch_on_off.sqf and radio.ogg from the remote folder.
5. Open extra_hc.hpp

	Find:
	~~~~java
	class ExtraRc {
	~~~~

	Add below:
	~~~~java
		class ItemRadio {
			class switchOnOff {
				text = "Switch ON/OFF";
				script = "execVM 'custom\remote\switch_on_off.sqf'";
			};
		};
	~~~~

6. Open description.ext

	Find:
	~~~~
	#include "\z\addons\dayz_code\gui\description.hpp"
	~~~~

	Add above
	~~~~java
	class CfgSounds
	{
		sounds[] =
		{
			Radio_Message_Sound
		};
		class Radio_Message_Sound
		{
			name = "Radio_Message_Sound";
			sound[] = {custom\remote\radio.ogg,0.4,1};
			titles[] = {};
		};
	};
	~~~~
7. Repack your mission pbo.
