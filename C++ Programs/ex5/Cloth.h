#include<iostream>
using namespace std;
class Cloth
{
 int cloth;
 char* Name;
 int price;
 char* colour;
 public:

        void setNo(int);
        int getNo();
        void setName(char*);
        char* getName();
        void setPrice(int);
        int getPrice();
        void setColour(char*);
        char* getColour();
	Cloth(char *,int);
        Cloth();
        Cloth(int,int,char*,char*);
        Cloth(const Cloth &);
        ~Cloth();
 friend void display();
 friend istream& operator>>(istream&,Cloth&);
 friend ostream& operator<<(ostream&,Cloth&);
	Cloth operator++(); /*pre increment*/
	Cloth operator=(Cloth );/*Assignment operator*/ 
 friend Cloth operator++(Cloth &,int); /*post increment*/
	Cloth operator+(Cloth);/*Addition*/
 friend Cloth operator-(Cloth,Cloth);/*Subraction*/
	char operator[](int);
	bool operator==(Cloth);/*equality*/
 friend bool operator!=(Cloth,Cloth);/*not equality*/
};


