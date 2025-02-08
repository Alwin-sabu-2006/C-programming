#include <stdio.h>
int main()
{
 int number;
 printf("Enter the number");
 scanf("%d",&number);
 if(number%2==0)
      {
        printf("The number %d is an even number",number);
       }
 else
     {
       printf("The number %d is not an even number",number);
      }
 return 0;
}
