#include<stdio.h>
int main()
{
   int a[100],n,i,p;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter n number");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    parat:
    printf("\n enter position");
    scanf("%d",&p);
    if(p>=n)
    {
    printf("\n invalid position");
    goto parat;
    }

    for(i=n;i>=p;i--)
    {
        a[i]=a[i+1];
    }
    a[i]='\0';
    printf("\n arry=");
    for(i=0;i<n+1;i++)
    printf("%d\t",a[i]);
}