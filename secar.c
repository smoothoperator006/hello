#include<stdio.h>
int main()
{
    printf("enter array size\n");
    int n,high=0,hi=0,li=0,high2=0,low=0,low2=0;
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    low=a[0];
    high=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
            hi=i;
        }
        if(a[i]<low)
        {
            low=a[i];
            li=i;
        }
    }
    high2=(a[0]==high)?a[1]:a[0];//agar ye true hogya suppose a[0]he sabse bada hai to ye high2 ki initalization value a[1] set karega
    for(int i=0;i<n;i++)
    {
        if(a[i]>high2 && a[i]<high)
        {
            high2=a[i];//we can put in INT_MAX and INT_LOW if we wabt to
        }
    }
    low2=(a[0]==low)?a[1]:a[0];
     for(int i=0;i<n;i++)
     {
        if(a[i]<low2 && a[i]>low2)
        {
            low2=a[i];
        }
     }
    printf("the second largest number in the array:%d \n",high2);
    printf("the second lowest number in the array:%d \n",low2);
    return 0;
}