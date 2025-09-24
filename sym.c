#include<stdio.h>
int main()
{
    int m,n;
    printf("enter rows and columns of the matrix\n");
    scanf("%d %d",&m,&n);
    int arr[m][n],k=0;
    printf("enter the matric");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(m!=n)
    {
        printf("the matrix is not a square matrix let alone a symmetric one");
        
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                  k++;
            }
        }
    }
    if(k!=0)
    {
        printf("not a symmetric matrix\n");
    }
    else{
        printf("it is a symmetric matrix");
        }
        return 0;
}