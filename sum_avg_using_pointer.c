#include<stdio.h>
int main()
{
    int *a[100],n,i,s=0;
    float avg;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n;i++)
    {
        s=s+ *(a+i);
    }
    avg=(float)s/n;
    printf("Sum=%d",s);
    printf("Average=%f",avg);
}