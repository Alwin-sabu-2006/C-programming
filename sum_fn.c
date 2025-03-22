#include<stdio.h>
int add(int,int);
int main()
{
 int x,y;
 int result=add(x,y);
 printf("The sum is %d",result);
 return 0;
}
int add(int x,int y)
{
int sum;
printf("Enter the numbers:");
scanf("%d %d",&x,&y);
sum=x+y;
return sum;
}
