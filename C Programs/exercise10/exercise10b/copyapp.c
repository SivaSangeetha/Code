#include"copy.h"
int main()
{
 FILE *fp;
 char ch[10];
 fp=fopen("name.txt","w+");
 printf("\n type END to terminate:\n");
 printf("\n enter a string:\n");
 scanf("%s",ch);
 while(strcmp(ch,"END")!=0)
	{
         fputs(ch,fp);
	 fprintf(fp,"\n");
	 scanf("%s",ch);
	}
 rewind(fp);
 display(fp);
}
