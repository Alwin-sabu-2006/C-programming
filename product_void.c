#include<stdio.h>
void mul(int,int);
int main()
{
 int x,y;
 mul(x,y);
 return 0;
}
void mul(int x, int y)
{
 int product=1;
 printf("Enter the numbers:");
 scanf("%d %d",&x,&y);
 product=x*y;
 printf("The product of %d and %d is %d",x,y,product);
}
