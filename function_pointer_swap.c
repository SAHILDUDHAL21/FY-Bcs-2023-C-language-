#include<stdio.h>
int main()
{
    int a,b;
    void swap(int *a,int *b);
    printf("Enter Two Numbers::");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\n Swap value of a=%d",a);
    printf("\n Swap value of b=%d",b);
}   
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}