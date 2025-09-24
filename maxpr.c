#include<stdio.h>
int main()
{
printf("enter the array limit\n");
int n;
scanf("%d",&n);
int arr[n];
printf("enter %d elements of array\n",n);
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int high=1;
for(int i=0;i<n;i++)
{
    for(int j=n-1;j>i;j--)//imp
    {
        if(arr[i]*arr[j]>high)
        {
            high=arr[i]*arr[j];
        }
    }
}
printf("the highest product is %d\n",high);
return 0;
}