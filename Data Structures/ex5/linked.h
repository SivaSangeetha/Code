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
                Labour operator=(Labour); 
                Labour operator=(int);
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
        friend class L_Stack;
        friend class L_Queue;
        private:
                Labour data;
                Node *next;     

};

class L_Stack
{
        private:
                Node* top; 
        public:
                L_Stack();
      		L_Stack(Node*);
                L_Stack(const L_Stack&);
                ~L_Stack();
                int isEmpty();
                int push(Node*);
                Labour pop();
                Labour peek();
                int getSize();
                int makeStackEmpty();
                int displayStack();  
};



class L_Queue
{
        private:
                Node *first;
        public:
                L_Queue();
		L_Queue(Node*);
                L_Queue(const L_Queue&);
                ~L_Queue();
                int enqueue(Node*);
                Labour dequeue();
                int isEmpty();
                Labour peek();
                int getSize();
                int makeQueueEmpty();
                int displayQueue();
};



