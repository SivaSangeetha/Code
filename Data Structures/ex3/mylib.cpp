#include"stack.h"

istream& operator>>(istream &myin,Labour &l)
{
	cout<<"\nEnter the name : ";
	myin>>l.name;
	cout<<"\nEnter the age : ";
	myin>>l.age;
	cout<<"\nEnter the working hours : ";
	myin>>l.workHours;
	cout<<"\nEnter the commission per day : ";
	myin>>l.comPerday;
	return myin;
}

ostream& operator<<(ostream &myout,Labour &l)
{
	myout<<"\n\tName"<<"\tAge"<<"\tWorking Hours"<<"\tCommission PerDay";
	myout<<"\n\t"<<l.name<<"\t"<<l.age<<"\t"<<l.workHours<<"\t\t"<<l.comPerday<<"\n";
	return myout;
}

