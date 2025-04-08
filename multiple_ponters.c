#include<stdio.h>
int main()
{
 int a=10;
 int *p,**q;
 p=&a;
 q=&p;
 printf(" \n THe value of a is:%d",a);
 printf(" \n The value of *p is %d",*p);
 printf(" \n The value of **q is %d",**q);
 return 0;
}
