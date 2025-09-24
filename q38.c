#include<stdio.h>
int main()
{
    printf("enter 2 numbers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    int k;
    k=&a;
    *(&a)=*(&b);
    *(&b)=*k;
    printf("a and b are %d %d\n ",a,b);
return 0;
}