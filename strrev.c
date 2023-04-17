#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main()
{
   char s1[30];
   char *strrev(char *s1);
   printf("Enter string:");
   fgets(s1,sizeof(s1),stdin);
   printf("\n Reverse String=%s",strrev(s1)); 
   return 0;
}