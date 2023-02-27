#include<iostream>
#include"Cloth.h"
using namespace std;
void display(Cloth c)
{
	cout<<"\tCloth no"<<"\tName"<<"\tPrice"<<"\tColour\n";
	cout<<"\t"<<c.getNo()<<"\t\t"<<c.getName()<<"\t"<<c.getPrice()<<"\t"<<c.getColour()<<"\n";
} 
int main()
{
 Cloth c[10],c1;
 int price,no,op,n,i,j,ch,s,k,f,p,cno;
 char name[20],colour[20],co[20],cl[20],na[20];
 cout<<"\n********Program using constructor********\n";
 cout<<"\nEnter the no.of cloths: ";
 cin>>n;
 cout<<"\n Enter the details in order:";
 cout<<"\n1.Cloth name \n2.Price \n3.ClothNo \n4.Colour";
   for(i=0;i<n;i++)
   {
	cout<<"\n Enter the name of Cloth: ";
	cin>>name;
	c[i].setName(name);
	cout<<"\n Enter the price of Cloth: ";
        cin>>price;
        c[i].setPrice(price);
	cout<<"\n Enter the ClothNo of Cloth: ";
        cin>>no;
	c[i].setNo(no);
	cout<<"\n Enter the colour of Cloth: ";
	 cin>>colour;
	c[i].setColour(colour);
    }
    do
     {
	cout<<"\nMenu given: \n1.Display the cloth by number \n2.Update the cloth by cloth number \n3.Display all \n4.Copy cloth details\n5.Exit";
   	cout<<"\nEnter your choice:\t";
   	cin>>op;
   	switch(op)
	    {
	     case 1: cout<<"\nEnter the cloth number: ";
		     cin>>cno;
		     for(i=0;i<10;i++)
	  	     {
		      if(cno==c[i].getNo())
			{
			 cout<<"\n The details about cloth no:\n";
			 display(c[i]);
			}
		     }break;
	    
             case 2: cout<<"\nEnter the cloth number: ";
                     cin>>cno;
		     cout<<"\nEnter the cloth name: ";
                     cin>>cl;
		     for(i=0;i<10;i++)
                     {
                      if(c[i].getNo()==cno)
                        {
                         c[i].setName(cl);
                         display(c[i]);
                        }
                     }break;

	     case 3: cout<<"\n The details are:\n";
		     for(i=0;i<n;i++)
		     {
  		       display(c[i]);
                     }
                     break;
	     case 4: cout<<"\nEnter the cloth no: ";
		     cin>>no;
		     for(i=0;i<10;i++)
			{
			 if(no==c[i].getNo())
			   {
                                c1=c[i];
				display(c1);

			   }
			}  
			 break;
			
	    case 5:break;
			
		}
	    }while(op>=1&&op<=4);

  

}
