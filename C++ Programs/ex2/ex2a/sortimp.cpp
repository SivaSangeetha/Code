#include"sort.h"
int* sort(int *a,int n)
{
 int i,j,temp;
 int *b=new int[n];
 for(i=0;i<n;i++)
 b[i]=a[i];
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
	 if(a[i]>a[j])
		{
		 temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
		}
	return a;
}

float* sort(float *a,int n)
{
 int i,j;
 float temp;
 float *b=new float[n];
 for(i=0;i<n;i++)
 b[i]=a[i];
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
         if(a[i]>a[j])
                {
                 temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
                }
        return a;
}

char* sort(char *c,int n)
{
 int i,j;
 char temp;
 char *d=new char[n];
 for(i=0;i<n;i++)
 d[i]=c[i];
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
         if(c[i]>c[j])
                {
                 temp=c[i];
                  c[i]=c[j];
                  c[j]=temp;
                }
        return c;
}

	
