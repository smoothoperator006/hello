#include<stdio.h>
int main()
{
    int n,k=0;
    printf("enter the array limit\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number you want to search\n");
    int num;
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
          if(arr[i]==num)
          {
            printf("the element is at %d\n",i+1);
            k++;
          }
    }
    if(k==0)
    {
        printf("the elemtn is not present in array");
    }
    return 0;
}