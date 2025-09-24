#include<stdio.h>
int main()
{
    int a[5];
    printf("enter the array\n");
    int *ptr=&a[0];
    //int *ptr=a;this also works as array is a pointer and points to the zeroth index of the array
    for(int i=0;i<5;i++)
    {
       printf("%d input",i);
       scanf("%d",ptr+i);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d index output is %d\n",i,*(ptr+i));
    }
    return 0;
}