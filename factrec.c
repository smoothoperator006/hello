#include<stdio.h>
int fact(int n);
int main()
    {
         printf("enter the number\n");
         int n;
         scanf("%d",&n);
         printf("the factorial of the numbsr is %d \n",fact(n));
         return 0;
    }
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}

