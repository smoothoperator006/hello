#include<stdio.h>
int isprime(int p);
int iscomp(int c);
int main()
{
    printf("enter the numbers");
    int a=1,num,prime=0,comp=0;
    while(a!=0)
    {
        scanf("%d",&num);
        if(num==-1)
        {
            a=0;
            continue;
        }
        if(isprime(num)==1)
        {
            prime++;
        }
        if(iscomp(num)==1)
        {
            comp++;
        }
    }
    printf("the number of prime numers are %d\n",prime);
    printf("the number of comp numers are %d\n",comp);
    return 0;
}
    int isprime(int p)
    {
        int a=0;
        for(int i=2;i<p;i++)
        {
            if(p%i==0)
            {
                a=1;
            }
        }
        if(a==1)
        {
           return 0;
        }
        else
        {
            return 1;
        }
    }
    int iscomp(int c)
    {
        int a=0;
        for(int i=2;i<c;i++)
        {
            if(c%i==0)
            {
                a=1;
            }
        }
        if(a==0)
        {
           return 0;
        }
        else
        {
            return 1;
        }
    }


