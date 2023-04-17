//all arithamtic operation using pointer
#include<stdio.h>
int main()
{
    int a,b,*x,*y;
    printf("Enter Two Number");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    printf("\n Addition=%d",*x+*y);
    printf("\n Subtraction=%d",*x-*y);
    printf("\n Multiplication=%d",*x* *y);
    printf("\n Division=%d",*x/ *y);
    printf("\n mod=%d",*x%*y);   
}