#include<stdio.h>
int main()
{
    printf("etner 2 numbers\n");
    int num1,num2,high=0;
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=((num1>num2)?(num2:num1));i++)
    {
            if(num1%i==0 && num2%i==0)
            {
                if(i>high)
                {
                    high=i;
                }
            }
    }
    printf("the gcd is %d",high);
    return 0;
}