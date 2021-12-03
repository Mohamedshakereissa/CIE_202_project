#pragma once
#include "action.h"
#include "../Components/Component.h"


//Class responsible for adding a new resistor action
class Select : public Action
{
private:
	//Parameters for rectangular area to be occupied by the comp
	int Cx, Cy;	//Center point of the comp
public:
	Select(ApplicationManager* pApp);
	virtual ~Select(void);

	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};
