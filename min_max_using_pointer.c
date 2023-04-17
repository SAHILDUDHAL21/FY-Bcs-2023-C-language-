#include<stdio.h>
int main()
{
    void disp_min_max(int a[100],int n,int *min,int *max);
    int a[100],n,i,min,max;
    printf("Enter Limit:");
    scanf("%d",&n);
    printf("Enter n nos:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    disp_min_max(a,n,&min,&max);
    printf("\n Minimum No=%d",min);
    printf("\n Maximum No=%d",max);
}
void disp_min_max(int a[100],int n, int *min,int *max)
{
    int i;
    *min=a[0];
    *max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<*min)
          *min=a[i];
        if(a[i]>*max)
          *max=a[i];
    }
}