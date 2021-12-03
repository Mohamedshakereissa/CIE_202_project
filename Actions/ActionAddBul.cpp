#include "ActionAddBul.h"
#include "..\ApplicationManager.h"

ActionAddBul::ActionAddBul(ApplicationManager *pApp):Action(pApp)
{
}

ActionAddBul::~ActionAddBul(void)
{
}

void ActionAddBul::Execute()
{
	
	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("Adding a new Bulb: Click anywhere to add");

	//Get Center point of the area where the Comp should be drawn
	pUI->GetPointClicked(Cx, Cy);

	//Clear Status Bar
	pUI->ClearStatusBar();	
	
	
	GraphicsInfo * pGInfo= new GraphicsInfo(2); //Gfx info to be used to construct the Comp
	
	//Calculate the rectangle Corners
	int compWidth = pUI->getCompWidth();
	int compHeight = pUI->getCompHeight();

	pGInfo->PointsList[0].x = Cx - compWidth/2;
	pGInfo->PointsList[0].y = Cy - compHeight/2;
	pGInfo->PointsList[1].x = Cx + compWidth/2;
	pGInfo->PointsList[1].y = Cy + compHeight/2;
	
	Bulb* pBu = new Bulb(pGInfo);
	pBu->x1 = pGInfo->PointsList[0].x;
	pBu->x2 = pGInfo->PointsList[1].x;
	pBu->y1 = pGInfo->PointsList[0].y;
	pBu->y2 = pGInfo->PointsList[1].y;
	pManager->AddComponent(pBu);
}

void ActionAddBul::Undo()
{}

void ActionAddBul::Redo()
{}

