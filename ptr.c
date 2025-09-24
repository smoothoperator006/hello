#include<stdio.h>
int main()
{
    printf("enter a number\n");
    int i;
    scanf("%d",&i);
    int *ptr=&i;
    int **pptr=&ptr;
    printf("the number is %d\n",*(*pptr));
    return 0;
}