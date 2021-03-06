#pragma once
#include "Component.h"

class Resistor:public Component
{
protected: int R;
public:
	Resistor(GraphicsInfo *r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
	componenttype a = rresistor;
};
