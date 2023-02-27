#include<string.h>
#include<iostream>
using namespace std;
class Labour
{
	private:
		char* name;
		int comPerday;
		float workHours;
		int age;

	public:
		Labour();
		Labour(int);
		Labour(char*,int,float,int);
		~Labour();		
		Labour(const Labour&);
		Labour operator=(Labour); //Assignment operator
		Labour operator=(int);
	 	bool operator==(Labour);
		int getCom();
	 friend istream& operator>>(istream&,Labour&);
       	 friend ostream& operator<<(ostream&,Labour&);
};

class A_List
{
        private:
                Labour *arr;
                int capacity;
                int size;

        public:
                A_List();
                A_List(Labour*,int,int);
                A_List(const A_List &);
                ~A_List();
                int isFull();
                int isEmpty();
                int insertAtFirst(Labour);
                int insertAtLast(Labour);
                int insertByPos(int,Labour);
		Labour deleteByPos(int);
                Labour deleteAtFirst();
                Labour deleteAtLast();
		Labour deleteByEle(int);
                int displayList();
                int makeListEmpty();
                Labour searchAtFirst(Labour);
                Labour searchAtLast(Labour);
                Labour searchAnEle(Labour);
                Labour retriveEleAtGnIndex(int index);
		int getSize();
};

