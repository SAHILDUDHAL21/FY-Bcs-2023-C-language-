#include<stdio.h>
int main()
{
    int n,c,*x;
    printf("Enter  no::");
    scanf("%d",&n);
    x=&n;  
    c=*x**x**x;
    printf("\n Cube of %d is %d",n,c);  
}