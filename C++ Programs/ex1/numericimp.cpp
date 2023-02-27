#include"numeric.h"
int prime(int n)
{
	int i,cnt=0;
	for(i=2;i<n/2;i++)
	{	
	 if(n%i==0)
	 cnt++;
	}
	 if (cnt==0)
	  return 1;
	 else
	  return 2;
}

int find_min(int n)
{
	int min=99999,x;
	while(n!=0)
	{
	 x=n%10;
	 if(x<=min)
	 min=x;
	 n=n/10;
	}
	return min;
}

int find_count(int n)
{
	int cnt=0,rem;
	while(n!=0)
	{
	 rem=n%10;
	 cnt++;
	 n=n/10;
	}
	return cnt;
}


