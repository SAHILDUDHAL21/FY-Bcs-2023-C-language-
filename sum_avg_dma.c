/*Write a program to allocate memory dynamically for n integers.
Accept the elements and calculate their sum and average*/
#include<stdio.h>
#include<malloc.h>
int main()
{
    int *a,n,i,s=0;
    float avg;
    printf("Enter Limit");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    printf("Enter n nos");
    for(i=0;i<n;i++)
        scanf("%d",a+i);

    for(i=0;i<n;i++)
    {
        s=s+*(a+i);
    }
    avg=(float)s/n;
    printf("\n Sum=%d",s);
    printf("\n Average=%d",avg);
}