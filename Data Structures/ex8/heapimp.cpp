#include"heap.h"

Labour::Labour()
{
	strcpy(name,"abc");
	age=0;
	workHours=0.0;
	comPerday=0;
}

Labour::Labour(char a[],int x,float y,int z)
{
	int l;
	strcpy(name,a);
	age=x;
	workHours=y;
	comPerday=z;
}

Labour::Labour(const Labour &l)
{
	int x;
	strcpy(name,l.name);
	age=l.age;
	workHours=l.workHours;
	comPerday=l.comPerday;
}


int Labour::getAge()
{
	return age;
}

istream& operator>>(istream &myin,Labour &l)
{
	cout<<"\nEnter the name : ";
	myin>>l.name;
	cout<<"\nEnter the age : ";
	myin>>l.age;
	cout<<"\nEnter the working hours : ";
	myin>>l.workHours;
	cout<<"\nEnter the commission per day : ";
	myin>>l.comPerday;
	return myin;
}

ostream& operator<<(ostream &myout,Labour &l)
{
	myout<<"\n\tName"<<"\tAge"<<"\tWorking Hours"<<"\tCommission PerDay";
	myout<<"\n\t"<<l.name<<"\t"<<l.age<<"\t"<<l.workHours<<"\t\t"<<l.comPerday<<"\n";
	return myout;
}

Heap::Heap()
{
	size=0;
	capacity=0;
	arr=new Labour[capacity+1];
}

Heap::Heap(int c)
{
	size=0;
	capacity=c;
	arr=new Labour[capacity+1];
}

Heap::~Heap()
{
	delete[] arr;
}

int Heap::isFull()
{
	if(size==capacity)
		return 1;
	else
		return 0;
}

int Heap::isEmpty()
{
	if(size==0)
		return 1;
	else
		return 0;
}

int Heap::enqueue(Labour l)
{
	if(!isFull())
	{
		size=size+1;
		int ctnode=size;
		while(ctnode!=1 && arr[ctnode/2].getAge() > l.getAge())
		{
			arr[ctnode]=arr[ctnode/2];
			ctnode=ctnode/2;
		}
		arr[ctnode]=l;
		return 1;
	}
	else
		return -1;
}

int Heap::dequeue()
{
	if (!isEmpty())
	{
		Labour lastInfo = arr[size];
		size=size-1;
		int ctnode=1;
		int child=2;
		while(child<size)
		{
			if ((child<size) && arr[child].getAge()>arr[child+1].getAge())
				child=child+1;
			if (lastInfo.getAge() <= arr[child].getAge())
				break;
			arr[ctnode]=arr[child];
			ctnode=child;
			child=ctnode*2;
		}
		arr[ctnode]=lastInfo;
		return 1;
	}
	return 0;
}

int Heap :: searchByAge(int age)
{
	if(!isEmpty())
	{
		for(int i =1;i<size +1;i++)
		{
			if(arr[i].getAge()== age)
			{
				cout<<arr[i];
				return 1;
			}
		}
		return 2;
	}
	return 0;
}

Labour Heap::findMin()
{
	if(!isEmpty())
	{
		return arr[1];
	}
}


Labour Heap::findMax()
{
	if(!isEmpty())
	{
		Labour l = arr[1];
		for(int i =2;i<size+1;i++)
		{
			if(l.getAge() < arr[i].getAge())
			{
				l=arr[i];
			}
		}
		return l;
	}
}

int Heap::displayHeap()
{
	if(!isEmpty())
	{
		for(int i=1;i<size+1;i++)
		{
			cout<<arr[i];
		}
		return 1;
	}
	else
			return 0;
}

