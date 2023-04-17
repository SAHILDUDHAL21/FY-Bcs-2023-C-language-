#include<stdio.h>
int main()
{
    int n,*x;
    printf("Enter  no::");
    scanf("%d",&n);
    x=&n;  
    if(*x%2==0)
       printf("No is even");
    else
       printf("No is odd");
}