#include<stdio.h>
int large(int array[],int);
int main()
{
 int array[50],elements,size,i=0;
 printf("Enter the size of array:");
 scanf("%d",&size);
 for(i=0;i<size;i++)
{
 printf("Enter the elements:");
 scanf("%d",&array[i]);
}

 int largest_element=large( array, size);
 printf("The largest element is %d",largest_element);
 return 0;
}
int large(int array[],int size)
{
 int largest=array[0];
 int i;
 for(i=1;i<=size;i++)
{
  if(array[i]>array[0])
  {
  largest=array[i];
  }
}
return largest;
}
