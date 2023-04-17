include<stdio.h>
int main()
{
    int *a[10],i,n,s=0;
    float *pa,*psum,*pavg;
    float avg;
    pa=&a;
    psum=&s;
    pavg=&avg;
    printf("Enter limit");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%f",pa+i);
        *psum+=*(pa+i);
    }
    *pavg=*psum/n;
    printf("\nSum=%.2f",*psum);
    printf("\nAverage=%f",*pavg);
}