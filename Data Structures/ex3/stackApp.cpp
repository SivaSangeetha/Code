#include"stack.h"

int main()
{	
	int ch,res,cap,size;
	Labour L;
	cout<<"\n********Array Implementation of Stack ADT********\n";
	cout<<"\nEnter the total Vacancies: ";
	cin>>cap;
	A_Stack a1(cap);
	do
	{
		cout<<"\n\n******************Menu****************";
		cout<<"\n1.Check whether all the vacancies is occupied";
		cout<<"\n2.Check whether all the vacancies are free";
		cout<<"\n3.Hire a labour";		
		cout<<"\n4.Fire a labour";	
		cout<<"\n5.Recetly hired labour";	
		cout<<"\n6.Total Number of labours";	
		cout<<"\n7.Fire all the labours";	
		cout<<"\n8.Display All the Labour Details";
		cout<<"\n9.Exit";
		cout<<"\nEnter the choice: ";
		cin>>ch;

		if(ch==1)
		{
			cout<<"\n-----------------------------------------";
			cout<<"\n***********Is vacancy occupied***********";
			cout<<"\n-----------------------------------------";
			cout<<"\nOutput: ";
			res=a1.isFull();
			if(res==1)
				cout<<"\n\tAll the Vacancies is Full...";
			else
				cout<<"\n\tNo some Vacancies are available...";	
		}

		else if(ch==2)
		{
			cout<<"\n---------------------------------------";
			cout<<"\n************Is Vacancy Free***********";
			cout<<"\n---------------------------------------";
			cout<<"\nOutput:";
			res=a1.isEmpty();
			if(res==1)
				cout<<"\n\tAll the Vacancies are free";
			else
				cout<<"\n\tNo Some of the vacancies are occupied...";
		}
		
		else if(ch==3)
		{
			cout<<"\n-----------------------------------";
			cout<<"\n************Hire a labour**********";
			cout<<"\n-----------------------------------";
			cout<<"\nEnter the data : ";
			cin>>L;
			res=a1.push(L);
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tSuccessfully Hired a Labour....";
			else
				cout<<"\n\tFailed to Hired a Labour....";

		}

		else if(ch==4)
		{
			cout<<"\n-----------------------------------";
			cout<<"\n***********Fire a labour***********";
			cout<<"\n-----------------------------------";
			res=a1.pop();
			cout<<"\nOutput : ";
			if(res==1)
				cout<<"\n\tSuccessfully Fired a Labour...";
			else
				cout<<"\n\tFailed to Fired a Labour...";
		}

		else if(ch==5)
		{
			cout<<"\n----------------------------------------";
			cout<<"\n*********Recetly hired labour***********";
			cout<<"\n----------------------------------------";
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
			{
				Labour l2=a1.peek();
				cout<<"\n\tRecently Hired Labour : "<<l2;
			}
			else
				cout<<"\n\tAll the vaccancies are free...So no Labour is Hired....";
		}

		else if(ch==6)
		{
			cout<<"\n--------------------------------------";
			cout<<"\n********Total Number of labours*******";
			cout<<"\n--------------------------------------";
			res=a1.getSize();
			cout<<"\nOutput : ";
			if(res==0)
				cout<<"\n\tTotal Number of labours : 0 ";
			else 
				cout<<"\n\tTotal Number of labours  : "<<res;
		}

		else if(ch==7)
		{
			cout<<"\n--------------------------------------";
			cout<<"\n*********Fire all the labours*********";
			cout<<"\n--------------------------------------";
			cout<<"\nOutput : ";
			res=a1.makeStackEmpty();
			if(res==1)
				cout<<"\n\tAll the Labours are Fired...Vacany is free..";

			else
				cout<<"\n\tAll the vacancies are free....Firing is not possible...";
		}

		else if(ch==8)
		{
			cout<<"\n-------------------------------------------";
			cout<<"\n*******Display All the Labour Details******";
			cout<<"\n-------------------------------------------";
			cout<<"\nVacancy : ";
			cout<<cap;
			if(!a1.isEmpty())
				a1.displayStack();
			else
				cout<<"\nVacancy is free...No Labour is are hired yet....";
			
		}


	}while(ch>=0 && ch<=8);
		
		cout<<"\n***********************Exit************************\n";
}

