#include"stack.h"


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

A_Stack::A_Stack(int c)
{
	top=-1;
	capacity=c;
	StackArr=new Labour[capacity];
}



A_Stack::A_Stack()
{
	top=-1;
	capacity=10;
	StackArr=new Labour[capacity];
	for(int i=0;i<capacity;i++)
		StackArr[i]=-1;
}

A_Stack::A_Stack(Labour* a,int s,int c)
{
	top=s-1;
	capacity=c;
	StackArr=new Labour[capacity];
	for(int i=0;i<top;i++)
		StackArr[i]=a[i];
	for(int i=top+1;i<capacity;i++)
		StackArr[i]=-1;
}

A_Stack::A_Stack(const A_Stack &s)
{
	top=s.top;
	capacity=s.capacity;
	StackArr=new Labour[capacity];
	for(int i=0;i<=top;i++)
		StackArr[i]=s.StackArr[i];
	for(int i=top+1;i<capacity;i++)
		StackArr[i]=-1;

}

A_Stack::~A_Stack()
{
	top=-1;
	capacity=0;
	delete []StackArr;
	StackArr=NULL;
}

int A_Stack::isFull()
{
	if(top+1==capacity)
		return 1;
	else
		return 0;
}

int A_Stack::isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int A_Stack::push(Labour ele)
{
	if(!isFull())
	{
		StackArr[++top]=ele;
		return 1;
	}
	else 
		return 0;

}

int A_Stack::pop()
{
	if(!isEmpty())
	{
		StackArr[top--]=-1;
		return 1;
	}
	else
		return 0;
}

Labour A_Stack::peek()
{

	Labour l= StackArr[top];
	return l;
}

int A_Stack::getSize()
{
	if(!isEmpty())
		return  top+1;
	else 
		return 0;
}

int A_Stack::makeStackEmpty()
{
	while(!isEmpty())
		int deleteElt=pop();
	return 1;

}

int A_Stack::displayStack()
{

		cout<<"\nDatas Present in Stack are.... : \n";
		for(int i=0;i<=top;i++)
		{	
			cout<<"\n\nDatas "<<i+1<<" : ";
			cout<<StackArr[i]<<"\t";
			cout<<"\n";
		}
		return 1;

}



