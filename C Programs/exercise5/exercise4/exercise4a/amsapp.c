#include"ams.h"
int main()
{
        int q,p=0,num,n,ans;
        printf("\n Enter the number \n");
        scanf("%d",&n);
        num=n;
        while(n!=0)
   {
        q=n/10;
        n=q;
        p=p+1;
   }
        ans=find_armstrong(num,p);
        if(ans==1)
        printf("number is armstrong\n");
        else
        printf("number is not armstrong\n");
}


