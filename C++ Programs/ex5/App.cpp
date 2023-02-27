#include<iostream>
#include"Cloth.h"
using namespace std;
int main()
{
		int op,x;
		Cloth c1,c2,c3,c4,n,c[10];
	do 
	{
	   cout<<"\n********Welcome to my app operator overloading********\n";
           cout<<"\nMenu given:\n1.Unary \n2.Binary \n3.Assignment \n4.Subscript \n5.Relational operator \n6.Exit";
	   cout<<"\nEnter the choice: ";
	   cin>>op;
	   switch(op)
		{
		case 1:cout<<"\n*******Unary operator*******";
		       cin>>c1;
			c2=c1;
		       cout<<"\n****Pre-increment using member function****";
		           {
				++c1;
			   	cout<<c1;
			   }
		      cout<<"\n****Post-increment using non-member function***";
			{                         
                                c1++;
                                cout<<c1;
			}break;
		
		       
	        case 2:cout<<"\n*******Binary operator*******";
		       cin>>c1>>c2;
		       c3=c1;
                       cout<<"\n****Addition operator using member function****";
                           {
                                c3=c1+c2;
                                cout<<c3;
                           }
                      cout<<"\n****Subraction operator using non-member function***";
                        {
                                c3=c1-c2;
                                cout<<c3;
                        }break;
	
	 	case 3:cout<<"\n*******Assignment operator*******";
		       cin>>c1;
			cin>>c2;
                       cout<<"\n****Assignment operator using member function****";
                       
			   {
				c1=c2;
				cout<<c2;
			   }
                        break;
		case 4:cout<<"\n*******Sub-script operator*******";
                       cin>>c1;
		       cout<<"\n****Sub script operator using member function****";
                      	    { 
			        cout<<"\nEnter the character of name to start with: ";
				cin>>x;
                                cout<<c1[x];
                            }
                        break; 

		case 5:cout<<"\n*******Relational operator*******";
		       cin>>c1>>c2;
                       cout<<"\n****Equality operator using member function****";
                           if(c1==c2)
				
				cout<<"\nPrices are equal";
				else
				cout<<"\nPrices are not equal";
		       cout<<"\n****Not Equal operator using non-member function***";
			  if(c1!=c2)
                                cout<<"\nPrices are not equal";
                                else
                                cout<<"\nPrices are equal"; 
                                
			 break;
		case 6:cout<<"\nExit";
			 break;

		}
		}while(op<6);
}
