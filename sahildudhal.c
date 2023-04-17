#include<stdio.h>
struct student
{
    int rno;
    char sname[20];
    float sub[6];
}s1;
int main()
{
    int i,j=1;
    float sum=0,avg;
    printf("\n Enter Roll no=");
    scanf("%d",&s1.rno);
    printf("\n Enter Name=");
    scanf("%s",&s1.sname);
    printf("\n");
    for(i=0;i<6;i++)
    {
        printf("Enter %d subject Marks  ",j++);
        scanf("%f",&s1.sub[i]);
    }


    for(i=0;i<6;i++)
    {
        sum=sum+(s1.sub[i]);
    }
    avg=sum/6;
    
    printf("\n Roll no=%d",s1.rno);
    printf("\n Student Name=%s",s1.sname);
    printf("\n Total Marks =%f",sum);
    printf("\n Persentage =%f",avg);
}
