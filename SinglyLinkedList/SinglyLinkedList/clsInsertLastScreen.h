#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "Global.h"
using namespace std;

class clsInsertLastScreen : protected clsScreen
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

			LinkedList.InsertLast(Value);
		}
	}

	static void _Insert()
	{
		_ExecuteInsert();
	}

public:
	static void ShowInsertLastScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t  Insert In Last List Screen");
		_Insert();
	}
};