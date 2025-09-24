#include<stdio.h>
int sum(int n);
int main()
{
    printf("enter the value of n\n");
    int n;
    scanf("%d",&n);
    printf("the sum is %d\n",sum(n));
    return 0;
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return sum(n-1)+n;
}
