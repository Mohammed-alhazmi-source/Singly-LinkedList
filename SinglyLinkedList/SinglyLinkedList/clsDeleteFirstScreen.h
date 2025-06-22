#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUtil.h"
#include "Global.h"
#include "clsDisplay.h"
using namespace std;

class clsDeleteFirstScreen : protected clsScreen
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
			DeleteMore = clsUtil::DoYouWantToContinue("\nDo You Want To Delete First Node ? y/n ? ");
			
			if (DeleteMore == 'Y' || DeleteMore == 'y')
			{
				LinkedList.DeleteFirst();
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
					_DrawHeaderScreen("\t  Delete In First List Screen");
				}
			}

		} while (DeleteMore == 'Y' || DeleteMore == 'y');		
	}

	static void _Delete()
	{
		_ExecuteDelete();
	}

public:
	static void ShowDeleteFirstScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t  Delete In First List Screen");
		_Delete();
	}
};

