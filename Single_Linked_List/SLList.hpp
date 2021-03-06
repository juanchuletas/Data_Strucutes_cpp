#include <iostream>
using namespace std;

class SLLNode
{
	public:
		SLLNode *next;
		int data;
		SLLNode();
		SLLNode(int _data);
};
SLLNode::SLLNode()
{
	next = NULL;
}
SLLNode::SLLNode(int _data)
{
	this->data = _data;
	next = NULL;
}
class SLList
{
	private:
		SLLNode *head;
		SLLNode *tail;
		int size;
	public:
		SLList();
		int getSize();
		void AppendToList(int _data);
		void ShowList();
		void PrependToList(int _data);
		void RemoveFirstSLLNode();
		~SLList();
};
SLList::SLList()
{
	head = NULL;
	tail = NULL;
	size = 0;
}
int SLList::getSize()
{
	return size;
}

void SLList::AppendToList(int _data)
{
	SLLNode *node = new SLLNode(_data);
	if(head == NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		tail->next = node;
		tail = node;
	}
	size++;
	
}
void SLList::ShowList()
{
	SLLNode *temp  = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"\n";
}
void SLList::PrependToList(int _data)
{
	SLLNode *node = new SLLNode(_data);
	if(head == NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		SLLNode *temp = head;
		head = node;
		node->next = temp;

	}
	size++;
}
void SLList::RemoveFirstSLLNode()
{
	if(head!=NULL)
	{
		SLLNode *temp = head;
		head = head->next;
		delete temp;
		size--;
	}
}
SLList::~SLList()
{
	SLLNode *node;
	while(head != NULL)
	{
		node = head->next;
		delete head; 
		head = node;
	}
	size = 0;
	cout<<"SLList Destructor called\n";
}

