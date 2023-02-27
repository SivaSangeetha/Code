#include"copy.h"
void display(FILE *fp)
{
 char ch[10];
 int c=0;
 fgets(ch,10,fp);
 while(!feof(fp))
	{
	printf("%s\n",ch);
	c=c+1;
	fgets(ch,10,fp);
	}
 printf("\n there are %d elements in a given array of elements.\n",c);
}
