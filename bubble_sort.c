#include<stdio.h>
int main()
{
    printf("enter the arry size\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter the elemts\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
       if(a[j]<a[min_index])
       {
          min_index=j;
       }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    printf("the sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}