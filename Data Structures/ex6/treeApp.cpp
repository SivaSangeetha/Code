#include"tree.h"
int main()
{
	int ch;
	BST a1;
	Labour L;
	cout<<"\n---------------------------------------------------------------------------";
	cout<<"\n*************************Binary Search Tree********************************";
	cout<<"\n---------------------------------------------------------------------------";
	do
	{
		cout<<"\n\n**********************Menu************************\n";
		cout<<"\n1.Check whether vacancies are free";
		cout<<"\n2.Hire a Labour";
		cout<<"\n3.Fire a Labour";
		cout<<"\n4.Display the labours by inorder traversal";
		cout<<"\n5.Display the labours by preorder traversal";
		cout<<"\n6.Display the labours by postorder traversal";
		cout<<"\n7.Search a Labour";
		cout<<"\n8.Find the Labour with Minimun Commision Per Day";
		cout<<"\n9.Find the Labour with Maximum Commision Per Day";
		cout<<"\n10.Get Number of Labours hired";
		cout<<"\n11.Exit";
		cout<<"\nEnter your choice : ";
		cin>>ch;

		if(ch==1)
		{
			cout<<"\n------------------------------------------------";
			cout<<"\n*************Vacancies free or not**************";
			cout<<"\n------------------------------------------------";
			cout<<"\nOutput : ";
			if(a1.isEmpty())
				cout<<"\n\tVaccancies are free...";
			else
				cout<<"\n\tSome vaccacies are filled...";
		}

		else if(ch==2)
		{
			cout<<"\n------------------------------------------------";
			cout<<"\n***************Hire a Labour********************";
			cout<<"\n------------------------------------------------";
			cout<<"\nEnter the labour Details: ";
			cin>>L;
			cout<<"\nOutput:";
			TreeNode *newNode=new TreeNode(L,NULL,NULL);
			if(a1.insertTree(newNode)==NULL)
				cout<<"\n\tThere cannot be labour with same charges..Insertation f:ailed..";
			else
				cout<<"\n\tSuccessfully hired a labour....";
		}
		
		else if(ch==3)
        {
			cout<<"\n-----------------------------------------------";
			cout<<"\n***************Fire a Labour*******************";
			cout<<"\n-----------------------------------------------";
			int com;
			cout<<"\nEnter the Commision Per day of the labour :";
			cin>>com;
			Labour l(com);
			Labour abc;
			cout<<"\nOutput:";
			if(a1.isEmpty())
				cout<<"\n\tDeletion failed..";
			else
			{
				Labour L1=a1.deleteTree(l);
				if(L1==abc)
					cout<<"\n\tGiven Labour is not Present...";
				else
					cout<<"\n\tSuccessfully fired a labour....";
					cout<<L1;
			}
		}
		
		
		else if(ch==4)
		{
			cout<<"\n------------------------------------------------";
			cout<<"\n****Display the labours by inorder traversal****";
			cout<<"\n------------------------------------------------";
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
				a1.inorder(a1.getRoot());
			else
				cout<<"\n\tAll the Vacancies are free...No labours are found...";
		}

		else if(ch==5)
        {
            cout<<"\n------------------------------------------------";
			cout<<"\n****Display the labours by preorder traversal****";
			cout<<"\n------------------------------------------------";
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
				a1.preorder(a1.getRoot());
			else
				cout<<"\n\tAll the Vacancies are free...No labours are found...";
		}
		
		else if(ch==6)
        {
			cout<<"\n------------------------------------------------";
			cout<<"\n****Display the labours by postorder traversal****";
			cout<<"\n------------------------------------------------";
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
				a1.postorder(a1.getRoot());
			else
				cout<<"\n\tAll the Vacancies are free...No labours are found...";
        }

 		else if(ch==7)
		{
			cout<<"\n-----------------------------------------------";
			cout<<"\n****************Search a Labour****************";
			cout<<"\n-----------------------------------------------";
			int comPerday;
			cout<<"\nEnter the commission Per day to search the  labour: ";
			cin>>comPerday;
			Labour l(comPerday);
			Labour abc;
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
			{
				if(a1.search(l)==abc)
					cout<<"\nNo Labour is found with this commission per day...";
				else
				{
					L=a1.search(l);
					cout<<"\n\tThe Labour is found...";
					cout<<L;
				}
			}
			else
				cout<<"\n\tVacancies are free..No Labour is Found..So we cannot search a labour..";
	
        }

        else if(ch==8)
		{
			cout<<"\n-----------------------------------------------";
			cout<<"\n*Find the Labour with Minimun Commision Per Day*";
			cout<<"\n-----------------------------------------------";
			cout<<"\nOutput : ";
			if(!a1.isEmpty())
			{
				L=a1.findMin();
				cout<<"\n\nThe Labour with Minimum Commision Per Day is : ";
				cout<<L;
			}
			else
				cout<<"\n\tVacancies are free..No Labours are found..";
        }
		
		else if(ch==9)
        {
			cout<<"\n-----------------------------------------------";
			cout<<"\n*Find the Labour with Maximum Commision Per Day*";
			cout<<"\n-----------------------------------------------";
            cout<<"\nOutput : ";
			if(!a1.isEmpty())
			{
				L=a1.findMax();
				cout<<"\n\nThe Labour with Maximum Commision Per Day is : ";
				cout<<L;
			}
			else
				cout<<"\n\tVacancies are free..No Labours are found..";
		}

        else if(ch==10)
        {
			cout<<"\n-----------------------------------------------";
			cout<<"\n*********Get Number of Labours hired***********";
			cout<<"\n-----------------------------------------------";	
			cout<<"\nOutput : ";
			int cnt=0;
			int size=a1.getSize(a1.getRoot(),cnt);
			cout<<"\n\tNumber of Labours hired : "<<size;
        }
		
	}while(ch>0 && ch<=10);

	cout<<"\n------------------------Exit------------------------------\n";
}

