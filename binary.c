#include<stdio.h>
int* sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}
int main()
{
   printf("enter the array limit\n");
   int n;
   scanf("%d",&n);
   printf("enter the array numbers\n");
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   int *s=sort(a,n);
   int high=n-1,low=0;
   int found = 0;
   printf("enter the number you want to search\n");
   int num;
   scanf("%d",&num);
   while(high>=low)
   {
    int mid=(low+high)/2;
       if(num>s[mid])
       {
        low=mid+1;
       }
       else if(num<s[mid])
       {
        high=mid-1;
       }
       else
       {
        printf("the number %d is present at index %d of array\n",num,mid);
        found = 1;
        break;
       }
   }
   if(!found)
   {
     printf("the number is not present in array\n");
   }
   return 0;
}