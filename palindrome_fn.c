#include<stdio.h>
int pal(int);
int main()
{
 int num,result;
 printf("Enter the number:");
 scanf("%d",&num);
 result=pal(num);
 if (result==num)
 {
  printf("The given  no:%d a palindrome",num);
 }
 else
 {
  printf("The given no %d is not palindrome",num);
 }
}
int pal(int num)
{
 int rev;
 while(num>0)
 {
  int n=num%10;
  rev=rev*10+n;
  num=num/10;
 }
 return rev;
}
