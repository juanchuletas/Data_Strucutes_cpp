#include <iostream>


class DLLNode
{
	public:
		DLLNode *next;
		DLLNode *prev;
		int data;
		DLLNode();
		DLLNode(int _data);
};
DLLNode::DLLNode()
{
	next = NULL;
	prev = NULL;
}
DLLNode::DLLNode(int _data)
{
	data = _data;
	next = NULL;
	prev = NULL;
}
class DLList
{
	private:
		DLLNode *head;
		DLLNode *tail;
}
