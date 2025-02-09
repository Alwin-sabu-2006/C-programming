#include<stdio.h>
int main()
{
 float s,c;
 printf("Enter the Cost Price:");
 scanf("%f",&c);
 printf("Enter the Selling Price:");
 scanf("%f",&s);
 if (s>c)
    {
     printf("Its Profit");
    }
 else
   {
    printf("Its a loss");
    }
 return 0;
}
