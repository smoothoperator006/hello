#include<stdio.h>
void rev(int arr[],int n);
int main()
{
    int n;
    printf("enter the limit of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    rev(arr,n);
    return 0;
}
void rev(int arr[],int n)
{
   for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
   printf("the reversed array is:\n");
   for(int i=0;i<n;i++)
   {
    printf("%d\n",arr[i]);
   }
}
