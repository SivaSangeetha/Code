#include"dynamic.h"
int find_sum(int *a,int n)
{
int i;
int sum=0;
       {
	for(i=0;i<n;i++)
	if(a[i]>=0)
	sum+=*(a+i);
	}
  return sum;
}
float find_avg(int *a,int n)
{
int i,sum=0,cnt=0;
float avg;
       {
	for(i=0;i<n;i++)
	if(a[i]<0)
        {
	sum=sum+*(a+i);
	cnt++;
        }
	avg=1.0*sum/cnt;
       }
   return avg;
}

