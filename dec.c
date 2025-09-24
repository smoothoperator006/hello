#include<stdio.h>
#include<math.h>
int main()
{
    printf("enter the number in octal form\n");
    int oct,dec=0,bin=0,n,i=0,place=1;
    scanf("%d",&oct);
    n=oct;
    while(n>0)
    {
        dec=dec+(n%10)*pow(8,i);
        n=n/10;
        i++;
    }
    n=dec;
    while(n>0)
    {
        bin=bin+n%2*place;
        n=n/2;
        place=place*10;
    }
    printf("the binary form of %d is %d",oct,bin);
    return 0;
}