#include<stdio.h>
int main()
{
 int A[10][10],sum=0,i,j,size;
 int p=1;
 printf("Enter the row size for 1st matrix:");
 scanf("%d",&size);
 {
  for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
          printf(" \n Enter the element: ");
          scanf("%d", &A[i][j]);
        }
    }
 }
  for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
    {
     if(i==j)
        {
         sum=sum+A[i][j];
        }
     else
      {
       continue;
      }
    }
 }
 printf("The sum of diagonal elements is:%d",sum);
 return 0;
}
