#ifndef CONST_H
#define CONST_H

//This header file contains some defenitions to be used all over the application

//All possible actions
enum ActionType 
{
	ADD_RESISTOR,		//Add a resistor
	ADD_BATTERY,        //Add a Battery
	ADD_SWITCH,			//Add Switch
	ADD_BULB,			//Add bulb
	ADD_GROUND,         //Add ground
	ADD_FUSE,           //Add fuse
	ADD_BUZZER,         //Add buzzer
	ADD_CONNECTION,		//Add Wire Connection

	ADD_Label,			//Add Label to a Component, a Connection
	EDIT_Label,			//Edit Label of a Component, a Connection

	Change_Switch,		//Change Switch Status in Simulation Mode

	SELECT,		//Select a Component, a Connection
	DEL,		//Delete a Component, a Connection
	MOVE,		//Move a Component, a Connection

	SAVE,		//Save the whole Circuit to a file
	LOAD,		//Load a Circuit from a file

	UNDO,		//Undo the last Action preformed
	REDO,		//Redo the last Action canceled

	DSN_MODE,	//Switch to Design mode
	SIM_MODE,	//Switch to Simulatiom mode

	EXIT,		//Exit the application

	STATUS_BAR,		//A click on the status bar
	DSN_TOOL,	//A click on an empty place in the design tool bar

};

enum  MODE	//Modes of operation
{
	DESIGN,
	SIMULATION
};

//Maximum number of connections that can be connected to any output components
#define MAX_CONNS 20




#endif