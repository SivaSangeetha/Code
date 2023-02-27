#include"ams.h"
int find_armstrong(int x,int p)
{
int rem,q,sum=0,power,num;
num=x;
while(x!=0)
{
rem=x%10;
power=pow(rem,p);
sum=sum+power;
q=x/10;
x=q;
}
if(sum==num)
return 1;
else
return 2;
}



