#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "Global.h"

class clsSearchScreen : protected clsScreen
{
private:
	static void _ExecuteSearch()
	{
		if (LinkedList.IsEmpty())
			clsUtil::PrintMessage("\t  Singly Linked List Is Empty");

		else
		{
			string Value = clsInputValidate::ReadString("\n\nPlease Enter The Value You Want To Search For ? ");
			
			if (LinkedList.IsFound(Value))
				cout << endl << Value << " Is Found :-)\n";

			else
				cout << endl << Value << " Is Not Found :-(\n";
		}
	}

	static void _Search()
	{
		_ExecuteSearch();
	}

public:
	static void ShowSearchScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t\t Search Screen");
		_Search();
	}
};