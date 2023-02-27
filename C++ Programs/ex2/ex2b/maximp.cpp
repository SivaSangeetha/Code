#include"max.h"
int find_max(int *arr,int size,bool sign)
{
 int i,max=-99999;
 int *a=new int [size];
 for(i=0;i<size;i++)
 a[i]=arr[i];
 if(sign==1)
	{
	 for(i=0;i<size;i++)
	 if(a[i]<0)
	 if(a[i]>max)
           max=a[i];
	}

 else
	{
	 for(i=0;i<size;i++)
	 if(a[i]>max)
 	 max=a[i];
	}
 return max;
}
