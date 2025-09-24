//program to print roots of eqn using switch
#include<stdio.h>
#include<math.h>
int main()
{
    double a=0,b=0,c=0,D=0,r1=0,r2=0;
    printf("if an eqn is in a form of ax^2+bx+c=0\nthen enter a b and c in order\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0?1:(D==0?2:3))
    {
    case 1://real and distinct roots
    {
       r1=(-b+sqrt(D))/2*a;
       r2=(-b-sqrt(D))/2*a;
    printf("the eqn has distinct and real roots:%lf %lf\n",r1,r2);
    break;
    }
    case 2://real and equal roots
    {
        r1=r2=-b/2*a;
        printf("the eqn has real and equal roots:%lf\n",r1);
        break;
    }
    case 3://imaginary roots
    {
        double real=0.0;
        double imag=0.0;
        real=-b/2*a;
        imag=sqrt(-D)/2*a;
        printf("the eqn has imaginary roots\nroot 1:%lf+%lfi\nroot2:%lf-%lfi",real,imag,real,imag);
        break;
    }
    }
    return 0;
}