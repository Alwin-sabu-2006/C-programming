#include<stdio.h>
int main()
{
 int a[10][10],row1,col1,i,j,sum=0;
 printf("Enter the row size for 1st matrix:");
 scanf("%d",&row1);
 printf("Enter the column size of 1st matrix:");
 scanf("%d",&col1);
 for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
          printf(" \n Enter the element: ");
          scanf("%d", &a[i][j]);
        }
    }
 for(i=0;i<row1;i++)
  {
   for(j=0;j<col1;j++)
    {
     sum=sum+a[i][j];
    }
  }
printf("Sum of elements of the matrix is %d",sum);

 return 0;
}
