#include<stdio.h>
int main()
{
    int a,b,c,*x,*y,*z,min;
    printf("Enter 3 no's");
    scanf("%d%d%d",&a,&b,&c);
    x=&a;
    y=&b;
    z=&c;
    if((*x>*y)&&(*x>*z))
      printf("\n Maximum no=%d",*x);
    else if((*y>*x)&&(*y>*z))
      printf("\n Maximum no=%d",*y);
    else if((*z>*x)&&(*z>*y))
      printf("\n Maximum no=%d",*z);
}