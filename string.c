#include<stdio.h>
int countStr(char arr[]);
void printStr(char arr[]);
int main()
{
    char a[100];
    fgets(a,100,stdin);
    int f=countStr(a);
    void printStr(a);
    printf("the length of string is %d\n",f);
    return 0;
}
int countStr(char arr[])
{
    int a=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        a++;
    }
    return a-1;
}
void printStr(char arr[])
{
    for(int i=0;i!='\0';i++)
    {
        printf("%c \n",arr[i]);
    }
    printf("\n");
}

