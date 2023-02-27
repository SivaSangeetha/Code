#include"fibofact.h"
int compute(int(*a)(int),int n)
{
	int r;
	r=(*a)(n);
	return r;
}	
int fact(int n)
{
 	int i,r=1;
	for(i=1;i<=n;i++)
 	r*=i;
 	return r;
}
int fibo(int n)
{
 	int i,a,b,c;
 	a=-1;
	b=1;
	for(i=1;i<=n;i++)
        	{
        	 c=a+b;
        	 a=b;
    	         b=c;
        	}
 	return c;
}
 
