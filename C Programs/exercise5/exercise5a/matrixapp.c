#include"matrix.h"
int main()
{
int a[10],i,n,b,c;
printf("\n enter the no.of elements: \n");
scanf("%d",&n);
printf("\n enter the elements: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter one number: \n");
scanf("%d",&b);
c=count_num(a,n,b);
printf("\n no.of occurances %d: %d \n",b,c);
}

