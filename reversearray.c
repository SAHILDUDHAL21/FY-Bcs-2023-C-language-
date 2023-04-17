#include <stdio.h>
int main()
{
   int i,n,a[100];
   printf("Enter limit:");
   scanf("%d",&n);
   printf("Enter array elements ");
   for(i=0;i<n;i++)
   {
	  scanf("%d",&a[i]);
   }
   printf("\n Reverse nos=");
   for(i=n-1;i>=0;i--)
      {
	   printf("%d\t",a[i]);
	  }
   printf("\n\n");
} 