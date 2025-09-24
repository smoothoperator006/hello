//find and print the elements that occur only once
//can be done through other ways but i sorted it first then aage ka kiya
#include<stdio.h>
void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int main()
{
    printf("enter array limit\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elemts\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(int i=0;i<n-1;i++)
    {
        int k=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                {
                   k++;
                }
                else 
                break;
        }
        if(k==1)
        {
            printf("%d exists only once\n",arr[i]);
        }
        i=i+k-1;
        }
        return 0;
}
