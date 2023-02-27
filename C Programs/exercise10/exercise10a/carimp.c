#include"car.h"
void display(FILE *fp,char name[10],char clr[10],int rate)
{
printf("\n name colour rate\n");
fscanf(fp,"%s%s%d",name,clr,&rate);
while(!feof(fp))
{
if(rate>=500000)
	{
	 printf("\n %s %s %d\n",name,clr,rate);
	}
	 fscanf(fp,"%s%s%d",name,clr,&rate);
}
fclose(fp);
}
