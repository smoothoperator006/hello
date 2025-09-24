#include<stdio.h>
#include<math.h>
int main()
{
    int a,num,n=0;
    printf("enter 0 if you want binary to decimal conversion\nenter 1 if you want decimal to binary conversion\n");
    scanf("%d",&a);
    switch(a)
    {
        case 0:
        {
        int power=0;
        printf("enter binary number\n");
        scanf("%d",&num);
        n=num;
        int dec=0,a=0;
        while(n>0)
        {
            dec=dec+(n%10)*(1 << power);
            n=n/10;
            power++;
        }
        printf("the decimal number is %d\n",dec);
        break;
    }
        case 1:
        {
        printf("enter decimal number\n");
        scanf("%d",&num);
        n=num;
        int bin=0,place=1;
        while(n>0)
        {
            bin=bin+(n%2)*place;
            n=n/2;
            place=place*10;
        }
        printf("the binaryy number is %d\n",bin);
        break;
    }
    }
    return 0;
}