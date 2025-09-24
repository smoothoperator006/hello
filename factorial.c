#include<stdio.h>
int main()
{
    int f=1,n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
          f=f*i;
    }
    printf("the factorial of the number is %d \n",f);
    return 0;
}