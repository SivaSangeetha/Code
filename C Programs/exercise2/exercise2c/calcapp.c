#include"calc.h"
int main()
{
 int a,b,c,i;
 printf("\n 1.addition \n");
 printf("\n 2.subraction \n");
 printf("\n 3.multiplication \n");
 printf("\n 4.division \n");
 printf("\n 5.modulus\n");
 printf("\n enter the choice: \n");
 scanf("%d",&i);
 printf("\n enter two numbers: \n");
 scanf("%d%d",&a,&b);
 c=find_sum(a,b,i);
 printf("\n the value is: %d \n",c);
}
