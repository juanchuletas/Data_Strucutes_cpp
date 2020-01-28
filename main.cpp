#include "SLList.hpp"

int main()
{
	SLList s;

	s.AppendToList(10);
	s.AppendToList(11);
	s.PrependToList(21);
	s.getSize();
	s.ShowList();
	cout<<"List Size: "<<s.getSize()<<"\n";
	cout<<"List Size: "<<s.getSize()<<"\n";




	return 0;

}

