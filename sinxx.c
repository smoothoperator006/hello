#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
int main()
{
    printf("enter the value of n and x in degrees\n");
    int fact=1;
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    double sum = 0.0;
    double ang=0;
    ang = (x * PI / 180.0); // Convert degrees to radians
    int a=-1;
    for(int i = 1; i <= n; i=i+2);
    {
        for(int j=1;j<=i;j++)
        {
            fact = fact * j;
        }
        sum=sum-a*pow(ang, i) / fact;
        a=-a;
        fact = 1; // Reset factorial for the next iteration
    }
    printf("sin(%lf) = %lf\n", x, sum);
    return 0;
}
