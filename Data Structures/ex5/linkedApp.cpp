#include"linked.h"
int main()
{
	int op,ch,res;
	do
	{
		cout<<"\n************Linked List Implementation************\n";
		cout<<"\n1.Stack ADT";
		cout<<"\n2.Queue ADT";
		cout<<"\n3.Exit\n";
		cout<<"\nEnter your choice : ";
		cin>>op;
		L_Stack a1;
		L_Queue b1;
		Labour L;
		if(op==1)
		{
			cout<<"\n**************************Stack ADT**********************************\n";
			do
			{
				cout<<"\n******************Menu******************\n";
				cout<<"\n1.Check whether all the vacancies are free"; 
				cout<<"\n2.Hire a labour";             	
				cout<<"\n3.Fire a labour";             		
				cout<<"\n4.Recetly hired labour";     			
				cout<<"\n5.Total Number of labours";		    
				cout<<"\n6.Fire all the labours";      			 
				cout<<"\n7.Display All the Labour Details";    	
				cout<<"\n8.Exit";
				cout<<"\nEnter the choice: ";
				cin>>ch;
				
				if(ch==1)
				{
					cout<<"\n----------------------------------------";
					cout<<"\n*********Is vacancy free************";
					cout<<"\n----------------------------------------";
					res=a1.isEmpty();
					cout<<"\nOutput : ";
					if(res==1)
		                                cout<<"\n\tAll the Vacancies are free";
                		        else
                               		 	cout<<"\n\tNo Some of the vacancies are occupied...";
				}

				if(ch==2)
                                {
                                        cout<<"\n---------------------------------------";
                                        cout<<"\n************Hire a labour**************";
                                        cout<<"\n---------------------------------------";
					cout<<"\nEnter the Datas: ";
					cin>>L;
					Node *newNode=new Node(L,NULL);
                                        res=a1.push(newNode);
                                        cout<<"\nOutput : ";
                                        if(res==1)
	                                	cout<<"\n\tSuccessfully Hired a Labour....";
        		                else
                        		        cout<<"\n\tFailed to Hired a Labour....";

                                }
				
				 if(ch==3)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n************Fire a labour***************";
                                        cout<<"\n----------------------------------------";
					cout<<"\nOutput : ";
					if(a1.isEmpty())
						cout<<"\n\tVacancy is free...So no labour can be fired...";
					else
					{
						Labour l1=a1.pop();
                                                cout<<"\n\tSuccessfully fired a labour...";
						cout<<"\n\nThe fired labour is : ";
						cout<<l1;
					}
                                }
					
				if(ch==4)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n**********Recetly hired labour**********";
                                        cout<<"\n----------------------------------------";
                                        cout<<"\nOutput : ";
                                        if(a1.isEmpty())
                                                cout<<"\n\tAll the Vacancy is free...So no labour is hired...";
                                        else
                                        {
                                                Labour l1=a1.peek();
                                                cout<<"\n\tRecetly hired labour is : ";
                                                cout<<l1;
                                        }
                                }

				if(ch==5)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n*********Total Number of labours********";
                                        cout<<"\n----------------------------------------";
                                        res=a1.getSize();
                                        cout<<"\nOutput : ";
                                        cout<<"\n\tTotal Number of labours is :"<<res;
                                }

			        if(ch==6)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n*********Fire all the labours***********";
                                        cout<<"\n----------------------------------------";
					if(a1.isEmpty())
					{
						cout<<"\nAll the vacancies are free....Firing is not possible...";
					}
					else
					{
                                        	a1.makeStackEmpty();
                                                cout<<"\n\tAll the Labours are Fired...Vacany is free.....";
					}
                                }

				 if(ch==7)
  				 {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n*****Display All the Labour Details******";
                                        cout<<"\n----------------------------------------";
                                        cout<<"\nOutput : ";
					if(a1.isEmpty())
                                                cout<<"\n\tVacancy is free...No Labour is are hired yet....";
					else
						a1.displayStack();
				}


			}while(ch>0 &&  ch<8);

			cout<<"\n*******************You have exited  from Stack ADT********************\n\n";
		}

		if(op==2)
		{
			cout<<"\n***************************Queue ADT*********************************\n";
			do
			{
				cout<<"\n******************Menu*********************\n";
				cout<<"\n1.Check whether all the vacancies are free";   
                                cout<<"\n2.Hire a labour";                          
                                cout<<"\n3.Fire a labour";                             
                                cout<<"\n4.Recetly hired labour";                      
                                cout<<"\n5.Total Number of labours";                  
                                cout<<"\n6.Fire all the labours";                        
                                cout<<"\n7.Display All the Labour Details";           
                                cout<<"\n8.Exit";
				cout<<"\nEnter the choice: ";
                                cin>>ch;

                                if(ch==1)
                                {
                                        cout<<"\n------------------------------------";
                                        cout<<"\n*********Is Vaccancy Free***********";
                                        cout<<"\n------------------------------------";
                                        res=b1.isEmpty();
                                        cout<<"\nOutput : ";
                                        if(res==1)
		                                cout<<"\n\tAll the Vacancies are free";
                		        else
                                		cout<<"\n\tNo Some of the vacancies are occupied...";

                                }

				if(ch==2)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n*************Hire a labour**************";
                                        cout<<"\n----------------------------------------";
                                        cout<<"\nEnter the Datas: ";
                                        cin>>L;
                                        Node *newNode=new Node(L,NULL);
                                        res=b1.enqueue(newNode);
                                        cout<<"\nOutput : ";
                                        if(res==1)
                               	 		cout<<"\n\tSuccessfully Hired a Labour....";
                        		else
                               			cout<<"\n\tFailed to Hired a Labour....";

                                }

				if(ch==3)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n**************Fire a labour*************";
                                        cout<<"\n----------------------------------------";
                                        cout<<"\nOutput : ";
                                        if(b1.isEmpty())
                                                cout<<"\n\tVacancy is free...So no labour can be fired...";
                                        else
                                        {
                                                Labour l1=b1.dequeue();
                                                cout<<"\n\tSuccessfully fired a labour...";
                                                cout<<"\n\nThe fired labour is : ";
                                                cout<<l1;
                                        }
                                }

				if(ch==4)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n*********Recetly hired labour***********";
                                        cout<<"\n----------------------------------------";
                                        cout<<"\nOutput : ";
                                        if(b1.isEmpty())
                                                cout<<"\n\tAll the Vacancy is free...So no labour can be fired...";
                                        else
                                        {
                                                Labour l1=b1.peek();
                                                cout<<"\n\tRecetly hired labour is : ";
                                                cout<<l1;
                                        }
                                }

				if(ch==5)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n*********Total Number of labours********";
                                        cout<<"\n----------------------------------------";
                                        res=b1.getSize();
                                        cout<<"\nOutput : ";
                                        cout<<"\n\tTotal Number of labours is :"<<res;
                                }

				 if(ch==6)
                                {
                                        cout<<"\n----------------------------------------";
                                        cout<<"\n**********Fire all the labours**********";
                                        cout<<"\n----------------------------------------";
                                        if(b1.isEmpty())
						cout<<"\n\tAll the vacancies are free....Firing is not possible...";
                                        else
						b1.makeQueueEmpty();
                                                cout<<"\n\tAll the Labours are Fired...Vacany is free.....";
                                }


				if(ch==7)
                                {
                                        cout<<"\n-----------------------------------------";
                                        cout<<"\n*****Display All the Labour Details******";
                                        cout<<"\n-----------------------------------------";
                                        cout<<"\nOutput : ";
                                        if(b1.isEmpty())
                                                cout<<"\n\tVacancy is free...No Labour is are hired yet...";
					else
                                                b1.displayQueue();
                                }


			}while(ch>0 && ch<8);
		
			cout<<"\n******************You have exited from Queue ADT********************\n\n";
			
		}

	}while(op>0 && op<3);

	cout<<"\n********************************You have Exited********************************************\n\n";
}

