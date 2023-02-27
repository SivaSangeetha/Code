#include"array.h"


Labour::Labour(char* x,int a,float b,int c)
{
	int l;
	l=strlen(x);
	name=new char[l+1];
	strcpy(name,x);
	comPerday=a;
	workHours=b;
	age=c;
}

Labour::Labour(int c)
{
	name=new char[20];
	strcpy(name,"abc");
	age=0;
	comPerday=c;
	workHours=0.0;
	
}

Labour::Labour(const Labour &l)
{
	int x;
        x=strlen(l.name);
        name=new char[x+1];
        strcpy(name,l.name);
        comPerday=l.comPerday;
        workHours=l.workHours;
        age=l.age;
}

Labour::~Labour()
{
	delete []name;
}

Labour::Labour()
{
	name=new char[20];
	strcpy(name,"abc");
	comPerday=0;
	workHours=0;
	age=0;
}

Labour Labour::operator=(Labour l)
{
	strcpy(name,l.name);
	comPerday=l.comPerday;
	workHours=l.workHours;
	age=l.age;
	return *this;
}
 
Labour Labour::operator=(int l)
{
	strcpy(name,"null");
	comPerday=l;
	workHours=1.1;
	age=l;
	return *this;
}


bool Labour::operator==(Labour l)
{
        if(comPerday==l.comPerday)
		return 1;
	else
		return 0;
}


A_List::A_List()
{
        size=0;
        arr=0;
        capacity=10;
        arr=new Labour[capacity];
        for(int i=0;i<capacity;i++)
                arr[i]=-1;
}

A_List::A_List(Labour *a,int s,int c)
{
        size=s;
        capacity=c;
        arr=new Labour[capacity];
        for(int i=0;i<size;i++)
                arr[i]=a[i];
}

A_List::A_List(const A_List &myList)
{
        size=myList.size;
        capacity=myList.capacity;
        arr=new Labour[capacity];
        for(int i=0;i<size;i++)
                arr[i]=myList.arr[i];
        for(int i=size;i<capacity;i++)
                arr[i]=-1;
}

A_List::~A_List()
{
	delete[] arr;
}


int A_List::isFull()
{
        if(size==capacity)
                return 1;
        else
                return 0;
}

int A_List::isEmpty()
{
        if(size==0)
              	return 1;
        else
                return 0;
}

int A_List::insertAtFirst(Labour ele)
{
        if(!isFull())
        {
                if(isEmpty())
                {
                        arr[0]=ele;
                        size++;
                }
                else
                {
                        for(int i=size;i>0;i--)
                                arr[i]=arr[i-1];
                        arr[0]=ele;
                        size++;
                }
                return 1;
        }
        else

                return 0;

}

int A_List::insertAtLast(Labour ele)
{
        if(!isFull())
        {
                arr[size]=ele;
                size++;
                return  1;
        }
        else
                return 0;
}


int A_List::insertByPos(int pos,Labour ele)
{
       if(!isFull())
        {
                if(pos-1>size)
                        return -2;
                else
                {
                        if(isEmpty() && pos==1)
                        {
                                arr[0]=ele;
				size++;
                        }
                        else
                                if(!isEmpty())
                        {
                                for(int i=size;i>0;i--)
                                        arr[i]=arr[i-1];
                                arr[pos-1]=ele;
                                size++;

                        }
                return 1;
                }
        }
        else
                return 0;

}

Labour A_List::deleteByPos(int pos)
{
		if((pos<=size)&&(!(pos<0)))
		{
			Labour ret=arr[pos-1];
			for(int i=pos-1;i<size;i++)
				arr[i]=arr[i+1];
			arr[size-1]=0;
			size--;
			return ret ;
					
		}
		Labour abc;
		return abc;

}

Labour A_List::deleteByEle(int l)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i].getCom()==l)
		{
			break;
		}
	}
		if(i==size)
		{
			Labour abc;
			return abc;
		}
		Labour ret=arr[i];
		for(int j=i;j<size-1;j++)
		{
			arr[i]=arr[i+1];
			arr[size-1]=0;
		}
		size--;
		return ret;
}

Labour A_List::deleteAtFirst()
{
        if(!isEmpty())
        {
		Labour ret=arr[0];
                for(int i=0;i<size;i++)
                        arr[i]=arr[i+1];
                size--;
        return ret;
        }
        Labour abc;
	return abc;
}

Labour A_List::deleteAtLast()
{
        if(!isEmpty())
        {
		Labour ret=arr[size-1];
                arr[size-1]=-1;
                size--;
                return ret;
        }
        Labour abc;
	return abc;
}


int A_List::displayList()
{
        if(!isEmpty())
        {
		cout<<"\nCapacity: ";
		cout<<capacity;
		cout<<"\nSize: ";
		cout<<size;
		cout<<"\nDatas: \n";
		for(int i=0;i<size;i++)
		{
			cout<<"\n\nData "<<i+1<<":";
			cout<<arr[i];
		}
                return 1;
        }
        else
                return 0;
}
int A_List::makeListEmpty()
{
        while(!isEmpty())
        {
                deleteAtFirst();
        }
        return 1;
}

Labour A_List::searchAtFirst(Labour l)
{
        if(arr[0]==l)
		return arr[0];
	Labour abc;
        return abc;
}

Labour A_List::searchAtLast(Labour l)
{
        if(arr[size-1]==l)
		return arr[size-1];
	Labour abc;
        return abc;
}

Labour A_List::searchAnEle(Labour ele)
{
    for(int i=0;i<size;i++)
	if(arr[i]==ele)
		return arr[i];
	Labour abc;
	return abc;
    
}

Labour A_List::retriveEleAtGnIndex(int index)
{
        if(!isEmpty())
        {
     	 	return arr[index];
    	} 
}

int A_List::getSize()
{
	return size;
}

int Labour::getCom()
{
	return comPerday;
}


