#include "..\ApplicationManager.h"
#include "Select.h"

Select::Select(ApplicationManager* pApp) :Action(pApp)
{
}

Select::~Select(void)
{
}

void Select::Execute()
{

	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Get Center point of the area where the Comp should be drawn
	pUI->GetPointClicked(Cx, Cy);
	Component*& List = pManager->GetList();
		for (int i = 0; i < pManager->GetCount(); i++) {
			const GraphicsInfo* Ginf = List[i].getGinfo();
			
			if (List[i].x1 < Cx && List[i].x2 > Cx && List[i].y1 < Cy && List[i].y2 > Cy) {
				switch (List[i].type) {
				case rresistor: pUI->DrawResistor(*Ginf, true);
					break;
				case bbattery: pUI->DrawBattery(*Ginf, true);
					break;
				case bbulb: pUI->DrawBulb(*Ginf, true);
					break;
				case bbuzzer: pUI->DrawBuzzer(*Ginf, true);
					break;
				case sswitch: pUI->DrawSwitch(*Ginf, true);
					break;
				case ffuse: pUI->DrawFuse(*Ginf, true);
					break;
				case gground: pUI->DrawGround(*Ginf, true);
					break;
				}

			}
		}
	}


void Select::Undo()
{}

void Select::Redo()
{}
