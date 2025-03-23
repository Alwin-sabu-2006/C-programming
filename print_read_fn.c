#include<stdio.h>
void read(int arr[],int);
void print(int arr[],int);
int main()
{
 int arr[50],size;
 read(arr,size);
}
void read(int arr[], int size)
{
 int i=0;
 printf("Enter the size:");
 scanf("%d",&size);
 for(i=0;i<size;i++)
{
 printf("Enter the element");
 scanf("%d",&arr[i]);
}
print(arr,size);
}
void print(int arr[], int size)
{
 int i=0;
 for(i=0;i<size;i++)
{
 printf("%d : %d \n",i,arr[i]);
}
}
