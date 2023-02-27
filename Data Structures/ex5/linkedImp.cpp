#include"linked.h"

Labour::Labour()
{
        name=new char[20];
        strcpy(name,"abc");
        age=0;
        workHours=0.0;
        comPerday=0;
}

Labour::Labour(char* x,int a,float b,int c)
{
        int l;
        l=strlen(x);
        name=new char[l+1];
        strcpy(name,x);
        age=a;
        workHours=b;
        comPerday=c;
}

Labour::Labour(const Labour&l)
{
        int x;
        x=strlen(l.name);
        name=new char[x+1];
        strcpy(name,l.name);
        age=l.age;
        workHours=l.workHours;
        comPerday=l.comPerday;
}

Labour::~Labour()
{
        delete []name;
}

Labour Labour::operator=(Labour l)
{
        strcpy(name,l.name);
        age=l.age;
        workHours=l.workHours;
        comPerday=l.comPerday;
        return *this;
}
Labour Labour::operator=(int l)
{
        strcpy(name,"null");
        age=l;
        workHours=l;
        comPerday=l;
        return *this;
}

L_Stack::L_Stack()
{
        top=NULL;
}

L_Stack::L_Stack(Node *t)
{
	top=t;
}

L_Stack::L_Stack(const L_Stack &l)
{
	top=l.top;
}

L_Stack::~L_Stack()
{
	delete top;
}

L_Queue::L_Queue()
{
	first=NULL;
}

L_Queue::L_Queue(Node* f)
{
	first=f;
}

L_Queue::L_Queue(const L_Queue &l)
{
	first=l.first;
}

L_Queue::~L_Queue()
{
	delete first;
}
Node::Node()
{
        data=0;
        next=NULL; 
}

Node::Node(Labour d,Node *n)
{
        data=d;
        next=n;
}

Node::Node(const Node &n)
{
        data=n.data;
        next=n.next;
}

Node::~Node()
{

        delete next;
}





int L_Stack::isEmpty() 
{
	if(top==NULL)
		return 1;
	else
		return 0;
}

int L_Stack::push(Node *newNode) 
{
	if(isEmpty())
	{
		top=newNode;
	}
	else
	{
		newNode->next=top;
		top=newNode;
	}
	return 1;
}

Labour L_Stack::pop() 
{

	Node* temp=top;
	Labour deleteElt=temp->data;
	top=top->next;
	temp=NULL;
	return deleteElt;
}

Labour L_Stack::peek()	
{
	Node *temp=top;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	return temp->data;
}
int L_Stack::getSize()
{
	Node *temp=top;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

int L_Stack::makeStackEmpty()
{
	while(!isEmpty())
	{
		Labour deleteElt=pop();
	}
	return 1;
}

int L_Stack::displayStack()
{
	Node *temp=top;
	while(temp->next!=NULL)
	{
		cout<<"\n"<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<temp->data<<"\n";
	return 1;
}




int L_Queue::isEmpty()
{
	if(first==NULL)
		return 1;
	else
		return 0;
}

int L_Queue::enqueue(Node *newNode) 
{
	if(isEmpty())
	{
		first=newNode;
	}
	else
	{
		Node *temp=first;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
	return  1;
}

Labour L_Queue::dequeue()
{ 
	Node *temp=first;
	Labour deleteElt=temp->data;	
	first=first->next;
	temp=NULL;
	return deleteElt;
}

Labour L_Queue::peek()   
{

	Node *temp=first;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	return temp->data;
	
}

int L_Queue::makeQueueEmpty()
{
	Node *temp=first;
	while(!isEmpty())
	{
		Labour deleteElt=dequeue();
	}
	return 1;
}
int L_Queue::getSize()
{
	Node *temp=first;
	int count=0;
	while(temp!=NULL)
	{
		count=count+1;
		temp=temp->next;
	}
	return count;
}

int L_Queue::displayQueue()
{
	Node *temp=first;
	while(temp->next!=NULL)
	{
		cout<<"\n"<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<temp->data<<"\n";
	return 1;
}

