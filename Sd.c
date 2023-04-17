#include<stdio.h>

int main()
{   char ch ;
    int a,b,c;
    printf("Enter two nos :");
    scanf("%d%d",&a,&b);
    printf("1-addition \n2-subtraction \n3-multiplication \n4-division");
    printf("enter choice");
    scanf("%d",&ch);
   
    
    switch(ch)
{   
     
   case 1 : c=a+b;
              printf("Addition =%d",c);
             break;
   case 2 : c=a-b;
              printf("Subtraction=%d",c);
            break;
   case 3 : c=a*b;
              printf("Multiplication =%d",c);
             break;
   case 4 : c=a/b;
              printf("Division=%d",c);
             break;
   default : printf("Invalid choice...");
 
}
}
 
 

    
    
    
    
    
    
    
    