#include<stdio.h>
int main()
{
  int side1,side2,side3;
  printf("Enter Angle 1:");
  scanf("%d",&side1);
  printf("Enter Angle2:");
  scanf("%d",&side2);
  printf("Enter Angle3:");
  scanf("%d",&side3);
  if(side1+side2+side3==180)
        {
          printf("It is  a Triangle");
         }
  else
      {
        printf("It is not a Triangle");
       }
  return 0;
}
