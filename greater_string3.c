// 2)  Accept 3 string and display greatest string

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[40],s2[40],s3[40];
    int i,c1=0,c2=0,c3=0;
    printf("\nEnter first String:");
    fgets (s1,40,stdin);
    printf("\n Enter second String:");
    fgets(s2,40,stdin);
    printf("Enter third string:");
    fgets(s3,40,stdin);
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
    
    for(i=0;s3[i]!='\0';i++)
    {
        c3++;
    }
    printf("\n length of third string  =%d",c3);

    if(c1>c2&&c1>c3)
    {
        printf("\n First String is maximum.");
        printf("\n String=%s",s1);
    }
    else if(c2>c1&&c2>c3)
    {
        printf("\n Second String is maximum.");
        printf("\n String=%s",s2);
    }
    else
    {
        printf("\n third String is maximum.");
        printf("\n String=%s",s3);
    }

}   
