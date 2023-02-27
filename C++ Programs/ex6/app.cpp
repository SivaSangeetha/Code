#include<string.h>
#include"Cloth.h"
#include"Material.h"
#include<iostream>
using namespace std;
int main()
{
	Cloth *ptrcloth;
	int ch,price,discount,clothno,length;
	do
	{	
	 cout<<"\n1.Material \n2.Readymade \n3.Exit";
	 cout<<"\nEnter your choice: ";
	 cin>>ch;
	 switch(ch)
		{
		 case 1:cout<<"\nEnter the clothno,discount,price";
			cin>>clothno>>discount>>price;
			name=new char[30];
			cin>>name
			ptrcloth=new Material(clothno,name,price,discount,length);
			break;
		
		}
	cout<<"\nThe discount is: \n";
	ans=ptrcloth->computeDiscount();
	cout<<ans;
	cout<<"\ndisplay";
	ptrcloth->display();

	}while(ch>=1);
/*	 cout<<"\nDiscount Computation of the given cloth is";
	 cout<<ptrcloth->computeDiscount();
	 cout<<"\nType of the object chosen is: ";
	 cout<<typeid(ptrcloth).name();
	 Material *c1=dynamic<Material*>ptrcloth;
	 if(c1!=NULL)
		c1->getDiscount();
	 else*/

}



