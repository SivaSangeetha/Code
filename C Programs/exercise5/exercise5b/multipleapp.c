#include"multiple.h"
int main()
{
 int r1,r2,c1,c2,i,j,mat1[5][5],mat2[5][5],mat3[5][5];
 printf("\nEnter the no.of.rows & column of 1st matrix:");
 scanf("%d%d",&r1,&c1);
 printf("\nEnter tne no.of.rows & column of 2nd matrix:");
 scanf("%d%d",&r2,&c2);
 if(c1==r2)
 {
  printf("\n Matrix multiplication is possible");
  printf("\n Enter the elements of 1st matrix:");
  readmat(mat1,r1,c1);
  printf("\n Enter the elements of 2nd matrix:");  
  readmat(mat2,r2,c2);
  multimat(mat1,mat2,mat3,r1,c1,c2); 
  printf("\n First matrix\n");
  displaymat(mat1,r1,c1);
  printf("\n Second matrix\n"); 
  displaymat(mat2,r2,c2);
  printf("\n The multiplication of two matrix\n");
  displaymat(mat3,r1,c2);
 }
else
 printf("\n Matrix multiplication is not possible\n");
}

