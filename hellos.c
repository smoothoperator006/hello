#include<stdio.h>
void print(char arr[]);
int main()
{
    char name[]="Ayush Joshi";
    print(name);
    return 0;
}
void print(char arr[])
{
    for(int i=0;arr[i]!='\0';i++)//the declaration of strings in c is through string arrays char a[]={'a','y','\0'}\0 is used to terminate the string or else the array will br considered as char
    {
        printf("%c",arr[i]);
    }
}
//%s is a format specifier esepcially for string.