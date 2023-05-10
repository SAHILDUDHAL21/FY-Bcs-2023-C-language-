//write a program to accept a strig and two characters as command line argument and replace all ocerances of first character by the second
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
          char s1[30]=(atol)(argv[1]);
          char c1 =*(argv[2]);
          char c2= *(argv[3]);
          int i;
          for (i=0;s1[i]!='\0';i++)
          {
                if(s1[i]==c1)
                    printf("%c",c2);
                else
                    printf("%c",s1[i]);
          }
}
