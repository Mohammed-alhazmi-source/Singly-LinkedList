#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "Global.h"
#include "clsDisplay.h"

class clsUpdateScreen : protected clsScreen
{
private:
	static void _ExecuteUpdate()
	{
		string Value = "";
		string NewValue = "";
		char Answer = 'n';

		if (LinkedList.IsEmpty())
			clsUtil::PrintMessage("\t Singly Linked List Is Empty");

		else
		{
			do
			{
				clsDisplay::_ExecuteDisplay();
				Value = clsInputValidate::ReadString("\nPlease Enter The Value Shown Above : ");

				if (LinkedList.IsFound(Value))
				{
					NewValue = clsInputValidate::ReadString("\nPlease Enter New Value: ");

					Answer = clsUtil::DoYouWantToContinue("Are You Sure Updated Value ? y/n ? ");

					if (Answer == 'Y' || Answer == 'y')
					{
						LinkedList.Update(Value, NewValue);
						cout << "\nUpdated Successfully...\n";
					}

					if (Answer == 'Y' || Answer == 'y')
					{
						Answer = clsUtil::DoYouWantToContinue("Do You Want To Update More ? y/n ? ");
						if (Answer == 'Y' || Answer == 'y')
						{
							system("cls");
							_DrawHeaderScreen("\t\t Update Screen");
						}
					}
				}

				else
					return;
			} while (Answer == 'Y' || Answer == 'y');


		}
	}

	static void _Update()
	{
		_ExecuteUpdate();
	}

public:
	static void ShowUpdateScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t\t Update Screen");
		_Update();
	}
};

