#include"built.h"
int main()
{
char s1[20],s2[20],r[40];
int n,res;
n=0;
while(n!=5)
 {
   printf("\nMenu :\n");
   printf("1.Length Of The String\n");
   printf("2.Concadination Of The String\n");
   printf("3.Reverse Of The String\n");
   printf("4.Copy Of The Two String\n");
   printf("5.Exit\n");
   printf("5.Exit\n");
   printf("Enter your choice :\n");
   scanf("%d",&n);
   if(n==1)
   {
      printf(" U Selected Lenght Of The String\n");
      printf("Enter the String :\n");
      scanf("%s",s1);
      res=len(s1);
      printf("Lenght of the string:%d\n",res);
   }
   else if(n==2)
   {
      printf("U Selected Concadination Of The String\n");
      printf("Enter the first string:\n");
      scanf("%s",s1);
      printf("Enter the second string:\n");
      scanf("%s",s2);
      concat(s1,s2,r);
      printf("Concadinated string :\n%s\n",r);
   }
   else if(n==3)
   {
      printf("U Selected Reverse Of The String\n");
      printf("Enter the string:\n");
      scanf("%s",s1);
      rev(s1,s2);
      printf("Reverse String:\n%s\n",s2);
   }
   else if(n==4)
   {
      printf("U Selected Copy Of The Two String\n");
      printf("Enter the string:\n");
      scanf("%s",s1);
      cpy(s1,s2);
      printf("The copied string :\n%s\n",s2);
   }
 }
}

