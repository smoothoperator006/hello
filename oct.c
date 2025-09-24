#include<stdio.h>
#include<math.h>
int main()
{
    int bin,dec=0,oct=0,n=0,i=0,place=1;
    printf("enter number in binary form\n");
    scanf("%d",&bin);
    n=bin;
    while(n>0)
    {
        dec=dec+(n%10)*pow(2,i);
        n=n/10;
        i++;
    }
    n=dec;
    while(n>0)
    {
        oct=oct+n%8*place;
        n=n/8;
        place=place*10;//imp step
    }
    printf("octal form of %d is %d\n",bin,oct);
    return 0;
}