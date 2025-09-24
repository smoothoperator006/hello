#include<stdio.h>
int main()
{
    printf("enter a number");
    int num,a=0;
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            a=1;
        }
    }
    if(a)
    {
        printf("not prime");
    }
    else
    {
       printf("prime");
    }
    return 0;
}