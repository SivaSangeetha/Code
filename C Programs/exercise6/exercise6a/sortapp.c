#include"sort.h"
int main()
{
char names[7][15];
int i,n;
printf("\n enter the no.of names: \n");
scanf("%d",&n);
printf("\n enter the names: \n");
for(i=0;i<n;i++)
scanf("%s",names[i]);
sort_names(names,n);
printf("\n the sorted names are: \n");
for(i=0;i<n;i++)
printf("\n %s",names[i]);
}

