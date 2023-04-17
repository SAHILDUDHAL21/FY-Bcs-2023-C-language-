#include<stdio.h>
#include<string.h>
int main()
{
   int a[100],n,i,p,num;
printf("enter limit");
scanf("%d",&n);
printf("enter n number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
} 
printf("enter number to insert");
scanf("%d",&num);
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
a[i+1]=a[i];
}
a[p]=num;
printf("\n arry=");
for(i=0;i<n+1;i++)
printf("%d\t",a[i]);
}