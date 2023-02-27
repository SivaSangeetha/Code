#include"arith.h"
int n(char ch)
{
  if(ch=='+')
  return 1;
  else if(ch=='-')
  return 2;
  else if(ch=='*')
  return 3;
  else if(ch=='%')
  return 4;
  else if(ch=='/')
  return 5;
  else
  return 0;
}
