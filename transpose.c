#include<stdio.h>
int main()
{
 int a[10][10],size,i,j,result[20][20];
 printf("Enter the  size for  matrix:");
 scanf("%d",&size);
 for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
          printf(" \n Enter the element: ");
          scanf("%d", &a[i][j]);
        }
    }
 for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
    {
     result[i][j]=a[j][i];
    }
   }
 printf("The original matrix is: \n");
 for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
    {
     printf("%d ",a[i][j]);
    }
   printf("\n");
   }
 printf("The transpose of the given matrix is:\n");
 for(i=0;i<size;i++)
  {
   for(j=0;j<size;j++)
    {
     printf("%d ",result[i][j]);
    }
   printf("\n");
   }
return 0;
}
