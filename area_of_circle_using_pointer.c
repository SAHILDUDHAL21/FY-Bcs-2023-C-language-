#include<stdio.h>
int main()
{
    float r,*pa,a;
    printf("Enter radius=");
    scanf("%f",&r);
    pa=&r;
    a=(float)3.14* *pa * *pa;
    printf("\n Area of circle=%f",a);
}