#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUtil.h"
#include "clsInputValidate.h"
#include "Global.h"
#include "clsDisplay.h"
using namespace std;

class clsDeleteSpecificNodeScreen : protected clsScreen
{
private:

	static void _ExecuteDelete()
	{
		if (LinkedList.IsEmpty())
		{
			clsUtil::PrintMessage("   Singly Linked List Is Empty");
			return;
		}

		string Value = "";
		char DeleteMore = 'n';

		do
		{
			clsDisplay::_ExecuteDisplay();
			Value = clsInputValidate::ReadString("\nPlease Enter The Value Shown Above : ");

			if(LinkedList.IsFound(Value))
			{
				DeleteMore = clsUtil::DoYouWantToContinue("\nDo You Want To Delete Specific Node ? y/n ? ");

				if (DeleteMore == 'Y' || DeleteMore == 'y')
				{
					LinkedList.DeleteNode(Value);
					clsDisplay::_ExecuteDisplay();

					if (LinkedList.IsEmpty())
						return;
				}

				if (DeleteMore == 'Y' || DeleteMore == 'y')
				{
					DeleteMore = clsUtil::DoYouWantToContinue("\nDo You Want To Delete More ? y/n ? ");
					if (DeleteMore == 'Y' || DeleteMore == 'y')
					{
						system("cls");
						_DrawHeaderScreen("\t  Delete Specific Node Of List Screen");
					}
				}
			}
			else
			{
				cout << endl << Value << " Is Not Found In List...\n";
				return;
			}

		} while (DeleteMore == 'Y' || DeleteMore == 'y');
	}

	static void _Delete()
	{
		_ExecuteDelete();
	}

public:
	static void ShowDeleteLastScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t  Delete Specific Node Of List Screen");
		_Delete();
	}
};