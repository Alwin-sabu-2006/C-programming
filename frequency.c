#include<stdio.h>
#include<string.h>
int main()
{
 char str[50];
 int len,i=0,j=0;
 printf("Enter the string:");
 scanf("%[^\n]",str);
 len=strlen(str);
 for(i=0;i<len;i++)
 {
  int count=1;
  if(str[i]!='\0')
  {
   for(j=i+1;j<len;j++)
    {
     if(str[i]==str[j])
     {
      count++;
      str[j]='\0';
     }
    }
   printf("%c : %d \n",str[i],count);
   }
   
  }
return 0;
}
