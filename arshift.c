#include<stdio.h>
int main()
{
    printf("enter the array limit\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements of array\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want the array to be shifted with\n");
    int k;
    scanf("%d",&k);
    int temp[n];
     // rotate right by k
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = a[i];
    }

    // copy back to a[]
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }

    printf("Shifted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}