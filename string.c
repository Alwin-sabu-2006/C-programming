#include<stdio.h>
int main()
{
 char learn[30];
 printf("Enter the string:");
 scanf("%[^\n]",learn);
 printf("The entered string is %s",learn);
 return 0;
}
