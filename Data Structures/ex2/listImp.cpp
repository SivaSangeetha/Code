#include"list.h"

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

Labour::Labour(const Labour &l)
{
	int x;
	x=strlen(l.name);
	name=new char(x+1);
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
	workHours=1.1;
	comPerday=l;
	return *this;
}

bool Labour::operator==(Labour l)
{
	if(((strcmp(name,l.name)==0))&&(comPerday==l.comPerday)&&(workHours==l.workHours)&&(age==l.age))
		return 1;
	return 0;

}

int Labour::operator!=(Labour l)
{
	if(*this==l)
		return 0;
	else
		return 1;
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

L_List::L_List()
{
	first=NULL;
}

L_List::L_List(Node *f)
{
	first=f;
}

L_List::L_List(const L_List &f)
{
	first=f.first;
}

L_List::~L_List()
{
	delete first;
}

int L_List::isEmpty()
{
	if(first==NULL)
		return 1;
	else
		return 0;
}

int  L_List::insertAtFirst(Node *newNode)
{
	if(isEmpty())
	{
		first=newNode;
	}
	else 
	{
		newNode->next=first;
		first=newNode;
	}
	return 1;

}

int  L_List::insertAtLast(Node *newNode)
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
	return 1;
}

int L_List::insertByPos(int pos,Node *newNode)
{
	if(!isEmpty())
	{
		int i=1;
		Node *temp=first;
		while (temp->next!=NULL && i!=pos-1)
		{
			temp=temp->next;
			i++;
		}
		if(i==pos-1)
		{
			newNode->next=temp->next;
			temp->next=newNode;
			return 1;
		}
		return -2;
	}
	else
	{
		if(pos==1)
		{
			first=newNode;
			return 1;
		}
		return -1;
	}

}

int L_List::insertAfterGnEle(Node *newNode,Labour afterEle)
{
	if(!isEmpty())
	{
		Node *temp=first;
		while(temp->next!=NULL && temp->data!=afterEle)
		{
			temp=temp->next;
		}
		if(temp->data==afterEle)
		{
			newNode->next=temp->next;
			temp->next=newNode;
			return 1;
		}
		return -2;
	}
	else
		return -1;
}

int L_List::insertBeforeGnEle(Node *newNode,Labour beforeEle)
{
	if(!isEmpty())
	{
		Node *prev=first;
		Node *temp=first;
		while(temp->next!=NULL && temp->data!=beforeEle)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp->data==beforeEle)
		{
			newNode->next=prev->next;
			prev->next=newNode;
			return 1;
		}
		return -2;
	}
	else
		return -1;
}

Labour L_List::deleteAtFirst()
{
	if(isEmpty())
    {
		Labour abc;
		return abc;
	}
	else
	{
		Node *temp=first;
		first=first->next;
		return temp->data;
	}
}

Labour L_List::deleteAtLast()
{
	if(isEmpty())
	{
		Labour abc;
		return abc;
	}
	else
	{
		Node *temp=first;
		Node *prev=first;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		return temp->data;
	}
}

Labour L_List::deleteByPos(int pos)
{
		if(pos!=1)
		{
			int cnt=1;
			Node *temp=first;
			Node *prev;
			while(temp->next!=NULL && cnt!=pos)
			{
				prev=temp;
				temp=temp->next;
				cnt++;
			}
			if(cnt==pos)
			{
			   Labour returnvariable=temp->data;
			   prev->next=temp->next;
			   return returnvariable;
			}
			else
			{
				Labour abc;
				return abc;
			}

		}
		else
		{
			Node *temp=first;
			Labour returnvariable=first->data;
			first=first->next;
			return returnvariable;
		}
}
int L_List::displayList()
{
	if(isEmpty())
		return  0;
	else
	{
		Node *temp=first;
		while(temp->next!=NULL)
		{
		cout<<temp->data<<"\n";
		temp=temp->next;
		}
		cout<<temp->data<<"\n";
		return 1;
	}

}

int L_List::makeListEmpty()
{
	if(!isEmpty())
	{
		Node *temp=first;
		while(temp!=NULL)
		{
			first=first->next;
			temp=NULL;
		}
		first=NULL;

	}
	return 1;
}



