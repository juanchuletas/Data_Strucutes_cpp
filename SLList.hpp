#include <iostream>
using namespace std;

class Node
{
	public:
		Node *next;
		int data;
		Node();
		Node(int _data);
};
Node::Node()
{
	next = NULL;
}
Node::Node(int _data)
{
	this->data = _data;
	next = NULL;
}
class SLList
{
	private:
		Node *head;
		Node *tail;
		int size;
	public:
		SLList();
		int getSize();
		void AppendToList(int _data);
		void ShowList();
		void PrependToList(int _data);
		void RemoveFirstNode();
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
	Node *node = new Node(_data);
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
	Node *temp  = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"-->";
		temp = temp->next;
	}
	cout<<"\n";
}
void SLList::PrependToList(int _data)
{
	Node *node = new Node(_data);
	if(head == NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		Node *temp = head;
		head = node;
		node->next = temp;

	}
	size++;
}
void SLList::RemoveFirstNode()
{
	if(head!=NULL)
	{
		Node *temp = head;
		head = head->next;
		delete temp;
		size--;
	}
}
SLList::~SLList()
{
	Node *node;
	while(head != NULL)
	{
		node = head->next;
		delete head; 
		head = node;
	}
	size = 0;
	cout<<"SLList Destructor called\n";
}

