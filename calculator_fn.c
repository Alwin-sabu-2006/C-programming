#include<stdio.h>
int add(int,int);
int div(int,int);
int sub(int,int);
int mul(int ,int);
int main()
{
 int operation,x,y;
 printf("\n 1.Add \n 2.Multiply \n 3.division \n 4.subtract ");
 printf(" \n Enter the numbers:");
 scanf("%d %d",&x,&y);
 printf("Enter the no. of the operation that needed to be performed");
 scanf("%d",&operation);
 switch(operation)
{
 case 1:
   int result=add(x,y);
   printf("The sum of %d and %d: %d",x,y,result);
   break;
 case 2:
   int product=mul(x,y);
   printf("The product of %d and %d is :%d",x,y,product);
   break;
 case 3:
   int division=div(x,y);
   printf("The division of %d and %d is:%d",x,y,division);
   break;
 case 4:
   int subtraction=sub(x,y);
   printf("The difference of %d and %d is:%d",x,y,subtraction);
   break;
 default:
   printf("Enter valid option");
 }
 return 0;
}
int add(int x,int y)
{
 return x+y;
}
int mul(int x,int y)
{
 return x*y;
}
int div(int x,int y)
{
 return x/y;
}
int sub(int x,int y)
{
 return x-y;
}
