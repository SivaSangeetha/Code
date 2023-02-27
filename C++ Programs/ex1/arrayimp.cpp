#include"array.h"
int find_max(int *a,int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
	 if(a[i]>max)
	 max=a[i];
	}
	return max;
}

int find_occur(int *a,int n,int ele)
{
	int i,cnt=0;
	for(i=0;i<n;i++)
	{
	 if(a[i]==ele)
	 cnt++;
	}
	return cnt;
}

int find_sum(int *a,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	 sum=sum+a[i];
	}
	return sum;
}

