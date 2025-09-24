#include<stdio.h>
int main()
{
    printf("enter lower and upper limits\n");
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    int i,k=lower,a;
    while(k>=lower && k<=upper)
    {
        a=0;
        for(i=1; i<=k; i++)
        {
            if(k%i==0)
            {
                a++;
            }
        }
        if(a==2)
        {
            printf("%d is a prime number\n", k);
        }
        k++;
    }
    return 0;
}