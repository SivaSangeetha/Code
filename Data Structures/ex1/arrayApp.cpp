#include"array.h"

int main()
{
        int ch,cap,size,i,res,ele,pos;
	cout<<"\n**********List ADT implementation using Arrays**********\n";
	cout<<"\nEnter the capacity of the array: ";
	cin>>cap;
	cout<<"\nEnter the size of the array: ";
	cin>>size;
	Labour l[size];
	if(size!=0)
		cout<<"\n*********Enter the Datas*******";
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter Data "<<i+1<<":";
		cin>>l[i];
	}
	A_List a1(l,size,cap);
	do
	{
		Labour L;
		cout<<"\n\n***************Menu****************";
		cout<<"\n___________________________________";
  	        cout<<"\n1.isFull";
		cout<<"\n2.isEmpty";
		cout<<"\n3.Insert At First";
		cout<<"\n4.Insert At Last";
		cout<<"\n5.Insert By Position";
		cout<<"\n6.Delete At First";
		cout<<"\n7.Delete At Last";
		cout<<"\n8.Display List";
		cout<<"\n9.Make List Empty";
		cout<<"\n10.Search At First";
		cout<<"\n11.Search At last";
		cout<<"\n12.Search An Element";
		cout<<"\n13.Retrive Element At Given Index";
		cout<<"\n14.Delete By Position";
		cout<<"\n15.Delete By Element"; 
		cout<<"\n16.Exit";
		cout<<"\n___________________________________";
		cout<<"\nEnter your choice: ";
		cin>>ch;
	
		if(ch==1)
		{
			cout<<"\n*********************************";
			cout<<"\n_______List is full or not_______";
			cout<<"\n*********************************\n";
			res=a1.isFull();
			if(res==1)
				cout<<"\n\tList is full";
			else
				cout<<"\n\tList is not full";	
		}
		else if(ch==2)
		{
			cout<<"\n*********************************";
			cout<<"\n_______List is empty or not______";
			cout<<"\n*********************************\n";
			res=a1.isEmpty();
          		 if(res==1)
                		cout<<"\n\tList is Empty";
           		 else
               			cout<<"\n\tList is not Empty";
		}
		else if(ch==3)
		{
			cout<<"\n************************************";
			cout<<"\n------Insert Element At First-------";
			cout<<"\n************************************";
			cout<<"\nEnter the data : ";
			cin>>L;
			res=a1.insertAtFirst(L);
           		if(res==1)
               			 cout<<"\nInsertion is successful";
           		 else
               			 cout<<"\nInsertion  is failed";
		}
		else if(ch==4)
        	{
			cout<<"\n************************************";
			cout<<"\n--------Insert Element At Last------";
			cout<<"\n************************************";
			cout<<"\nEnter the data : ";
			cin>>L;
			res=a1.insertAtLast(L);
			if(res==1)
				cout<<"\nInsertion is successful";
			else
				cout<<"\nInsertion  is failed";
		}
		else if(ch==5)
       		{
			cout<<"\n***************************************";
			cout<<"\n-------Insert Element By Position------";
			cout<<"\n***************************************";
			cout<<"\nEnter the position to insert: ";
			cin>>pos;
			cout<<"\nEnter the data : ";
			cin>>L;
			int res=a1.insertByPos(pos,L);
			if(res==1)
				cout<<"\nInsertion is successful";
			else if(res==-2)
				cout<<"\nInvalid Position";
			else 
				cout<<"\nInsertion  is failed";
		}
		
		else if(ch==6)
        	{
			cout<<"\n************************************";
			cout<<"\n--------Delete Element At First------";
			cout<<"\n************************************";
			Labour ress=a1.deleteAtFirst();
			Labour abc;
			if(!(ress==abc))
				cout<<"\nDeleted Data:\n"<<ress;
			else
				cout<<"\nDeletion  is failed";
		}

		else if(ch==7)
        	{
			cout<<"\n************************************";
			cout<<"\n--------Delete Element At Last------";
			cout<<"\n************************************";
			Labour ress=a1.deleteAtLast();
			Labour abc;
			if(!(ress==abc))
				cout<<"\nDeleted Data:\n"<<ress;
			else
				cout<<"\nDeletion  is failed";
		}

		else if(ch==8)
		{
			cout<<"\n**********************************";
			cout<<"\n-----------Display List-----------";
			cout<<"\n**********************************";
			a1.displayList();
		}
		else if(ch==9)
        	{
			cout<<"\n**********************************";
			cout<<"\n---------Make List Empty----------";
			cout<<"\n**********************************";
			res=a1.makeListEmpty();
			if(res==1)
				cout<<"\nDeletion is successful...list is empty";
			else
				cout<<"\nDeletion  is failed....list is not empty";
        	}
		else if(ch==10)
		{
			cout<<"\n************************************";
			cout<<"\n--------Search Element At First------";
			cout<<"\n************************************";
			int com;
			cout<<"\nEnter the commission Per day:  ";
			cin>>com;
			Labour l(com);
			Labour abc;
			if(!a1.isEmpty())
			{
				Labour ans=a1.searchAtFirst(l);
				if(ans==abc)
					cout<<"\nElement is not found";
				else
				{
					cout<<"\nElement is found";
					cout<<ans;
				}
			}
			else
				cout<<"\nList is empty...Element is not found..";
		}
		else if(ch==11)
        	{
			cout<<"\n************************************";
			cout<<"\n--------Search Element At Last------";
			cout<<"\n************************************";
			int com;
			cout<<"\nEnter the commission Per day:  ";
			cin>>com;
			Labour l(com);
			Labour abc;
			Labour ans=a1.searchAtLast(l);
			if(!a1.isEmpty())
			{
				if(ans==abc)
					cout<<"\nElement is not found";
				else
				{
					cout<<"\nElement is found";
					cout<<ans;
				}
			}
			else
				cout<<"\nList is empty...Element is not found..";
		}                            
		else if(ch==12)
        	{
			cout<<"\n************************************";
			cout<<"\n----------Search An Element---------";
			cout<<"\n************************************";
			int com;
			cout<<"\nEnter the commission Per day:  ";
			cin>>com;
			Labour l(com);
			Labour abc;
			Labour ans=a1.searchAnEle(l);
			if(!a1.isEmpty())
			{
				if(ans==abc)
					cout<<"\nElement is not found";
				else
					cout<<"\nElement is found";
					cout<<ans;
			}
			else
				cout<<"\nList is empty...Element is not found..";
        	}
		
		else if(ch==13)
       		{
    	    		int index;
	   		cout<<"\n***************************************";
        		cout<<"\n---Retrive Element At Given Position---";
            		cout<<"\n***************************************";
			cout<<"\nEnter the index to reterive: ";
            		cin>>index;
			if((a1.getSize()>index) &&(index>=0))
			{
				L=a1.retriveEleAtGnIndex(index);
				cout<<"\nRetrived  element:  ";
				cout<<L;
			}
			else
				cout<<"\nRetrievel is not possible";
		}
		else if(ch==14)
		{
			cout<<"\n***************************************";
			cout<<"\n-------Delete Element By Position------";
			cout<<"\n***************************************";
			cout<<"\nEnter the position to delete: ";
			cin>>pos;
			Labour abc;
			Labour ress=a1.deleteByPos(pos);
		if(!a1.isEmpty())
		{
			if(!(ress==abc))
				cout<<"\nDeleted Data:\n"<<ress;
			else
                		cout<<"\nInvalid Position";
		}
           	 else
                cout<<"\nDeletion is failed";
		}
		else if(ch==15)
        	{
			cout<<"\n************************************";
			cout<<"\n---------Delete By Element ---------";
			cout<<"\n************************************";
			cout<<"\nEnter the commision per day to delete: ";
			int com;
			cin>>com;
			if(a1.isEmpty())
				cout<<"\nList is Empty...deletion is failed..";
			else
			{
				Labour ress=a1.deleteByEle(com);
				Labour abc;
				if(!(ress==abc))
				cout<<"\nDeleted Data:\n"<<ress;
				else
				cout<<"\nDeletion is failed";
			}
		}

	}while(ch>=0 && ch<16);

	cout<<"\n********************Exit**********************\n";
}


