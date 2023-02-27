#include"operation.h"
int main()
{
int i,n=0,l;
char a[20],b[20],c[40];
while(n!=5)
{
printf("\n 1.length of the string\n 2.concatenated two string\n 3.reverse string\n 4.copy string\n 5.exit");
printf("\n enter the choice:");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\n enter the string:");
scanf("%s",a);
l=length(a);
printf("\n string length is:%d",l);
break;
case 2:
printf("\n enter the two string:");
scanf("%s",a);
scanf("%s",b);
concat(a,b,c);
printf("\n concatinated string is %s",c);
break;
case 3:
printf("\n enter the string:");
scanf("%s",a);
reverse(a,b);
printf("\n reverse string is %s",b);
break;
case 4:
printf("\n enter the string:");
scanf("%s",a);
copy(a,b);
printf("\n copied string is %s",b);
break;
}
}
}


