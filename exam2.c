#include<stdio.h>
int main()
{
    printf("enter the n of arrays\n");
    int n,i=0,j=0;
    scanf("%d",&n);
    int arr[n];
    printf("enter %d numbers\n",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
    int swap=0;
    for(j=0;j<n-i-1;j++)
    { 
        if(arr[j]>arr[j+1])
        {
            
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swap=1;
        }
    }
    if(swap==0)
    {
        break;
    }
}
printf("the sorted array is \n");
for(i=0;i<n;i++)
{
     printf("%d\n",arr[i]);
}
return 0;
}