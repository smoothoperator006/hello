#include<stdio.h>
int main()
{
    printf("enter 1 if you want to shift right\nenter 2 if you want to shift left\n");
    int a,i=0,j=0;
    scanf("%d",&a);
    printf("enter k you want shifted with\n");
    int k;
    scanf("%d",&k);
    printf("enter 5 numbers\n");
    int arr[5];
    int n=5;
    for(i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);
    }
        printf("the sorted array is\n");
    switch(a)
    {
        case 1:
        {
        int temp;
        for(i=0;i<k;i++)
        {
            int temp=arr[n-1];
            for(j=n-1;j>0;j--)
            {
            arr[j]=arr[j-1];
            }
          arr[0]=temp;
        }
        for(i=0;i<5;i++)
        {
            printf("%d\n",arr[i]);
        }
        break;

    }
        case 2:
        {
        int temp;
        for(i=0;i<k;i++)
        {
            int temp=arr[0];
            for(j=0;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
        for(i=0;i<5;i++)
        {
            printf("%d\n",arr[i]);
        }
        break;
    }
      
    }
}