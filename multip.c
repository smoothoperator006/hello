#include<stdio.h>
int main()
{
    printf("enter 9 elemsnts\n");
    int ar[3][3],ar2[3][3],i=0,j=0,k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&ar[i][j]);
    }
    int c[3][3];
    printf("enter 9 elemnts");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar2[i][j]);
            c[i][j]=0;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]=+ar[i][k]*ar2[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}