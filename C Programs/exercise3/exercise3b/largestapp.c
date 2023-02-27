#include"largest.h"
int main()
{
 int n,num,count=1,large=-99999;
 printf("\n Enter the number of entries: \n");
 scanf("%d",&n);
 do
  {
   printf("enter the %d number \n",count);
   scanf("%d",&num);
   large=largest(num,large);
   count=count+1;
  }
 while(count<=n);
 printf("\n The largest is %d",large);
}
