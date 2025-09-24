#include<stdio.h>
int main()
{
    printf("enter 10 numbers\n");
    int arr[10],k;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=9;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                k=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=k;
            }
        }
    }
    printf("the sorted array is \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
    
}
