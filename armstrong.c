#include<stdio.h>
#include<math.h>//this is not an armstrong number this is a diffeent code
int main()
{
    printf("entet the number\n");
    int num,arm=0,rem=0,num1,a=0;
    scanf("%d",&num);
    num1=num;

    while(num1>0)
    {
    a++;
    num1=num1/10;
    }
    rem=num;
    for(int i=a;i>=1;i--)
    {
        arm=arm+pow(rem%10,i);
        rem/=10;
    }
    if(arm==num)
    {
        printf("the number is an armstrong number\n");
    }
    else
    {
        printf("the number is not an armstrong number\n");

    }
    return 0;
}