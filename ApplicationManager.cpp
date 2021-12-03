#include "ApplicationManager.h"
#include "Actions\ActionAddRes.h"
#include "Actions\ActionAddBat.h"
#include "Actions\ActionAddBul.h"
#include "Actions\ActionAddGro.h"
#include "Actions\ActionAddFus.h"
#include "Actions\ActionAddBuz.h"
#include "Actions\ActionAddSwi.h"
#include "Actions/Select.h"








ApplicationManager::ApplicationManager()
{
	CompCount = 0;

	for(int i=0; i<MaxCompCount; i++)
		CompList[i] = nullptr;

	//Creates the UI Object & Initialize the UI
	pUI = new UI;
}
////////////////////////////////////////////////////////////////////
void ApplicationManager::AddComponent(Component* pComp)
{
	CompList[CompCount++] = pComp;		
}
////////////////////////////////////////////////////////////////////
Component*& ApplicationManager::GetList() {
	return *CompList;
}
int ApplicationManager::GetCount() {
	return CompCount;
}


ActionType ApplicationManager::GetUserAction()
{
	//Call input to get what action is reuired from the user
	return pUI->GetUserAction(); 	
}
////////////////////////////////////////////////////////////////////

void ApplicationManager::ExecuteAction(ActionType ActType)
{
	Action* pAct = nullptr;
	switch (ActType)
	{
		case ADD_RESISTOR:
			pAct= new ActionAddRes(this);
			break;

		case ADD_BATTERY:
			pAct = new ActionAddBat(this);
			break;

		case ADD_GROUND:
			pAct = new ActionAddGro(this);
			break;

		case ADD_BULB:
			pAct = new ActionAddBul(this);
			break;

		case ADD_FUSE:
			pAct = new ActionAddFus(this);
			break;

		case ADD_BUZZER:
			pAct = new ActionAddBuz(this);
			break;

		case ADD_SWITCH:
			pAct = new ActionAddSwi(this);
			break;

		case ADD_CONNECTION:
			//TODO: Create AddConection Action here
			break;
	
		case SELECT:
			pAct = new Select(this);
			break;

		case EXIT:
			///TODO: create ExitAction here
			break;
	}
	if(pAct)
	{
		pAct->Execute();
		delete pAct;
		pAct = nullptr;
	}
}
////////////////////////////////////////////////////////////////////

void ApplicationManager::UpdateInterface()
{
		for(int i=0; i<CompCount; i++)
			CompList[i]->Draw(pUI);

}

////////////////////////////////////////////////////////////////////
UI* ApplicationManager::GetUI()
{
	return pUI;
}

////////////////////////////////////////////////////////////////////

ApplicationManager::~ApplicationManager()
{
	for(int i=0; i<CompCount; i++)
		delete CompList[i];
	delete pUI;
	
}