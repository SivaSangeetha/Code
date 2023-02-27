#include"calc.h"
int find_sum(int a,int b,int i)
{
 switch(i)
 {
  case 1:
   return a+b;
  case 2:
   return a-b;
   case 3:
   return a*b;
   case 4:
   return a/b;
   case 5:
   return a%b;
   default:
  printf("\n invalid input");
 }
}

