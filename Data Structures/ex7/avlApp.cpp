#include"avl.h"
int main()
{
	Labour L;
	AVLTree a1;
	int ch;
	cout<<"\n---------------------------------------------";
	cout<<"\n****************AVL Tree*********************";
	cout<<"\n---------------------------------------------";
	do
	{
		cout<<"\n\n*************Menu**************";
		cout<<"\n--------------------------------";
		cout<<"\n\n1.Hire a labour";
		cout<<"\n2.Vaccancies are free or not";		
		cout<<"\n3.Fire all the labours";			
		cout<<"\n4.Display by inorder";
		cout<<"\n5.Display by preorder";
		cout<<"\n6.Display by postorder";
		cout<<"\n7.Exit";
		cout<<"\n\nEnter the choice :";
		cin>>ch;
		if(ch==1)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n***************Hire a Labour**************";
			cout<<"\n------------------------------------------";
			cout<<"\nEnter the labour details : ";
			cin>>L;
			cout<<"\n\nOutput  :  ";
			AVLNode *newNode=new AVLNode(L,NULL,NULL,0);
			AVLNode *temp=a1.insert(a1.getRoot(),newNode);
			if(temp!=NULL)
				cout<<"\nSuccessfully hired a labour..";
			
		}
		
		
		
		else if(ch==2)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n********Vaccancies are free or not********";
			cout<<"\n------------------------------------------";
			cout<<"\n\nOutput  :  ";
			if(a1.isEmpty())
				cout<<"\n\tVaccancies are free..";
			else
				cout<<"\n\tSome vaccancies are filled...";
		}
		
		else if(ch==3)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n**********Hire all the labours************";
			cout<<"\n------------------------------------------";
			cout<<"\n\nOutput  :  ";
			if(a1.isEmpty())
				cout<<"\n\tVaccancies are already free..";
			else
			{
				a1.makeEmpty();
				cout<<"\n\tVaccencies are free...";
			}
			
		}
		
		else if(ch==4)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n******************Inorder*****************";
			cout<<"\n------------------------------------------";
			cout<<"\n\nOutput  :  ";
			if(!a1.isEmpty())
				a1.inorder(a1.getRoot());
			else
				cout<<"\n\t All the vaccancies are free...No labours are found...";
		}
		
		else if(ch==5)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n******************Preorder****************";
			cout<<"\n------------------------------------------";
			cout<<"\n\nOutput  :  ";
			if(!a1.isEmpty())
				a1.preorder(a1.getRoot());
			else
				cout<<"\n\t All the vaccancies are free...No labours are found...";
		}
		
		else if(ch==6)
		{
			cout<<"\n------------------------------------------";
			cout<<"\n*****************Postorder****************";
			cout<<"\n------------------------------------------";
			cout<<"\n\nOutput  :  ";
			if(!a1.isEmpty())
				a1.postorder(a1.getRoot());
			else
				cout<<"\n\t All the vaccancies are free...No labours are found...";
		}
		
	}while(ch>0 && ch<7);
	
	cout<<"\n*****************Exit*******************\n";
}        

