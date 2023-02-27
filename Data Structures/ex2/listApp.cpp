#include"list.h"

int main()
{
	int size,i,ch,res,pos;
	L_List a1;
	cout<<"\n*******Singly Linked List Of List ADT*******\n";
	do
	{
		Labour L,L1,L2;
		cout<<"\n\n*****************Menu*****************\n";
		cout<<"\n--------------------------------------";
		cout<<"\n1.isEmpty";
		cout<<"\n2.Insert At First";
		cout<<"\n3.Insert At Last";
		cout<<"\n4.Insert At Given Position";
		cout<<"\n5.Insert By After Element";
		cout<<"\n6.Insert By Before Element";
		cout<<"\n7.Delete At First";
		cout<<"\n8.Delete At Last";
		cout<<"\n9.Delete By Position";
		cout<<"\n10.Make List Empty";
		cout<<"\n11.Display List";
		cout<<"\n--------------------------------------\n";
		cout<<"\nEnter your choice: ";
		cin>>ch;	

		if(ch==1)
		{
			cout<<"\n----------------------------------";
			cout<<"\n******List is Empty  or Not*******";
			cout<<"\n----------------------------------";
			res=a1.isEmpty();
			if(res==1)
				cout<<"\nList is Empty";
			else
				cout<<"\nList is not  Empty";
		}

		else if(ch==2)
		{
			cout<<"\n---------------------------------";
			cout<<"\n*********Insert At First*********";
			cout<<"\n---------------------------------\n";
			cout<<"\nEnter the Datas: ";
			cin>>L;
			Node *newNode=new Node(L,NULL);
			res=a1.insertAtFirst(newNode);
			if(res==1)
				cout<<"\nInsertion is Successful";
			else
				cout<<"\nInsertion is Failed";

		}

		else if(ch==3)
                {
                        cout<<"\n---------------------------------";
                        cout<<"\n**********Insert At Last*********";
                        cout<<"\n---------------------------------\n";
                        cout<<"\nEnter the Datas: ";
                        cin>>L;
			Node *newNode=new Node(L,NULL);
                        res=a1.insertAtLast(newNode);
			if(res==1)
				cout<<"\nInsertion is Successful";
			else
				cout<<"\nInsertion is Failed";
                }

		else if(ch==4)
		{
			cout<<"\n----------------------------------";
			cout<<"\n*******Insert By Position*********";
			cout<<"\n----------------------------------";
			cout<<"\nEnter the position to be inserted: ";
			cin>>pos;
			cout<<"\nEnter the datas: ";
			cin>>L;
			Node *newNode=new Node(L,NULL);
			res=a1.insertByPos(pos,newNode);
			if(res==1)
				cout<<"\nInsertion is Successful";
			else
				cout<<"\nInsertion is Failed";
		}

		else if(ch==5)
                {
                        cout<<"\n----------------------------------";
                        cout<<"\n******Insert By After Element*****";
                        cout<<"\n----------------------------------";
                        cout<<"\nEnter the after element: ";
                        cin>>L1;
			cout<<"\nEnter the element to be inserted: ";
			cin>>L2;
			Node *newNode=new Node(L2,NULL);
			res=a1.insertAfterGnEle(newNode,L1);
			if(res==1)
				cout<<"\nInsertion is Successful";
			else
				cout<<"\nInsertion is Failed";
                 }

		 else if(ch==6)
                 {
                        cout<<"\n----------------------------------";
                        cout<<"\n*****Insert By Before Elememt*****";
                        cout<<"\n----------------------------------";
                        cout<<"\nEnter the before element: ";
                        cin>>L1;
			cout<<"\nEnter the element to be inserted: ";
			cin>>L2;
			Node *newNode=new Node(L2,NULL);
			res=a1.insertBeforeGnEle(newNode,L1);
                        if(res==1)
                                cout<<"\nInsertion is Successful";
                        else
                                cout<<"\nInsertion is Failed";
		 }

		 else if(ch==7)
		 {
			cout<<"\n-----------------------------------";
			cout<<"\n**********Delete At First**********";
			cout<<"\n-----------------------------------";
			Labour abc;
			Labour ress=a1.deleteAtFirst();
			if(!(ress==abc))
				cout<<"\nDeleted Data: \n"<<ress;
			else
				cout<<"\nDeletion is Unsuccessful\n";
		 }

		 else if(ch==8)
                 {
                        cout<<"\n-----------------------------------";
                        cout<<"\n**********Delete At Last**********";
                        cout<<"\n-----------------------------------";
			Labour abc;
		        Labour ress=a1.deleteAtLast();
                        if(!(ress==abc))
                                cout<<"\nDeleted Data:\n"<<ress;
                        else
                                cout<<"\nDeletion is Failed";
                 }
		
		 else if(ch==9)
                 {
                        cout<<"\n-----------------------------------";
                        cout<<"\n********Delete By Position*********";
                        cout<<"\n-----------------------------------";
			cout<<"\nEnter the position to be deleted : ";
			cin>>pos;
			Labour abc;
			if(!a1.isEmpty())
			{
				Labour ress=a1.deleteByPos(pos);
			        if(!(ress==abc))
                                	cout<<"\nDeleted Data: \n"<<ress;
                       		else
                                	cout<<"\nDeletion is Failed..Invalid Position";
			}
			else
				cout<<"\nList Is Empty\n";
                }

		else if(ch==10)
                {
                        cout<<"\n-----------------------------------";
                        cout<<"\n**********Make List Empty**********";
                        cout<<"\n-----------------------------------";
			a1.makeListEmpty();
                        if(res==1)
                                cout<<"\nList is Empty.....Deletion is Successful";
                }
		
		else if(ch==11)
		{
			cout<<"\n------------------------------------";
			cout<<"\n************Display List*************";
			cout<<"\n------------------------------------\n";
			res=a1.displayList();
			if(res==1)
				cout<<"Are the Datas present in list...";
			else
				cout<<"List is Empty";
		}





	}while(ch>=0 && ch<12);

	cout<<"\n*********************Exit*********************\n";

}


