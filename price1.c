#include<stdio.h>
void calculateprice(double p);
int main()
{
    printf("enter the original price of your product");
    double p;
    scanf("%lf",&p);
    calculateprice(p);
    return 0;
}
void calculateprice(double p)
{
    double n=p+p*(0.18);//important veryyyyyyyy 9/50 will be 0 cause it is integers 9.0/50.0 likhna imp hai
    printf("the final price of your product is %lf \n",n);
}
