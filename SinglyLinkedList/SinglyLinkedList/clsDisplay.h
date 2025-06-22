#pragma once
#include <iostream>
#include "Global.h"
#include "clsUtil.h"
class clsDisplay
{
public:
	static void _ExecuteDisplay()
	{
		if (LinkedList.IsEmpty())
		{
			clsUtil::PrintMessage("   Singly Linked List Is Empty");
			return;
		}

		Node<string>* Temp = LinkedList.FirstNode();
		cout << "\n\nItems : \n";
		while (Temp != nullptr)
		{
			cout << Temp->Data;

			if (Temp->Next != nullptr)
				cout << " -> ";

			Temp = Temp->Next;
		}
		cout << endl;
	}
};

