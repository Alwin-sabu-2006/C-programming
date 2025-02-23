#include<stdio.h>
int main()
{
 int n,i,result;
 printf("Enter the number ");
 scanf("%d",&n);
 for(i=0;i<=10;i++)
 {
  result=n*i;
  printf("%d * %d =%d \n ",n,i,result);
 }
 return 0;
}







