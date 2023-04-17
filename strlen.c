#include<ctype.h>
#include<string.h>
#include<stdio.h>
int main()
{
   char s1[100];
   printf("Enter string:");
   fgets(s1,sizeof(s1),stdin);
   printf("\n Lowercase String=%d",strlen(s1));
}