#include"natural.h"
int sum_natural(int n)
{
 int count=1;
 int sum=0;
 while(count<=n)
 {
  sum=sum+count;
  count=count+1;
  }
 return sum;
}

