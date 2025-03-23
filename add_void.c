#include<stdio.h>
void add(int,int);
int main()
{
 int x, y;
 add(x,y);
 return 0;
}
void add(int x, int y)
{
 int sum=0;
 printf("Enter the numbers:");
 scanf("%d %d",&x,&y);
 sum=x+y;
 printf("The sum is %d:",sum);
}
