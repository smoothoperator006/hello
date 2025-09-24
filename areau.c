#include<stdio.h>
void sqaure(int s);
void circle(int r);
void rect(int l,int b);
int main()
{
    printf("if you want to calculate the area of a circle, enter c \nif you want to calculate the area of a rectangle, enter r \nif you want to calculate the area of a square, enter s");
    char ch;
    scanf("%c",&ch);
    if(ch=='c')
    {
         printf("enter the radius");
         int r;
         scanf("%d",&r);
        circle(r);
    }
    else if(ch=='r')
    {
        printf("enter the lenght and breadth of the rectangle");
        int l,b;
        scanf("%d %d",&l,&b);
        rect(l,b);
    }
    else if(ch=='s')
    {
        printf("enter the side of the sqaure");
        int s;
        scanf("%d",&s);
        sqaure(s);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
void sqaure(int s)
{
    printf("the are of the square is %d \n", s*s);
}
void circle(int r)
{
    printf("the are of the circle is %lf \n", 3.1457*(r*r));

}
void rect(int l,int b)
{
    printf("the are of the rectangle is %d \n", l*b);

}
