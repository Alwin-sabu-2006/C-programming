#include<stdio.h>
int sub(int,int);
int main()
{
 int x,y;
 printf("Enter the numbers:");
 scanf("%d %d",&x,&y);
 int result=sub(x,y);
 printf("The difference of %d and %d is %d:",x,y,result);
 return 0;
}
int sub(int x,int y)
{
 int subtract=x-y;
 return subtract;
}
