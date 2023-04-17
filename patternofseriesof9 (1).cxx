//pattern like 9,99,999,9999
#include <stdio.h>

void main()
{   long int n,i,t=9;
	int sum =0;
	printf("Input the number or terms :");
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{ sum +=t;
	  printf("%ld   ",t);
	  t=t*10+9;
	}
	printf("\nThe sum of the series = %d \n",sum);
} 
