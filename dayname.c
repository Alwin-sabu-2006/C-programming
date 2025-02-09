//This prgm is to print  a day using day number using case operator
#include<stdio.h>
int main()
{
 int daynumber;
 printf("1.Monday\n2.Tue\n3.Wed\n4.Thur\n5.Fri\n6.Sat\n7.Sun");
 printf("\nEnter the day number:");
 scanf("%d",&daynumber);
 switch(daynumber)
 {
   case 1:printf("Monday");
          break;
   case 2:printf("Tuesday");
          break;
   case 3:printf("Wednesday");
          break;
   case 4:printf("Thursday");
          break;
   case 5:printf("Friday");
          break;
   case 6:printf("Saturday");
          break;
   case 7:printf("Sunday");
          break;
   default :
        printf("Invalid Entry");
   return 0;       
  }
}
