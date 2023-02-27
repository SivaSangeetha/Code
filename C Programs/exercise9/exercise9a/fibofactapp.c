#include"fibofact.h"
int main()
{
 int n,res1,res2;
 printf("\n enter the number:\n");
 scanf("%d",&n);
 res1=compute(fibo,n);
 res2=compute(fact,n);
 printf("\n %d fibonacci:%d",n,res1);
 printf("\n %d factorial:%d",n,res2);
}

