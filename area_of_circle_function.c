#include<stdio.h>
int main()
{
    float r;
    void circle(float r);
    printf("Enter Radius");
    scanf("%f",&r);
    circle(r);
}
void circle(float r)
{
    float a=3.14*r*r;
    float p=2*3.14*r;
    printf("\n Area of circle=%f",a);
    printf("\n Perimeter of circle=%f",p);
}