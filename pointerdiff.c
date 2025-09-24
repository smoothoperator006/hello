#include<stdio.h>
void sq(int n);
void sq1(int *n);
int main()
{
    printf("enter you number\n");
    int num;
    scanf("%d",&num);
    sq(num);
    printf("the number is %d\n",num);
    sq1(&num);
    printf("the number is %d\n",num);
return 0;
}
void sq(int n)//call by value 
{
    n=n*n;
    printf("the sqauare is %d\n",n);
}
void sq1(int *n)//call by reference
{
    *n=(*n)*(*n);
    printf("the sqauare is %d\n",*n);
}