#include "ActionAddGro.h"
#include "..\ApplicationManager.h"

ActionAddGro::ActionAddGro(ApplicationManager *pApp):Action(pApp)
{
}

ActionAddGro::~ActionAddGro(void)
{
}

void ActionAddGro::Execute()
{
	
	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("Adding a new ground: Click anywhere to add");

	//Get Center point of the area where the Comp should be drawn
	pUI->GetPointClicked(Cx, Cy);

	//Clear Status Bar
	pUI->ClearStatusBar();	
	
	
	GraphicsInfo * pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the Comp
	
	//Calculate the rectangle Corners
	int compWidth = pUI->getCompWidth();
	int compHeight = pUI->getCompHeight();

	pGInfo->PointsList[0].x = Cx - compWidth/2;
	pGInfo->PointsList[0].y = Cy - compHeight/2;
	pGInfo->PointsList[1].x = Cx + compWidth/2;
	pGInfo->PointsList[1].y = Cy + compHeight/2;
	 
	Ground* pG = new Ground(pGInfo);
	pG->x1 = pGInfo->PointsList[0].x;
	pG->x2 = pGInfo->PointsList[1].x;
	pG->y1 = pGInfo->PointsList[0].y;
	pG->y2 = pGInfo->PointsList[1].y;
	pManager->AddComponent(pG);
}

void ActionAddGro::Undo()
{}

void ActionAddGro::Redo()
{}

