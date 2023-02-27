#include"book.h"
int main()
{
	FILE *fp;
	stu p;
	int n,i,y=1;
	do
	{
	printf("\n ENTER NO.OF BOOKS:\n");
	scanf("%d",&n);
	fp=fopen("book.txt","wb+");
	printf("\nENTER BOOK DETAILS IN ORDER NAME AUTHOR PAGES\n");
	for(i=0;i<n;i++)
		{
		printf("\n book %d\n",i+1);
		scanf("%s%s%d",p.name,p.auth,&p.page);
		fwrite(&p,sizeof(p),1,fp);
		}
 		rewind(fp);
		check(fp);
		printf("\n enter 1 to continue\n");
		scanf("%d",&y);
		}
	while(y==1);
}

	


