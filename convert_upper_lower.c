#include<stdio.h>
int main()
{
 char str[50];
 printf("Enter the string:");
 scanf("%[^\n]",str);
 for(int i=0;str[i]!='\0';i++)
 {
  if(str[i]>='a' && str[i]<='z')
  {
   str[i]=str[i]-32;
  }
  else if (str[i]>='A' && str[i]<='Z')
  {
   str[i]=str[i]+32;
  }
 }
printf("The resultant string is %s:",str);
return 0;
}
 
 
 
