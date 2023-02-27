#include"sort.h"
void sort_names(char names[7][15],int n)
{
   char tem[15];
   int i,j;
   for(i = 0;i < n-1;i++)
     for(j = i+1;j < n;j++)
       if(strcmp(names[i],names[j])<0)
    {
       strcpy(tem,names[i]);
       strcpy(names[i],names[j]);
       strcpy(names[j],tem);
    }
}        
