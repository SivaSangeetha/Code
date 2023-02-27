#include<string.h>
#include"Cloth.h"
#include"Material.h"
#include<iostream>
using namespace std;

void Cloth::setNo(int x)
{
        clothno=x;
}
int Cloth::getNo()
{
        return clothno;
}
void Cloth::setName(char *x)
{
        int l;
        l=strlen(x);
        name=new char[l+1];
        strcpy(name,x);
}
char* Cloth::getName()
{
        return name;
}
/*void Cloth::setPrice(int x)
{
        price=x;
}
int Cloth::getPrice()
{
        return price;
}*/
void Cloth::setColour(char* x)
{
        int l;
        l=strlen(x);
        colour=new char[l+1];
        strcpy(colour,x);
}
char* Cloth::getColour()
{
        return colour;
}
Cloth::Cloth(int x,char *a)
{
        int l;
        clothno=x;
        l=strlen(a);
        name=new char[l+1];
        strcpy(name,a);
 //       l=strlen(b);
 //       colour=new char[l+1];
 //       strcpy(colour,b);
}

Cloth::Cloth(const Cloth &c)
{
        int l;
        clothno=c.clothno;
        l=strlen(c.name);
        name=new char[l+1];
        strcpy(name,c.name);
        //l=strlen(c.colour);
        //colour=new char[l+1];
        //strcpy(colour,c.colour);
}
Cloth::~Cloth()
{
        delete[] name;
}
Cloth::Cloth()
{
//      price=0;
        name=new char[2];
        strcpy(name,"l");        
//	colour=new char[6];
//        char ch[6]="pink";
//        strcpy(colour,ch);
        clothno=0;
}


/*void Cloth::read()
{
	cin>>name>>clothno;
}*/

void Cloth::display()
{
	cout<<name<<clothno;
}


/*istream& operator>>(istream &myin,Cloth &c)
{
        cout<<"\n Enter the cloth name: ";
        myin>>c.name;
        cout<<"\n Enter the Price: ";
        myin>>c.price;
        cout<<"\n Enter the cloth no: ";
        myin>>c.clothno;
        cout<<"\n Enter the colour: ";
        myin>>c.colour;
        return myin;
}

ostream& operator<<(ostream &myout,Cloth &c)
{
        myout<<"\nCloth name: "<<c.name;
        myout<<"\nPrice: "<<c.price;
        myout<<"\nCloth No: "<<c.clothno;
        myout<<"\nColour: "<<c.colour;
        return myout;
}*/


