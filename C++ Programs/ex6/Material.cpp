#include<iostream>
using namespace std;
#include"Material.h"
#include"Cloth.h"

int price,discount;
char *name;

void Material::read()
{
        Cloth::read();
        cin>>price>>discount;
}

void Material::display()
{
        Cloth::display();
        cout<<"\n"<<price<<"\n"<<discount<<"\n";
}

float Material::computeDiscount()
{
	float ans;
	ans=price*(1.0*discount/100);
	ans=price-ans;
	return price;
}
/*void Material::setPrice(int p)
{
	price=p;
}
int Material::getPrice()
{
	return price;
}
void Material::setDiscount(int d)
{
	discount=d;
}
int Material::getDiscount()
{	
	return discount;
}

void Material::setLength(int l)
{
	length=l;
}
int Material::getLength()
{
	return length;
}*/
Material::Material():Cloth()
{
        price=0;
        discount=0;
}

Material::Material(int clothno,char *name,int p,int d):Cloth(clothno,name)
{
        price=p;
        discount=d;
}

Material::Material(const Material &ref):Cloth(ref)
{
        price=ref.price;
        discount=ref.discount;
}




