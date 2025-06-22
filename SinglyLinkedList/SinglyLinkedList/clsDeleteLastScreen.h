#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUtil.h"
#include "Global.h"
#include "clsDisplay.h"
using namespace std;

class clsDeleteLastScreen : protected clsScreen
{
private:

	static void _ExecuteDelete()
	{
		if (LinkedList.IsEmpty())
		{
			clsUtil::PrintMessage("   Singly Linked List Is Empty");
			return;
		}

		char DeleteMore = 'n';

		do
		{
			clsDisplay::_ExecuteDisplay();
			DeleteMore = clsUtil::DoYouWantToContinue("\nDo You Want To Delete Last Node ? y/n ? ");

			if (DeleteMore == 'Y' || DeleteMore == 'y')
			{
				LinkedList.DeleteLast();
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
					_DrawHeaderScreen("\t  Delete In Last List Screen");
				}
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
		_DrawHeaderScreen("\t  Delete In Last List Screen");
		_Delete();
	}
};