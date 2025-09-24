#include<stdio.h>
int main()
{
      printf("enter the number");
      int num,num1,rev=0,rem;
      scanf("%d",&num);
      num1=num;
      while(num1>0)
      {
        rem=num1%10;
        rev=rev*10+rem;
        num1=num1/10;
      }
      if(rev==num)
      {
        printf("the number is palindrome");
      }
      else{
        printf("not palindrome");
      }
      return 0;
}