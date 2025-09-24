#include<stdio.h>
int main()
{
    int n,i=0,j=0;
    printf("enter n\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int low=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[low])
            {
                low=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[low];
        arr[low]=temp;
    }
    printf("the sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}