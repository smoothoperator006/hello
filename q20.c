//print all odd numbers from 5 to 500
#include<stdio.h>
int main()
{
    for(int i=5;i<=500;i++)
    {
        if(i%2==0)
        {
            continue;//will skip all even numbers,will directly go the next iteration
        }
        printf("%d \n",i);
    }
    return 0;
}