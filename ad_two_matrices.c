#include<stdio.h>
void add(int a[100][100],int b[100][100], int result[100][100],int size);
int main()
{
 int a[100][100],b[100][100],result[100][100];
 int i,j;
 int size;
 printf("Enter the size of the matrix");
 scanf("%d",&size);
 printf("\nEnter the elements for first matrix");
 for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   printf("\nEnter the element:");
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter the elements for second matrix");
 for( int i=0;i<size;i++)
 {
  for(int j=0;j<size;j++)
  {
   printf("\nEnter the element:");
   scanf("%d",&b[i][j]);
  }
 }
 add(a,b,result,size);
 for( int i=0;i<size;i++)
 {
  for(int j=0;j<size;j++)
  {
   printf("%d",result[i][j]);
  }
  printf("\n");
 }
 return 0;
}
void add(int a[100][100],int b[100][100],int result[100][100],int size)
{
  int i,j;
   for(i=0;i<size;i++)
 {
  for(j=0;j<size;j++)
  {
   result[i][j]=a[i][j]+b[i][j];
  }
 }
}
