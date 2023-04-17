#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40];
    int i,c1=0,c2=0;
    printf("\nEnter first String:");
    fgets (s1,40,stdin);
    printf("\n Enter second String:");
    fgets(s2,40,stdin);
    for(i=0;s1[i]!='\0';i++)
    {
        c1++;
    }
    printf("\n length of first string  =%d",c1);
    
    for(i=0;s2[i]!='\0';i++)
    {
        c2++;
    }
    printf("\n length of second string  =%d",c2);

    if(c1<c2)
    {
        printf("\n First String is minimum.");
        printf("\n String=%s",s1);
    }
    else
    {
        printf("\n Second String is minimum.");
        printf("\n String=%s",s2);
    }
}   
