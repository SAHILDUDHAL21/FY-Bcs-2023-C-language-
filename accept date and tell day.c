//accept date and tell day
//Eg: input date  7 1 2023 
//output Saturday 
#include<stdio.h>
int isLeapYear(int year){
    if(year%4==0){
        if(year%100==0 && year%400!=0){
            return 0;
        }
        else{
            return 1;

            
        }
    }
    else{
        return 0;
    }
}

int main() {
    int year;
    int refYear=1600, leap=0;
    int diff, totalDays,day,month, oddDays;
    int lYear[]={3,1,3,2,3,2,3,3,2,3,2,3};
        int nYear[]={3,0,3,2,3,2,3,3,2,3,2,3};
    char  week[7][10]={"sunday",
                   "monday",
                   "tuesday",
                   "wednesday"
                   ,"thursday"
                   ,"friday",
                   "saturday"};
     printf("Enter a date between  1600 to 3000\n");
      scanf("%d%d%d",&day,&month,&year);
    diff = year - refYear;
    while(refYear < year){
        if(isLeapYear(refYear))
            leap++;
        refYear++;
    }
    totalDays = leap*366 + (diff-leap)*365;
    oddDays = totalDays%7;
     
    if(isLeapYear(year)){
        for(int i=0;i<month-1;i++){
            oddDays+=lYear[i];
        }
        oddDays+=day%7;
    }
    else{
        for(int i=0;i<month-1;i++){
            oddDays+=nYear[i];
        }
        oddDays+=day%7;
    }
    printf("Day on %d/%d/%d ",day,month,year);
    printf("%s",week[(5+oddDays)%7]);
    return 0;
}