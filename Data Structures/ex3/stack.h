#include<string.h>
#include<iostream>
using namespace std;

class Labour
{
	private:
		char* name;
		int age;
		float workHours;
		int comPerday;

	public:
		Labour();
		Labour(char*,int,float,int);
		Labour(const Labour&);
		~Labour();
		Labour operator=(Labour);   //Assignment operator
		Labour operator=(int);
	friend istream& operator>>(istream&,Labour&);
	friend ostream& operator<<(ostream&,Labour&);
};

class A_Stack
{
	private:
		int top;
		int capacity;
		Labour* StackArr;
	public:
		A_Stack();
		A_Stack(int);
		A_Stack(Labour*,int,int);
		A_Stack(const A_Stack&);
		~A_Stack();
		int isFull();
		int isEmpty();
		int push(Labour);
		int pop();
		Labour peek();
		int getSize();
		int makeStackEmpty();
		int displayStack();
};



