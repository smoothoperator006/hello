#include<stdio.h>
int main()
{
    printf("enter principal,rate,term");
    double p,r,n,si,ci;
    scanf("%lf %lf %lf",&p,&r,&n);
    double a=1.00;
    for(int i=1;i<=n;i++)
    {
        a=a*(1+r/100);//pow(base,exponent) is used for calculkating indices.
    }
    ci=p*a-p;
    si=p*n*r/100;
    printf("the simple interest is %lf \n", si);
    printf("the compound interest is %lf \n", ci);
    return 0;
}