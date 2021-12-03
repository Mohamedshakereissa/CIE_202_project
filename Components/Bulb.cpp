#include "Bulb.h"

Bulb::Bulb(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{
	type = bbulb;
}

void Bulb::Draw(UI* pUI)
{
	//Call output class and pass Bulb drawing info to it.
	pUI->DrawBulb(*m_pGfxInfo); //update to draw Bulb
}

void Bulb::Operate()
{

}