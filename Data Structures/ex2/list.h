#include <string.h>
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
		Labour operator=(Labour);
		Labour operator=(int);
		bool operator==(Labour);
		int operator!=(Labour);
	friend istream& operator>>(istream&,Labour&);
	friend ostream& operator<<(ostream&,Labour&);
};

class Node
{
	public:
		Node();
		Node(Labour,Node*);
		Node(const Node&);
		~Node();
	friend class L_List;
	private:
		Labour data;
		Node *next;

};

class L_List
{
	private:
		Node *first;
	public:
		L_List();
		L_List(Node*);
		L_List(const L_List&);
		~L_List();
		int isEmpty();
		int insertAtFirst(Node*);
		int insertAtLast(Node*);
		int insertByPos(int,Node*);
		int insertAfterGnEle(Node*,Labour);
		int insertBeforeGnEle(Node*,Labour);
		Labour deleteByPos(int);
		Labour deleteAtFirst();
		Labour deleteAtLast();
		int makeListEmpty();
		int displayList();

};


