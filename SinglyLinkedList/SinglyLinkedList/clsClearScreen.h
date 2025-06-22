#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include "clsScreen.h"
#include "Global.h"
#include "clsUtil.h"
#include "clsDisplay.h"

class clsClearScreen : protected clsScreen
{
private:
	static void _LoadingBar(const string& Value)
	{
		cout << "\nDeleting Value : " << Value << endl;
		for (short i = 0; i <= 100; i += 9)
		{
			cout << "\rProgress " << i + 1 << "%";
			std::this_thread::sleep_for(std::chrono::milliseconds(300));
		}
	}

	static void _ExecuteClear()
	{
		if (LinkedList.IsEmpty())
			clsUtil::PrintMessage("\t  Singly Linked List Is Empty");

		else
		{
			char Answer = clsUtil::DoYouWantToContinue("\nDo You Want To Clear List ? y/n ? ");

			if(Answer == 'Y' || Answer == 'y')
			{
				while (!LinkedList.IsEmpty())
				{
					clsDisplay::_ExecuteDisplay();
					_LoadingBar(LinkedList.FirstData());
					LinkedList.DeleteFirst();
					system("cls");
					_DrawHeaderScreen("\t\t Clear Screen");
				}
				clsUtil::PrintMessage("Completed Clear Singly Linked List");
			}
		}

	}

	static void _Clear()
	{
		_ExecuteClear();
	}

public:
	static void ShowClearScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t\t Clear Screen");
		_Clear();
	}
};