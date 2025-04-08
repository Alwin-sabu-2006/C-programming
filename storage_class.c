#include<stdio.h>
int d=10;
void mix()
{
 int auto a=1;
 int static b=1;
 
 a++;
 b++;
 printf("\n The new values a:%d and b:%d",a,b);
 
}
int reg()
{ 
 register int a=1;
 return a;
}
int main()
{
 mix();
 mix();
 mix();
 printf("\n The storage of a is:%d",reg());
 int g=d;
 printf("\n The external value is :%d",d);
 return 0;
}
 



