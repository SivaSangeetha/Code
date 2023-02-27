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

class A_Queue
{
        private:
                int front;
		int rear;
                int capacity;
                Labour* queueArr;
        public:
                A_Queue();
                A_Queue(Labour*,int,int,int);
                A_Queue(const A_Queue&);
                ~A_Queue();
		A_Queue(int);
                int enqueue(Labour);
		int dequeue();
		int isFull();
                int isEmpty();
                Labour peek();
                int getSize();
                int makeQueueEmpty();
                int displayQueue();
};




