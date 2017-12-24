# Extra-Rc
Extra Right Click Options for Dayz Epoch 1.0.6.2.

Credit to maca134 for the original version of this mod.

I primarily uploading this mod for use with WAI, but it can be configured to use right click actions on any item in your inventory. An example of the configuration is provided in extra_rc.hpp.


### Installation Instructions

1. Click ***[Clone or Download (Green Button)](https://github.com/worldwidesorrow/Extra-Rc/archive/master.zip)*** on the right side of this Github page.

2. Extract the downloaded folder and open it
3. Go to your mission pbo and unpack it.
4. Copy the ***day_code*** folder into your mission folder or merge the files into the existing directories if you have other mods installed which use the same folders and files.

***Note:*** all files required for this mod are provided as examples in case you want to use diffmerge to merge the changes into your existing files. Some of the instructions below may already be completed if you are using other mods which apply the same changes.

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
  
7. Repack your mission pbo.
