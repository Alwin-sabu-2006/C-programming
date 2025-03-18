#include<stdio.h>
int reversed_num(int);
int main()
{
 int num,num_2,palindrome;
 printf("Enter the number:");
 scanf("%d",&num);
 num_2=num;
 palindrome=reversed_num(num);
 if(palindrome==num_2)
 {
  printf("It is a palindrome");
 }
 else
 {
  printf("It is not a palindrome");
 }
 return 0;
}
int reversed_num(int num)
{
 int remainder,reversed_num=0;
 while (num!=0)
 {
 remainder=num%10;
 reversed_num=(reversed_num*10)+remainder;
 num=num/10;
 }
 return reversed_num;
}
