#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

class Labour
{
	private:
			string name;
			int id;
			float workHours;
			int comPerday;
			
	public:
			Labour();
			Labour(string,int,float,int);
			Labour(const Labour&);
			int getId();
	friend ostream& operator<<(ostream&,Labour&);
	friend istream& operator>>(istream&,Labour&);
	friend class HashTblADT;
};

class HashTblADT
{
    private:
       Labour **arr;
       int size;
       int capacity;
    public:
        HashTblADT(int);
        int hashFunction(int);
        int insertDetails(Labour);
        int searchId(int);
        int isFull();
        int isEmpty();
        int deleteById(int);
        void displayHash();
        ~HashTblADT();
};
