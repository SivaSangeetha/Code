#include"arith.h"
int main()
{
char ch;
int ans;
int a;
int b;
printf("\n Enter  the operator(+,-,*,/,%)\n");
scanf("%c",&ch);
printf("\n Enter two numbers:\n");
scanf("%d%d",&a,&b);
ans=n(ch);
if(ans==1)
printf("\n The value is %d\n",a+b);
else if(ans==2)
printf("\n The value is %d\n",a-b);
else if(ans==3)
printf("\n The value is %d\n",a*b);
else if(ans==4)
printf("\n The value is %d\n",a%b);
else if(ans==5)
printf("\n The value is %d\n",a/b);
else
printf("\n invalid input \n");
}
 

