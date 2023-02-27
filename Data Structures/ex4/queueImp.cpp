#include"queue.h"

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

A_Queue::A_Queue(int c)
{
	front=-1;
	rear=-1;
	capacity=c;
	queueArr=new Labour[capacity];	
}

A_Queue::A_Queue()
{
        front=-1;
	rear=-1;
        capacity=10;
        queueArr=new Labour[capacity];
        for(int i=0;i<capacity;i++)
                queueArr[i]=-1;
}

A_Queue::A_Queue(Labour* a,int s,int r,int c)
{
	rear=r-1;
	front=s;
	capacity=c;
	queueArr=new Labour[capacity];
	for(int i=0;i<=rear;i++)
		queueArr[i]=a[i];
	for(int i=rear+1;i<capacity;i++)
		queueArr[i]=-1;

}

A_Queue::A_Queue(const A_Queue &q)
{
	front=q.front;
	rear=q.rear;
	capacity=q.capacity;
	queueArr=new Labour[capacity];
	for(int i=0;i<=rear;i++)
		queueArr[i]=q.queueArr[i];
	for(int i=rear+1;i<capacity;i++)
		queueArr[i]=-1;
}

A_Queue::~A_Queue()
{
	rear=-1;
	front=-1;
	capacity=0;
	delete []queueArr;
	queueArr=NULL;
}

int A_Queue::isFull()
{
	if(rear+1==capacity)
		return 1;
	else
		return  0;
}

int A_Queue::isEmpty()
{
	if((front==-1 && rear==-1) || (front>rear))
		return 1;
	else
		return 0;
}

int A_Queue::enqueue(Labour ele)
{
	if(!isFull())
	{
		if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			queueArr[rear]=ele;
		}
		else
		{
			rear++;
			queueArr[rear]=ele;
		}
		return 1;
	}
	else
		return 0;
}

int A_Queue::dequeue()
{
	if(!isEmpty())
	{
		Labour deleteElt=queueArr[front];
		if(front==0  && rear==0)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
		return 1;
	}
	else
		return 0;

}

int A_Queue::displayQueue()
{

		for(int i=front;i<=rear;i++)
		{
			cout<<"Data :";
			cout<<queueArr[i]<<"\t";
			cout<<"\n";
		}
		return 1;
}

int A_Queue::makeQueueEmpty()
{
	if(!isEmpty())
	{
		while(!isEmpty())
		{
			int deleteElt=dequeue();
		}
		return 1;
	}
	else 
		return 0;
}

Labour  A_Queue::peek()
{
	return queueArr[front];
}

int A_Queue::getSize()
{
	if(!isEmpty())
	{
		return (rear-front)+1;
	}
	else
		return 0;
}




