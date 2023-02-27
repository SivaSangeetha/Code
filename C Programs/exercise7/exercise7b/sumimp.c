#include"sum.h"
int sum(int *a[5],int r,int c,int sr)
{
int i,j,sum1=0;
for(i=sr-1,j=0;j<c;j++)
sum1=sum1+(*(a[i]+j));
return sum1;
}

