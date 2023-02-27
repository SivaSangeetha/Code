#include"employee.h"
int main()
{
int n,ch;
char x[30];
stu s [10];
printf("\n enter the no.of employees:\n");
scanf("%d",&n);
printf("\n enter employee details:\n");
read(s,n);
do
       {
	printf("\n 1.highest salary holder: \n");
	printf("\n 2.list of employees getting salary between 3-6lakhs: \n");
	printf("\n 3.details of managers: \n");
	printf("\n 4.details of all the employees who work at particular branch:\n");
	scanf("%d",&ch);
	switch(ch)
        {
	 case 1:highest(s,n);
	 	break;
	 case 2:disemploye(s,n);
	 	break;
	 case 3:dismanager(s,n);
	 	break;
	 case 4:printf("\n enter the branch:\n");
         	scanf("%s",x);
         	disbranch(s,n,x);
         	break;
	}	
       }	 
        while(ch>=1&&ch<=4);
}


