#include"colour.h"
int main()
{ 
char ch;
int ans;
printf("\n enter any one of the character (r,g,b,w)\n");
scanf("%c",&ch);
ans=check_colour(ch);
if(ans==1)
printf("\n red");
else if(ans==2)
printf("\n green");
else if(ans==3)
printf("\n blue");
else if(ans==4)
printf("\n white");
else
printf("you are not given the invalid output");
}



