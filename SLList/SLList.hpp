class SLLNode
{
	public:
		int data;
		SLLNode *next;
		SLLNode(); //Constructors
		SLLNode(int, SLLNode *); //Constructor
};

SLLNode::SLLNode()
{
	next = 0; //Setting the value to null
}
SLLNode::(int input, SLLNode *ptr = 0)
{
	data = input;
	next = ptr;
}
class SLList
{
	private:
		SLLNode *head,*tail; 
	public:
		SLList();//Constructor
		~SLList();//Destructor
		int isEmpty();
		void AddToHead();
		void AddToTail();

};
SLList::SLList()
{
	head = tail = 0;
};
SLList::~SLList()
{
	for(SLLNode *p; !isEmpty();)
	{
		p = head -> next;
		delete head;
		head = p;
	}
}
int SLList::isEmpty()
{
	return head == 0;
}
void SLList::AddToHead(int input)
{
	head = new SLLNode(input);
	if(tail==0)
		tail = head;
}
void SLList::AddToTail(int input)
{
	if(tail!=0)
	{
		tail->next = new SLLNode(input);
		tail = tail->next;
	}
		
}
