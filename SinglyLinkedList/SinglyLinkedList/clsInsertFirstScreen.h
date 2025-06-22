#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "Global.h"
using namespace std;

class clsInsertFirstScreen : protected clsScreen
{
private:
	
	static void _ExecuteInsert()
	{
		string Value = "";
		char InsertMore = 'n';
		cout << "\n\nExit[0].";

		while (true)
		{
			Value = clsInputValidate::ReadString("\nPlease Enter Value : ");

			if (Value == "0")
				break;

			LinkedList.InsertFirst(Value);
		}
	}

	static void _Insert()
	{
		_ExecuteInsert();
	}

public:
	static void ShowInsertFirstScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t  Insert In First List Screen");
		_Insert();
	}
};