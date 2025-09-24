#include<stdio.h>
void main()
{
    printf("enter your number\n");
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("the number is perfect");

    }
    else{
        printf("the number aint perfect");
    }
}