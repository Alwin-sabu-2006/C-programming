#include<stdio.h>
int main()
{
 char learn[30], temp;
 int i,j,len;
 printf("Enter the string:");
 scanf("%[^\n]",learn);
 for (len=0;learn[len]!='\0';len++);
 
 for(i=len-1,j=0;j<len/2;j++,i--)
 {
  temp=learn[i];
  learn[i]=learn[j];
  learn[j]=temp;
 }
 printf("The reversed string is:%s",learn);

 return 0;
}
