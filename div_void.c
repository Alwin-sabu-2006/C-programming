#include<stdio.h>
void div(int,int);
int main()
{
 int x,y;
 div(x,y);
 return 0;
}
void div(int x, int y)
{
 printf("Enter the numbers:");
 scanf("%d %d",&x,&y);
 int div=0;
 div=x/y;
 printf("The division of %d and %d is:%d",x,y,div);
}
