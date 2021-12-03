#pragma once
#include "Component.h"

class Switch :public Component
{
protected: bool ON;
public:
	Switch(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the Switch
	componenttype a = sswitch;
};
