#include<stdio.h>
int main()
{
    printf("enter th number\n");
    int num,rem=0,sum=0;
    scanf("%d",&num);
    sum=num;
    while(sum>9)
    {
    sum=0;
    while(num>0)
    {
       rem=num%10;
       sum=sum+rem;
       num=num/10;
    }
    num=sum;
    }
    printf("the generic root is %d\n",sum);
return 0;
}