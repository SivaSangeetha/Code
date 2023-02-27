#include "heap.h"
int main()
{
	int ch,cap,res;
	Labour l;
	cout<<"\n*********Implementation of Priority Queue using binary heap*******\n";
	cout<<"\nEnter the capacity : ";
	cin>>cap;
	Heap h(cap);
	do
	{
		cout<<"\n**************Menu**************\n";
		cout<<"\n1.Check whether the heap is full or not";
		cout<<"\n2.Check whether the heap is empty or not";
		cout<<"\n3.Add new labour into the heap";
		cout<<"\n4.Delete labour details from the heap with smallest age";
		cout<<"\n5.Search the labour details by age";
		cout<<"\n6.Search the labour with small age";
		cout<<"\n7.Search the labour with highest age";
		cout<<"\n8.Display all the Labour Details";
		cout<<"\n9.Exit";
		cout<<"\nEnter the choice : ";
		cin>>ch;
		
		if(ch==1)
		{
			cout<<"\n----------------------------------------------";
			cout<<"\n*****Check whether the heap is full or not****";
			cout<<"\n----------------------------------------------";
			res=h.isFull();
			cout<<"\nOutput : ";
			if(res==1)
		        cout<<"\n\tHeap is Full..";
            else
                cout<<"\n\tHeap is not Full..";
		}
		
		else if(ch==2)
		{
			cout<<"\n----------------------------------------------";
			cout<<"\n*****Check whether the heap is Empty or not****";
			cout<<"\n----------------------------------------------";
			res=h.isEmpty();
			cout<<"\nOutput : ";
			if(res==1)
		        cout<<"\n\tHeap is Empty";
            else
                cout<<"\n\tHeap is not Empty...";
		}
		
		else if(ch==3)
		{
			cout<<"\n---------------------------------------------";
			cout<<"\n*****Insert Labour details into the heap****";
			cout<<"\n---------------------------------------------";
			cout<<"\nEnter the labour details : ";
			cin>>l;
			cout<<"\nOutput : ";
			int res=h.enqueue(l);
			if(res==1)
				cout<<"\n\tInsertion is sucessful";
			else
				cout<<"\n\tHeap is full.Insertion cannot be done..";
		}
		
		else if(ch==4)
		{
			cout<<"\n---------------------------------------------";
			cout<<"\n*****Remove Labour details from the heap****";
			cout<<"\n---------------------------------------------";
			cout<<"\nOutput: ";
			int res=h.dequeue();
			if(res==1)
				cout<<"\n\tDeletion is successful";
			else
				cout<<"\n\tDeletion is Failed";
		}
		
		else if(ch==5)
		{
			cout<<"\n---------------------------------------------";
			cout<<"\n******Search the Labour details by age*******";
			cout<<"\n---------------------------------------------";
			int age;
			cout<<"\nEnter the age of the Labaour to be searched :";
			cin>>age;
			int res=h.searchByAge(age);
			cout<<"\nOutput: ";
			if(res==1)
				cout<<"\n\tThe Labaour with given age is present";
			else if(res==2)
				cout<<"\n\tthe Labour with given age is not present";
			else
				cout<<"\n\tHeap is Empty";
		}
		else if(ch==6)
		{
			cout<<"\n----------------------------------------------------------";
			cout<<"\n******Search the Labour details by with smallest age*******";
			cout<<"\n-----------------------------------------------------------";
			Labour res;
			cout<<"\nOutput : ";
			if(!h.isEmpty())
			{
				res=h.findMin();
				cout<<"\n\tThe Labour having smallest age is :"<<res;
			}
			else 
				cout<<"\n\tHeap is empty";
		}
		else if(ch==7)
		{
			cout<<"\n----------------------------------------------------------";
			cout<<"\n******Search the Labour details by with largest age*******";
			cout<<"\n-----------------------------------------------------------";
			Labour res;
			cout<<"\nOutput : ";
			if(!h.isEmpty())
			{
				res=h.findMax();
				cout<<"\n\tThe Labour having largest age is :"<<res;
			}
			else 
				cout<<"\n\tHeap is empty";
		}
		if(ch==8)
		{
			cout<<"\n--------------------------------";
			cout<<"\n*********Display Heap**********";
			cout<<"\n--------------------------------";
			cout<<"\nOutput : ";
			h.displayHeap();
		}
	}while(ch>0 && ch<9);
	
	cout<<"\n----------------Exit---------------\n";
}
