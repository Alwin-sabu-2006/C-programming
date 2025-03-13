#include<stdio.h>
int main()
{
 int i=1,n;
 printf("Enter the number:");
 scanf("%d",&n);
 while(i<=n)
 {
  if(n%i==0)
  {
   printf(" \nThe number %d is a factorial of %d",i,n);
  }
  i++;
 }
return 0;
}
