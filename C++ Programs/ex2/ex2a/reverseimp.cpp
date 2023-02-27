#include"reverse.h"
int reverse(int n)
{
 int i,sum=0,n1,rem;
 n1=n;
 while(n1!=0)
	{
	 rem=n1%10;
	 sum=(sum*10)+rem;
	 n1=n1/10;
	}
    return sum;
}

char* reverse(char *s)
{
 int l,i,j;
 l=strlen(s);
 char *d=new char[l];
 for(i=0,j=l-1;i<l;i++,j--)
	{
	 d[i]=s[j];
	}
     return d;
}
