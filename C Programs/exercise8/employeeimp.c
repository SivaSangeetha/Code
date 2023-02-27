#include"employee.h"
void read(stu s[10],int n)
{
 int i;float x;
 printf("\n enter the employee details in order name id designation branch basicpay\n");
 for(i=0;i<n;i++)
      {   
	printf("\n enter employee details for employee %d\n",i+1);
	scanf("%s%d%s%s%d",s[i].name,&s[i].id,&s[i].des,&s[i].branch,&s[i].bp);
	x=s[i].bp+(0.1*s[i].bp)+1000-(s[i].bp*0.12);
	s[i].ns=x;
       } 
}
void disemploye(stu s[10],int n)
{
 int i;
 printf("\n name              id            designation            branch               basicpay              netsalary\n");
 for(i=0;i<n;i++)
      { 
	if(s[i].ns>=300000&&s[i].ns<=600000)
	display(s[i]);
      }  
}
void dismanager(stu s[10],int n)
{
 int i;
 char x[10]="manager";
 printf("\n name             id            designation             branch              basicpay              netsalary\n");
 for(i=0;i<n;i++)
      {  
	if(strcmp(s[i].des,x)==0)
	display(s[i]);
      }
}
void disbranch(stu s[10],int n,char x[30])
{
 int i;
 printf("\n name             id            designation             branch              basicpay              netsalary\n");
 for(i=0;i<n;i++)
       {
	if(strcmp(s[i].branch,x)==0)
	display(s[i]);
       }	
}
void display(stu s)
{
 printf("\n %s  %d  %s  %s  %d  %f \n",s.name,s.id,s.des,s.branch,s.bp,s.ns);
} 
void highest(stu s[10],int n)
{
 int i,avg=s[0].ns,t;
 for(i=0;i<n;i++)
       {
	if(s[i].ns>avg)
	   {
	 	avg=s[i].ns;
	 	printf("\n name             id            designation             branch              basicpay              netsalary\n");
	   }
		if(avg==s[i].ns)
		display(s[i]);
      }
}
