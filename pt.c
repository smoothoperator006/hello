#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    int c=*ptr;    
    printf("the number and its adress are as follows:%d %u \n",c,&age);/*idhar hamne %p kiya hota to adress ki value aati 
    hexadecimal form me but we are using %u this will convert the hexadecimal value to unsigned int*/
    return 0;
}