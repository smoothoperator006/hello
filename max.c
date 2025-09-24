#include<stdio.h>
void max(int *a,int *b);
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    max(p1,p2);
    return 0;
}
void max(int *a,int *b)
{
    if(*a>*b)
    {
        printf("the bigger number is %d\n",*a);
    }
    else if(*b>*a)
    {
        printf("the bigger number is %d\n",*b);
    }
    else
    {
        printf("both numbers are equal");
    }

}