#include"built.h"
int len(char a[20])
{
 int i,t=0; 
 for(i=0;a[i]!='\0';i++)
     t=t+1;
 return t;
}
void concat(char a[20],char b[20],char c[40])
{
 int i,j;
 for(i=0,j=0;a[i]!='\0';i++,j++)
     c[j]=a[i];
 for(i=0;b[i]!='\0';i++,j++)
     c[j]=b[i];
 c[j]='\0';
}
void rev(char a[20],char b[20])
{
  int l,i,j;
  l=strlen(a);
  j=l-1;
  for(i=0;i<l;i++)
  {
     b[j]=a[i];
     j--;
  }
}
void cpy(char a[20],char b[20])
{
  int l,i,j;
  l=strlen(a);
  for(i=0;i<l;i++)
  {
     b[i]=a[i];
}
}
