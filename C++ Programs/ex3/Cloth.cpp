#include<string.h>
#include"Cloth.h"

void Cloth::setNo(int x)
{
	cloth=x;
}
int Cloth::getNo()
{
	return cloth;
}
void Cloth::setName(char *x)
{
	int l;
	l=strlen(x);
	Name=new char[l+1];
	strcpy(Name,x);
}
char* Cloth::getName()
{
	return Name;
}
void Cloth::setPrice(int x)
{	
       	price=x;
}
int Cloth::getPrice()
{
	return price;
}
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
Cloth::Cloth(int x,int y,char *a,char *b)
{
	price=x;
	int l;
	cloth=y;
	l=strlen(a);
	Name=new char[l+1];
	strcpy(Name,a);
	l=strlen(b);
	colour=new char[l+1];
	strcpy(colour,b);
}

Cloth::Cloth(const Cloth &c)
{
	int l;
	price=c.price;
	cloth=c.cloth;
	l=strlen(c.Name);
	Name=new char[l+1];
	strcpy(Name,c.Name);
	l=strlen(c.colour);
	colour=new char[l+1];
	strcpy(colour,c.colour);
}
Cloth::~Cloth()
{
	delete[] Name;
}
Cloth::Cloth()
{
	price=0;
	Name=new char[2];
	strcpy(Name,"l");
	colour=new char[6];
	char ch[6]="pink";
	strcpy(colour,ch);
	cloth=0;
}
	
