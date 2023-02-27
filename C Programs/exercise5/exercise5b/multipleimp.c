#include"multiple.h"
void readmat(int m[5][5],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   scanf("%d",&m[i][j]);
}
void displaymat(int m[5][5],int r,int c)
{
 int i,j;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   printf("%d ",m[i][j]);
  printf("\n");
 }
}
void multimat(int x[5][5],int y[5][5],int z[5][5],int r1,int c1,int c2)
{
 int i,j,k;
 for(i=0;i<r1;i++)
  for(j=0;j<c2;j++)
{
    z[i][j]=0;
    for(k=0;k<c1;k++)
     z[i][j]+=x[i][k]*y[k][j];
   }
}

