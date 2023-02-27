#include"operation.h"
int length(char a[20])
{
  int i,t=0;
  for(i=0;a[i]!='\0';i++)
    t++;
  return t;
}
void concat(char n1[20],char n2[20],char res[40])
{
 int i,j;
 for(i=0,j=0;n1[i]!='\0';i++,j++)
   res[j]=n1[i];
 for(i=0;n2[i]!='\0';i++,j++)
   res[j]=n2[i];
  res[j]='\0';
}
void reverse(char oristr[20],char revstr[20])
{
  int i,l=0,j;
  for(i=0;oristr[i]!='\0';i++)
    l++;
  for(i=0,j=l-1;i<l;i++,j--)
   revstr[j]=oristr[i];
}
void copy(char oristr[20],char cpystr[20])
{
  int i,l=0;
  for(i=0;oristr[i]!='\0';i++)
    l++;
  for(i=0;i<l;i++)
    cpystr[i]=oristr[i];
 cpystr[i] = '\0';
}
 
