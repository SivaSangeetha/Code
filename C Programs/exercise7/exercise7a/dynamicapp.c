#include"dynamic.h"
int main()
{
int *a;
int n,i,res,sum;
float avg;
printf("\n enter the no. of elements: \n");
scanf("%d",&n);
printf("\n enter the elements: \n");
for(i=0;i<n;i++)
scanf("%d",a+i);
sum=find_sum(a,n);
printf("\n the sum of the positive numbers are:%d",sum);
avg=find_avg(a,n);
printf("\n the average of negative numbers are:%f",avg);
}
