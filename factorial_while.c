#include<stdio.h>
int main()
{ 
 int n,fact=1;
 printf("Enter the Number:");
 scanf("%d",&n);
 while(n>0)
 {
  fact=fact*n;
  n=n-1;
 }
 if (n<0)
 {
  printf("Invalid");
 }
 else
   {
     printf("The factorial of the given no is:%d",fact);
   }
 return 0;
}
