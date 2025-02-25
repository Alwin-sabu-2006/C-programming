#include<stdio.h>
#include <string.h>
int main()
{
 char learn[30], temp[30];
 printf("Enter the first string:");
 scanf("%[^\n]",learn);
 printf("\n Enter the 2nd string:");
 scanf("%s",temp);
 if (strcmp(learn,temp)==0)
 {
  printf("The given strings are same");
 }
 else
 {
  printf("The given strings are not same");
 }
 return 0;
}
