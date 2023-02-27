#include"fact.h"
int main()
{
        int n,fn;
        long int r;
        printf("Enter the integer\n");
        scanf("%d",&n);
        fn=find_factorial(n);
        printf("The factorial of no %d is:%d\n",n,fn);
}

