#pragma once
#include "Component.h"

class Bulb :public Component
{
protected: double IR;
public:
	Bulb(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the Bulb
	componenttype a = bbulb;

};
