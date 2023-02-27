#include"matrix.h"
int count_num(int a[10],int n,int b)
{
int i,count=0;
for(i=0;i<n;i++)
{
if(a[i]==b)
count=count+1;
else
count=count+0;
}
return count;
}
