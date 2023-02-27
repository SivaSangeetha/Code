#include"queue.h"
int main()
{
	int cap,ch,res;
	cout<<"\n************Queue ADT Implementation using Arrays***************\n";
	cout<<"\nEnter the total vacancies : ";
	cin>>cap;
	A_Queue a1(cap);
	Labour L;
	do
	{
		cout<<"\n\n********************Menu*******************\n";
		cout<<"\n1.Check whether all the vacancies is occupied";
		cout<<"\n2.Check whether all the vacancies are free";
		cout<<"\n3.Hire a labour";  
		cout<<"\n4.Fire a labour";  
		cout<<"\n5.Display All the Labour Details";   
		cout<<"\n6.Fire all the labours"; 
		cout<<"\n7.Recetly hired labour";
		cout<<"\n8.Total Number of labours"; 
		cout<<"\n9.Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		
		if(ch==1)
		{
			cout<<"\n------------------------------------";
			cout<<"\n********Is vacancy occupied*********";
			cout<<"\n------------------------------------";
			res=a1.isFull();
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tAll the Vacancies is Full...";
			else
				cout<<"\n\tNo some Vacancies are available...";
		}	
		
		else if(ch==2)
		{
			cout<<"\n---------------------------------------";
			cout<<"\n*************Is vacancy Free***********";
			cout<<"\n---------------------------------------";
			res=a1.isEmpty();
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tAll the Vacancies are free";
			else
				cout<<"\n\tNo Some of the vacancies are occupied...";
		}

		else if(ch==3)
		{
			cout<<"\n----------------------------------";
			cout<<"\n***********Hire a labour**********";
			cout<<"\n----------------------------------";
			cout<<"\nEnter the data : ";
			cin>>L;
			res=a1.enqueue(L);
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tSuccessfully Hired a Labour....";
			else
				cout<<"\n\tFailed to Hired a Labour....";

		}
		
		else if(ch==4)
		{
			cout<<"\n----------------------------------";
			cout<<"\n***********Fire a labour**********";
			cout<<"\n----------------------------------";
			res=a1.dequeue();
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tSuccessfully Fired a Labour...";
			else
				cout<<"\n\tFailed to Fired a Labour...";
		}
	
		else if(ch==5)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n******Display All the Labour Details******";
			cout<<"\n------------------------------------------";
			cout<<"\nVacancies :";
			cout<<cap;
			if(!a1.isEmpty())
				a1.displayQueue();
			else
				cout<<"\nVacancy is free...No Labour is are hired yet...";
		}
		
		else if(ch==6)
		{
			cout<<"\n-------------------------------------";
			cout<<"\n********Fire all the labours********";
			cout<<"\n-------------------------------------";
			res=a1.makeQueueEmpty();
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tAll the Labours are Fired...Vacany is free..";
			else
				cout<<"\n\tAll the vacancies are free....Firing is not possible...";
		}

		else if(ch==7)
		{
			cout<<"\n--------------------------------------";
			cout<<"\n*********Recetly hired labour**********";
			cout<<"\n--------------------------------------";
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
			{
				Labour l1=a1.peek();
				cout<<"\n\tRecetly hired labour is : " <<L;
			}
			else
				cout<<"\n\tAll the vaccancies are free...So no Labour is hired.....";
		}

		else if(ch==8)
		{
			cout<<"\n--------------------------------------";
			cout<<"\n*******Total Number of labours********";
			cout<<"\n--------------------------------------";
			cout<<"\nOutput : ";
			res=a1.getSize();
			if(res==0)
				cout<<"\n\tTotal Number of labours is 0";
			else
				cout<<"\n\tTotal Number of labours : "<<res;
		}

	}while(ch>0 && ch<9);

	cout<<"\n\n****************Exit***************\n";
}

