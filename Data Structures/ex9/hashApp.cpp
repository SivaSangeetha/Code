#include"hash.h"
int main()
{
    int s;
    cout<<"\nENTER THE SIZE OF THE QUEUE : ";
    cin>>s;
    int choice;
    int key;
    HashTblADT has(s);
    do
    { 
        cout<<"\n**************Menu************\n";
        cout<<"\n1.INSERT INTO HASH TABLE";
        cout<<"\n2.DISPLAY ALL DETAILS AVAILABLE IN HASH TABLE";
        cout<<"\n3.TO DELETE PARTICULAR LABOUR BY GIVEN ID";
        cout<<"\n4.SEARCH THE STUDENT INFORMATION BY GIVEN ID";
        cout<<"\n5.TO CHECK HASH TABLE IS EMPTY";
        cout<<"\n6.TO CHECK HASH TABLE IS FULL ";
        cout<<"\n7.Exit";
        cout<<"\n"<<"Enter the choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:
                  {
	             cout<<"\n---------------------------------------------";
		     cout<<"\n*****Insert Labour details into the heap****";
      		     cout<<"\n---------------------------------------------";
                     Labour L1;
		     cout<<"\nEnter the Labour details: ";
                     cin>>L1;
                     int res;
		     cout<<"\nOutput :";
                     if(!has.isFull())
                     {
                        res = has.insertDetails(L1);
			cout<<"\n\tInsertion is successful..";
                        has.displayHash();
                     }
                     else
                     {
                        cout<<"HASH TABLE IS FULL"<<endl;
                     } 
                     break;
                  }
           case 2:{
		     cout<<"\n--------------------------------";
	             cout<<"\n*********Display Heap**********";
		     cout<<"\n--------------------------------";
		     cout<<"\nOutput : ";
                     if(!has.isEmpty())
                     {
                        cout<<"\n\tTHE DETAILS STORED IN HASHTABLE ARE"<<endl;
                        has.displayHash();
                     }
                     else
                     {
                        cout<<"\n\tHASH TABLE IS EMPTY..."<<endl;
                     }
                     break;
                   } 
            case 3:{
		      cout<<"\n---------------------------------------------";
		      cout<<"\n*****Remove Labour details from the heap****";
		      cout<<"\n---------------------------------------------";
                      cout<<"\nENTER THE ID TO DELETE THE Labour DETAILS: ";
                      cin>>key;
                      int res;
                      cout<<"\nOutput: ";
	              if(!has.isEmpty())
                      {
                          res = has.deleteById(key);
                          if(res == 3)
                          {
                              cout<<"THE LABOUR ID  "<<key<<"  IS DELETED SUCCESSFULLY"<<endl;
                          }
                          else 
                          {
                              cout<<"THE lABOUR ID IS NOT FOUND"<<endl;
                          }
                       }
                       else
                       {
                           cout<<"HASH TABLE IS EMPTY ...CANNOT PERFORM DELETE OPERATION"<<endl;
                               
                        }
                        break;
                    }
              case 4:{
			 cout<<"\n---------------------------------------------";
			 cout<<"\n******Search the Labour details by age*******";
			 cout<<"\n---------------------------------------------";
                         cout<<"\nENTER THE ID TO SEARCH FOR THE STUDENT DETAILS: ";
                         cin>>key;
                         int res;
			 cout<<"\nOutput : ";
                         if(!has.isEmpty())
                         {
                             res = has.searchId(key);
                             if(res == 2)
                             {
                                 cout<<"\n\tTHE GIVEN ID IS NOT FOUND";
                             }
                             else
                             {
                                cout<<"\n\t GIVEN ID IS PRESENT IN THE HASH TABLE";
                             }
                         }
                         else
                         {
                             cout<<"\n\tTHE HASH TABLE IS EMPTY";
                         }
                         break;
                       }
               case 5:{
			 cout<<"\n----------------------------------------------";
			 cout<<"\n*****Check whether the heap is Empty or not****";
			 cout<<"\n----------------------------------------------";
                         int res = has.isEmpty();
			 cout<<"\nOutput :";
                         if(res == 1)
                         {
                            cout<<"\n\tHASH TABLE IS EMPTY....";
                         }
                         else
                         {
                            cout<<"\n\tHASH TABLE IS NOT EMPTY";
                         }
                         break;
                       }
              case 6:{
			cout<<"\n----------------------------------------------------";
			cout<<"\n*****Check whether the hash table is Full or not****";
			cout<<"\n----------------------------------------------------";
			cout<<"\nOutput :";
                        int res = has.isFull();
                        if(res == 1)
                       {
                           cout<<"HASH TABLE IS FULL...";
                       }
                       else
                       {
                         cout<<"HASH TABLE IS NOT FULL..";
                       }
                       break;
                    }
			default:
				cout<<"Choice is Invalid\n";
        }
    }while(choice<7);     
}






