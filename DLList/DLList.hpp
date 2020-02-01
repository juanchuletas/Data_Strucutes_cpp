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
		int size;
	public:
		DLList();
		void PrependToDLList(int _data);
		void AppendToDLList(int _data);
		void ShowDLList();
		void ReverseDLList();
};
DLList::DLList()
{
	head = NULL;
	tail = NULL;
}
void DLList::PrependToDLList(int _data)
{
	//Insert node at the begin of the list
	DLLNode *node = new DLLNode(_data);
	if(head == NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		head->prev = node;
		node->next = head;
		head = node;
	}
	size++;
}
void DLList::AppendToDLList(int _data)
{
	DLLNode *node = new DLLNode(_data);
	if(head==NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		node->prev = tail;
		tail->next = node;
		tail = node;
	}
	size++;
}
void DLList::ShowDLList()
{
	DLLNode *tmp = head;
	while(tmp!=NULL)
	{
		std::cout<<tmp->data<<" <--> ";
		tmp = tmp->next;
	}
	std::cout<<"\n";
}
void DLList::ReverseDLList()
{

