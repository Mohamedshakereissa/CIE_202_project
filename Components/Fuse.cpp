#include "Fuse.h"

Fuse::Fuse(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{
	type = ffuse;
}

void Fuse::Draw(UI* pUI)
{
	//Call output class and pass Fuse drawing info to it.
	pUI->DrawFuse(*m_pGfxInfo); //update to draw Fuse
}

void Fuse::Operate()
{

}