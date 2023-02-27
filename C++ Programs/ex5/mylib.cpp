#include"Cloth.h"
#include<iostream>
using namespace std;
istream& operator>>(istream &myin,Cloth &c)
{
	cout<<"\n Enter the cloth name: ";
	myin>>c.Name;
	cout<<"\n Enter the Price: ";
        myin>>c.price;
	cout<<"\n Enter the cloth no: ";
        myin>>c.cloth;
	cout<<"\n Enter the colour: ";
        myin>>c.colour;
	return myin;
}

ostream& operator<<(ostream &myout,Cloth &c)
{
	myout<<"\nCloth name: "<<c.Name;
	myout<<"\nPrice: "<<c.price;
	myout<<"\nCloth No: "<<c.cloth;
	myout<<"\nColour: "<<c.colour;
	return myout;
}
