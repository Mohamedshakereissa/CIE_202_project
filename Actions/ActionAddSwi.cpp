#include "ActionAddSwi.h"
#include "..\ApplicationManager.h"

ActionAddSwi::ActionAddSwi(ApplicationManager *pApp):Action(pApp)
{
}

ActionAddSwi::~ActionAddSwi(void)
{
}

void ActionAddSwi::Execute()
{
	
	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("Adding a new switch: Click anywhere to add");

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
	 
	Switch* pS = new Switch(pGInfo);
	pS->x1 = pGInfo->PointsList[0].x;
	pS->x2 = pGInfo->PointsList[1].x;
	pS->y1 = pGInfo->PointsList[0].y;
	pS->y2 = pGInfo->PointsList[1].y;
	pManager->AddComponent(pS);
}

void ActionAddSwi::Undo()
{}

void ActionAddSwi::Redo()
{}

