#include"sum.h"
int main()
{
int *a[5],i,j,r,c,sum1,sr;
printf("\n enter the matrix size\n");
scanf("%d%d",&r,&c);
printf("\n enter the matrix elements\n");
for(i=0;i<r;i++)
a[i]=(int *)malloc(c*sizeof(int));
for(i=0;i<r;i++)
for(j=0;j<c;j++)
 scanf("%d",a[i]+j);
printf("\n enter the row we need to sum:\n");
scanf("%d",&sr);
sum1=sum(a,r,c,sr);
printf("%d the row sum is %d",sr,sum1);
}

