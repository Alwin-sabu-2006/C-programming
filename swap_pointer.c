#include<stdio.h>
void swap(int *a, int *b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
int main()
{
 int a,b;
 printf("Enter the number1:");
 scanf("%d",&a);
 printf("Enter the number2:");
 scanf("%d",&b);
 printf("The numbers before swapping is %d,%d:",a,b);
 swap(&a,&b);
 printf(" \n The numbers after swapping is %d,%d:",a,b);
 return 0;
}
 
 
