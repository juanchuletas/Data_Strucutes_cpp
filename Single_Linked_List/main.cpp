#include "SLList.hpp"

int main()
{
	SLList s;

	s.AppendToList(10);
	s.AppendToList(11);
	s.AppendToList(12);
	s.AppendToList(13);
	s.PrependToList(21);
	s.ShowList();
	cout<<"List Size: "<<s.getSize()<<"\n";
	s.RemoveFirstSLLNode();
	s.ShowList();
	cout<<"List Size: "<<s.getSize()<<"\n";
	s.ShowList();




	return 0;

}

