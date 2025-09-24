#include<stdio.h>
int main()
{
    printf("enter the number");
    int num;
    scanf("%d",&num);
    int sum=num,n=num;
    while(sum>9)
    {
        int temp=sum;
        sum=0;
        while(temp>0)
        {
            sum=sum+temp%10;
            temp=temp/10;
        }
    }
printf("generic root is %d",sum);
return 0;
}