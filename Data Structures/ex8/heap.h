#include<string.h>
#include<iostream>
using namespace std;

class Labour
{
	private:
			char name[30];
			int age;
			float workHours;
			int comPerday;
			
	public:
			Labour();
			Labour(char*,int,float,int);
			Labour(const Labour&);
			int getAge();
	friend ostream& operator<<(ostream&,Labour&);
	friend istream& operator>>(istream&,Labour&);
	friend class Heap;
};

class Heap
{
	private:
		Labour *arr;
		int capacity;
		int size;
		
	public:
		Heap();
		Heap(int);
		~Heap();
		int isFull();
		int isEmpty();
		int enqueue(Labour);
		int dequeue();
		int searchByAge(int);
		int displayHeap();
		Labour findMax();
		Labour findMin();
		
};
