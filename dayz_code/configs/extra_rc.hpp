class ExtraRc
{
	class Classname of Item/Weapon/Tool in inventory
	{
		class Name of the right click action (anything you want)
		{
			text = "Display name of action";
			script = "path to script to execute or code snippet to execute.";
        };
    };
};


/* Example used in WAI, everything goes between the open and close curly brackets of class ExtraRc

	class ItemRadio
	{
		class switchOnOff
		{
			text = "Power ON/OFF";
			script = "execVM 'scripts\radio\switch_on_off.sqf'";
        };
    };

*/
