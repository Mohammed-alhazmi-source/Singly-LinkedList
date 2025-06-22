#pragma once
#include <iostream>
#include "clsScreen.h"
#include "Global.h"
#include "clsUtil.h"
#include "clsDisplay.h"

class clsDisplayScreen : protected clsScreen
{
private:	
	static void _Display()
	{
		clsDisplay::_ExecuteDisplay();
	}

public:
	static void ShowDisplayScreen()
	{
		system("cls");
		_DrawHeaderScreen("\t       Display Screen");
		_Display();
	}
};