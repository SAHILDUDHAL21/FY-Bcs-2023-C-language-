#include<stdio.h>
int main()
{
    int a,b,t,*x,*y;
    printf("Enter 1st no::");
    scanf("%d",&a);
    printf("Enter 2st no::");
    scanf("%d",&b);
    x=&a;  y=&b;

       t=*x;
       *x=*y;
       *y=t;

    printf("\n First no=%d",*x);   
    printf("\n Second no=%d",*y);
}