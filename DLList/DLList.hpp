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
		void AddAtPossition(int _pos);
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
	DLLNode *tmp  = tail;
	while(tmp!=NULL)
	{
		std::cout<<tmp->data<<" <--> ";
		tmp = tmp->prev;
	}
	std::cout<<"\n";
}
void DLList::addTo(int pos, int _data)
{
	if(pos < 1 || pos > size + 1 )
	{
		std::cout<<"Invalid Position\n";
		return;
	}
	else if(pos == 1)
	{
		PrependToDLList(_data);

	}
	else if(pos == size + 1)
	{
		AppendToDLList(_data);
	}
	else if(head!=NULL)
	{
		DLLNode *node = new DLLNode(_data);
		DLLNode *current = head;
		for(int i = 1; i<pos)
			current = current -> next;
		current->prev->next = node;
		node->prev = current;
	}

}
