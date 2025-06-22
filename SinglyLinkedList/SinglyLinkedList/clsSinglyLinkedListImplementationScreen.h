#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsUtil.h"
#include "clsInsertScreen.h"
#include "clsDeleteScreen.h"
#include "clsUpdateScreen.h"
#include "clsSearchScreen.h"
#include "clsClearScreen.h"
#include "clsDisplayScreen.h"
using namespace std;

class clsSinglyLinkedListImplementationScreen : protected clsScreen
{
	enum enMainMenuOptions 
	{	
		Insert = 1, Delete = 2, Update = 3, Search = 4, ClearList = 5, Display = 6, Exit = 7
	};

	static short _ReadOption()
	{
		return clsUtil::ReadOption(1, 7, "Choose An Operation From 1 To 7 ? ");
	}

	static void _GoBackToMainMenu()
	{
		cout << endl;
		system("pause");
		ShowMainMenu();
	}

	static void _ShowInsertionScreen()
	{
		clsInsertScreen::ShowInsertionMenu();
	}

	static void _ShowDeletionScreen()
	{
		clsDeleteScreen::ShowDeletionMenu();
	}

	static void _ShowUpdateScreen()
	{
		clsUpdateScreen::ShowUpdateScreen();
	}

	static void _ShowSearchScreen()
	{
		clsSearchScreen::ShowSearchScreen();
	}

	static void _ShowClearListScreen()
	{
		clsClearScreen::ShowClearScreen();
	}

	static void _ShowDisplayItemsScreen()
	{
		clsDisplayScreen::ShowDisplayScreen();
	}

	static void _Exit()
	{
		cout << endl << "--------------------------------------";
		cout << "\nEnd Program :-)";
		cout << endl << "--------------------------------------\n";
	}

	static void _ExecuteTheSelectedOption(enMainMenuOptions Option)
	{
		switch (Option)
		{		  		  
		  case clsSinglyLinkedListImplementationScreen::Insert:
		  {
		  	system("cls");
			_ShowInsertionScreen();
		  	_GoBackToMainMenu();
		  	break;
		  }
		  
		  case clsSinglyLinkedListImplementationScreen::Delete:
		  {
		  	system("cls");
			_ShowDeletionScreen();
		  	_GoBackToMainMenu();
		  	break;
		  }		  	

		  case clsSinglyLinkedListImplementationScreen::Update:
		  {
			  system("cls");
			  _ShowUpdateScreen();
			  _GoBackToMainMenu();
			  break;
		  }
		  
		  case clsSinglyLinkedListImplementationScreen::Search:
		  {
		  	system("cls");
		  	_ShowSearchScreen();
		  	_GoBackToMainMenu();
		  	break;
		  }
		  
		  case clsSinglyLinkedListImplementationScreen::ClearList:
		  {
		  	system("cls");
		  	_ShowClearListScreen();
		  	_GoBackToMainMenu();
		  	break;
		  }
		  
		  case clsSinglyLinkedListImplementationScreen::Display:
		  {
		  	system("cls");
		  	_ShowDisplayItemsScreen();
		  	_GoBackToMainMenu();
		  	break;
		  }
		  
		  case clsSinglyLinkedListImplementationScreen::Exit:
		  {
		  	system("cls");
		  	_Exit();
		  	break;
		  }
		}
	}

	static void _PrintMainMenu()
	{
		cout << "\n\n\n" << setw(42) << left << "" << "======================================";
		cout << "\n" << setw(42) << left << "" << "Enter <1> Insertion.";
		cout << "\n" << setw(42) << left << "" << "Enter <2> Deletion.";
		cout << "\n" << setw(42) << left << "" << "Enter <3> Update Item.";
		cout << "\n" << setw(42) << left << "" << "Enter <4> Search Item.";
		cout << "\n" << setw(42) << left << "" << "Enter <5> Clear List.";
		cout << "\n" << setw(42) << left << "" << "Enter <6> Display.";
		cout << "\n" << setw(42) << left << "" << "Enter <7> Exit.";
		cout << "\n" << setw(42) << left << "" << "======================================";
	}

public:
	static void ShowMainMenu()
	{
		system("cls");
		_DrawHeaderScreen("Singly Linked List Implementation Screen","\t\t    Main Menu");
		_PrintMainMenu();
		_ExecuteTheSelectedOption((enMainMenuOptions)_ReadOption());
	}
};