#include"fibo.h"
void print_fibo(int n)
{ 
 int a,b,c,i;
 a=-1;
 b=+1;
 printf("\n The fibonacci series \n");
 for(i=1; i<=n; i=i+1)
 {
 c=a+b;
 printf("%d ",c);
 a=b;
 b=c;
 }
}

