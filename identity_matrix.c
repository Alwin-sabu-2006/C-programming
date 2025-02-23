#include<stdio.h>
int main()
{
 int A[10][10],size,i,j;
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
  for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
    {
     if((i==j && A[i][j]==1 ) || (i!=j && A[i][j]!=0))
        {
         p=1;
        }
     else
      {
       p=0;
      }
    }
 }
 if (p==1)
 {
  printf("It is a identity matrix \n");
  for (i = 0; i < size; i++) 
      {
       for (j = 0; j < size; j++)
          {
          printf("%d ",A[i][j]);
          }
       printf("\n");
      }
 }
 else
  {
   printf("Not a identity matrix");
  }
 }

return 0;
}
