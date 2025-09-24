#include<stdio.h>
void prime(int a,int b)
{
    for(int i=a;i<b;i++)
    {
        if(i<2)
        {
            continue;
        }
        int z=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                z=1;
                break;
            }
        }
        if(z==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n"); // For clean output

}
int main()
{
    int num,lr,ur;
    printf("enter lower ranger and upper range \n");
    scanf("%d",&lr);
    scanf("%d",&ur);
    printf("the prime numbers between the given range are:\n");
    prime(lr,ur);
    return 0;
}
    