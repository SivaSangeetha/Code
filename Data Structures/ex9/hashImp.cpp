#include"hash.h"

Labour::Labour()
{
	name="NULL";
	id=0;
	workHours=0.0;
	comPerday=0;
}

Labour::Labour(string n,int x,float y,int z)
{
	name=n;
	id=x;
	workHours=y;
	comPerday=z;
}

Labour::Labour(const Labour &l)
{
	name=l.name;
	id=l.id;
	workHours=l.workHours;
	comPerday=l.comPerday;
}


int Labour::getId()
{
	return id;
}

istream& operator>>(istream &myin,Labour &l)
{
	cout<<"\nEnter the name : ";
	myin>>l.name;
	cout<<"\nEnter the id: ";
	myin>>l.id;
	cout<<"\nEnter the working hours : ";
	myin>>l.workHours;
	cout<<"\nEnter the commission per day : ";
	myin>>l.comPerday;
	return myin;
}

ostream& operator<<(ostream &myout,Labour &l)
{
	myout<<"\n\tName"<<"\tId"<<"\tWorking Hours"<<"\tCommission PerDay";
	myout<<"\n\t"<<l.name<<"\t"<<l.id<<"\t"<<l.workHours<<"\t\t"<<l.comPerday<<"\n";
	return myout;
}

HashTblADT::HashTblADT(int s)
{
    capacity = 0;
    size = s;
    arr = new Labour *[size];
    for(int i =0;i<size;i++)
    {
        arr[i] = NULL;
    }
}
int HashTblADT::hashFunction(int n)
{
    return n % size;
}
int HashTblADT::isFull()
{
    if(capacity == size)
    {
        return 1;
    }
    else
       return 0;
}
int HashTblADT::isEmpty()
{
    if(capacity == 0)
    {
        return 1;
    }
    else
        return 0;
}
int HashTblADT::insertDetails(Labour key)
{
    if(capacity == size)
    {
        return 1;
    }
    int hashIndex = hashFunction(key.id);
    while(arr[hashIndex] != NULL)
    {
        hashIndex = (hashIndex+1) % size;
    }
    arr[hashIndex] = new Labour();
    arr[hashIndex]->id = key.id;
    arr[hashIndex]->name = key.name;
    capacity++;
    return 2;
}
int HashTblADT::searchId(int key)
{
    if(capacity==0)
    {
        return 1;
    }
    int hashIndex = hashFunction(key);
    int temp = hashIndex;
    while(true)
    {
        if(arr[hashIndex] == NULL)
        {
            hashIndex = (hashIndex+1)%size;
        }
        else if(arr[hashIndex]->id != key)
        {
            hashIndex = (hashIndex+1)%size;
        }
        else
        {
            break;
        }
        if(hashIndex == temp)
        {
            temp = -1;
            break;
        }
    }
    if(temp == -1)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int HashTblADT::deleteById(int key)
{
    if(capacity == 0)
    {
        return 1;
    }
    int hashIndex = hashFunction(key);
    int temp = hashIndex;
    while(true)
    {
        if(arr[hashIndex] == NULL)
        {
            hashIndex = (hashIndex+1) % size;
        }
        else if(arr[hashIndex]->id != key)
        {
            hashIndex = (hashIndex+1) % size;
        }
        else
        {
            break;
        }
        if(hashIndex == temp)
        {
            temp = -1;
            break;
        }
    }
    if(temp == -1)
    {
        return 2;
    }
    else
    {
        delete arr[hashIndex];
        arr[hashIndex] = NULL;
        capacity--;
        return 3;
    }
}
void HashTblADT::displayHash()
{
    for(int i = 0; i<size;i++)
    {
        if(arr[i] != NULL)
        {
            cout<<"HASHTABLE["<<i<<"]:key-> "<<arr[i]->id<<"value-> "<<arr[i]->name<<endl;
        }
    }
}
HashTblADT::~HashTblADT()
{
    for(int i =0;i<size;i++)
    {
        if(arr[i] != NULL)
        {
            cout<<"DELETING KEY "<<arr[i]->id<<"value "<<arr[i]->name<<endl;
            delete arr[i];
            arr[i] = NULL;
        }
    }
}
