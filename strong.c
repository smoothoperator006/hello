#include<stdio.h>
int fact(int n);
int main()
{
    printf("enter the number\n");
    int num,digit=0,num1,num2=0;
    scanf("%d",&num);
    num1=num;
    while(num1>0)
    {
        num1/=10;
        digit++;
    }
    num1=num;
    for(int i=1;i<=digit;i++)
    {
        num2=num2+fact(num1%10);
        num1/=10;
    }
    if(num2==num)
    {
        printf("the number is tstrong");
    }
    else{
        printf("the numebr is not strong");
    }
    return 0;
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}