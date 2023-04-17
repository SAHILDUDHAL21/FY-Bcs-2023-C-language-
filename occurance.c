#include<stdio.h>
int main()
{	
	int a[100],i,n,num,o=0;
	printf("Enter limit::");
	scanf("%d",&n);
	
	printf("Enter Array Elements");
	for(i=0;i<=n;i++)
	{
			scanf("%d",&a[i]);
	}
	
	printf("Enter number to count::");
	scanf("%d",&num);
	
	for(i=0;i<=n;i++)
	{
		if(a[i]==num)
		{
			o++;
		}
	}
	
	printf("%d has occur %d times.",num,o);
	
}
