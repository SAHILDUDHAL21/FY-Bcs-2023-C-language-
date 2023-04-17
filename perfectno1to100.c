#include<stdio.h>

int main()
{
int n,i=1,sum=0;

for(n=1;n<=100;n++)
{
while(i<n)
{
  if(n%i==0)
  {
   sum=sum+i;
  }
  i++;
}

if(sum==n)
{
  printf("\n%d",i);
}
}
}
