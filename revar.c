#include<stdio.h>
int rev(int num);
int even(int num);
int main() 
{
        printf("enter the number of elements in array\n");
        int n;
        scanf("%d",&n);
        printf("enter %d elements\n",n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(even(a[i])==1)
            {
                a[i]=rev(a[i]);
            }
        }
        printf("the array formed after reversing even numbers\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
}
int rev(int num)
{
    int n=num,rev=0,rem=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int even(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

