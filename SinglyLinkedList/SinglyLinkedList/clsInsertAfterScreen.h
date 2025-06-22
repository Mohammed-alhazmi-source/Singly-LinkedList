#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "Global.h"
#include "clsDisplay.h"
using namespace std;

class clsInsertAfterScreen : protected clsScreen
{
private:

	static void _ExecuteInsert()
	{
		string NewValue = "", Value = "";
		char InsertMore = 'n';
		cout << "\n\nExit[0].";

		clsDisplay::_ExecuteDisplay();

		NewValue = clsInputValidate::ReadString("\nPlease Enter New Value : ");

		if (NewValue == "0" || Value == "0")
			return;

		else
		{
			if (LinkedList.IsEmpty())
			{
				LinkedList.InsertFirst(NewValue);
				cout << "\nSuccessfully...\n";
				return;
			}

			else if (LinkedList.IsFound((Value = clsInputValidate::ReadString("\nPlease Enter The Value Shown Above : "))))
			{
				LinkedList.InsertAfter(NewValue, Value);
				cout << "\nSuccessfully...\n";
				return;
			}

			else
			{
				cout << "Value Is Not Found ...";
				return;
			}
		}
	}

	static void _Insert()
	{
		_ExecuteInsert();
	}

public:
	static void ShowInsertAfterScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t  Insert After In List Screen");
		_Insert();
	}
};

