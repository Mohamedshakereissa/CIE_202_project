#include "Ground.h"

Ground::Ground(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{
	type = gground;
}

void Ground::Draw(UI* pUI)
{
	//Call output class and pass Ground drawing info to it.
	pUI->DrawGround(*m_pGfxInfo); //update to draw Ground
}

void Ground::Operate()
{

}