#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],f,l;
    int i,c1=0;
    printf("\nEnter  String:");
    fgets (s1,40,stdin);

    f=s1[0];
    for(i=0;s1[i]!='\0';i++)
    {   
        c1++;
    }
    l=s1[c1-1];
    printf("\n first Character=%c",f);
    printf("\n last Character=%c",l);
}