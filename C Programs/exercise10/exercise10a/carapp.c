#include"car.h"
int main()
{
int n,i;
FILE *fp;
char name[10];
int rate;
char clr[10];
fp=fopen("output.exe","w+");
printf("\n enter the number of cars:\n");
scanf("%d",&n);
printf("\n car name colour rate\n");
for(i=1;i<=n;i++)
	{
	scanf("%s%s%d",name,clr,&rate);
	fprintf(fp,"%s  %s   %d\n",name,clr,rate);
	}
rewind(fp);
display(fp,name,clr,rate);
}

