#include<stdio.h>
int main()
{
char ch;
printf("\n enter any one of the character(r,g,b,w,y),\n");
scanf("%c",&ch);
if(ch=='r')
printf("\n red \n");
else if(ch=='g')
printf("\n green \n");
else if(ch=='b')
printf("\n blue \n");
else if(ch=='w')
printf("\n white \n");
else if(ch=='y')
printf("\n yellow \n");
else
printf("\n you have given an invalid output");
}


