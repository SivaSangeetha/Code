#include"book.h"
void check(FILE *fp)
{
	stu p;
	char ch[20];
	int i=0;
	printf("\n enter the sub string:\n");
	scanf("%s",ch);
	fread(&p,sizeof(p),1,fp);
	printf("name\t\tpage\n");
	while(!feof(fp))
	{
		if(strstr(p.name,ch)>0)
		{
		printf("\n%s\t%s\t%d\n",p.name,p.auth,p.page);
		i++;
		}
		fread(&p,sizeof(p),1,fp);
		
	}
	if(i==0)
		printf("\n there is no result is found\n");
}

