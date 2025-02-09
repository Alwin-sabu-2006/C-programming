#include<stdio.h>
int main()
{
 char operator;
 int num1,num2;
 int sum,product,division,subtraction;
 printf("You can perform the following operations\n use\n '+'\n '-' \n' *' \n' %%'");
 printf("Enter the first number:");
 scanf("%d",&num1);
 printf("\nEnter the operator");
 scanf(" %c",&operator);
 printf("Enter the second number:");
 scanf("%d",&num2);
 switch(operator)
 {
   case '+':
      sum=num1+num2;
      {
        printf("Sum of %d and %d is:%d ",num1,num2,sum);
        break;
      }
   case '-':
     subtraction=num1-num2;
     {
       printf("%d - %d is:%d",num1,num2,subtraction);
       break;
     }
   case '*':
     product=num1*num2;
     {
      printf("The product of %d and %d is:%d",num1,num2,product);
      break;
     }
   case '%':
     division=num1\\num2;
     {
      printf(" The remainder of %d and %d is:%d",num1,num2,division);
      break;
     }
  default:
     printf("Invalid Entry");
  }
 return 0;
}
