#include<stdio.h>
int main()
{
        int num,a;
        do
        {
        printf("enter a number\n");
        scanf("%d",&num);
        if(num%7==0)
        {
            printf("you entered a multiple of 7\n");
            break;
        }
    }while(1);//hamesha run karta rahega always true while(1)
return 0;
}