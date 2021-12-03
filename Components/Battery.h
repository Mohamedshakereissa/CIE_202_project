#pragma once
#include "Component.h"

class Battery :public Component
{
protected: double V;
public:
	Battery(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the battery

};
