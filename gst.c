#include<stdio.h>
int main()
{
    double fc=0.0,gst=0.0;
    printf("enter cost of 3 items\n");
    double arr[3];
    for(int i=0;i<3;i++)
    {
        scanf("%lf",&arr[i]);
    }
    for(int i=0;i<3;i++)
    {
        gst=arr[i]*0.18;
        fc=arr[i]+gst;
        printf("the final cost of %lf after 18 percent gst is %lf\n",arr[i],fc);
        fc=0.0;
        gst=0.0;
    }
  return 0;
}