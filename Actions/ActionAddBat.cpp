#include "ActionAddBat.h"
#include "..\ApplicationManager.h"

ActionAddBat::ActionAddBat(ApplicationManager* pApp) :Action(pApp)
{
}

ActionAddBat::~ActionAddBat(void)
{
}

void ActionAddBat::Execute()
{

	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("Adding a new Battery: Click anywhere to add");

	//Get Center point of the area where the Comp should be drawn
	pUI->GetPointClicked(Cx, Cy);

	//Clear Status Bar
	pUI->ClearStatusBar();


	GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the Comp

	//Calculate the rectangle Corners
	int compWidth = pUI->getCompWidth();
	int compHeight = pUI->getCompHeight();

	pGInfo->PointsList[0].x = Cx - compWidth / 2;
	pGInfo->PointsList[0].y = Cy - compHeight / 2;
	pGInfo->PointsList[1].x = Cx + compWidth / 2;
	pGInfo->PointsList[1].y = Cy + compHeight / 2;

	Battery* pB = new Battery(pGInfo);
	pB->x1 = pGInfo->PointsList[0].x;
	pB->x2 = pGInfo->PointsList[1].x;
	pB->y1 = pGInfo->PointsList[0].y;
	pB->y2 = pGInfo->PointsList[1].y;
	pManager->AddComponent(pB);
}

void ActionAddBat::Undo()
{}

void ActionAddBat::Redo()
{}

