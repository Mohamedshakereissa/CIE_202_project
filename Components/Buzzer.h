#pragma once
#include "Component.h"

class Buzzer :public Component
{
protected: double IR;
public:
	Buzzer(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the Buzzer
	componenttype a = bbuzzer;

};
