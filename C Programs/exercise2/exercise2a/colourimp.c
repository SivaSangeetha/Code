#include"colour.h"
int check_colour(char ch)
{
if(ch=='r')
return 1;
else if(ch=='g')
return 2;
else if(ch=='b')
return 3;
else if(ch=='w')
return 4;
else
return 0;
}
