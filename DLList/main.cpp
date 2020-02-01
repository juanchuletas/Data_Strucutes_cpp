#include <iostream>
#include "DLList.hpp"


int main()
{
	DLList  dllist;


	dllist.AppendToDLList(12);
	dllist.AppendToDLList(13);
	dllist.AppendToDLList(14);
	dllist.AppendToDLList(15);
	dllist.ShowDLList();
	dllist.PrependToDLList(70);
	dllist.ShowDLList();
	dllist.ReverseDLList();



	return 0;
}
