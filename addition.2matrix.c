#include<stdio.h>
int main()
{
 int A[10][10],B[10][10],result[10][10],row1,row2,col1,col2,i,j;
 printf("Enter the row size for 1st matrix:");
 scanf("%d",&row1);
 printf("Enter the column size of 1st matrix:");
 scanf("%d",&col1);
 printf("Enter the row size of 2nd matrix:");
 scanf("%d",&row2);
 printf("Enter the column size of 2nd matrix");
 scanf("%d",&col2);
 if (row1 == row2 && col1 == col2) {
    printf("Enter the elements of 1st matrix:");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf(" \n Enter the element: ");
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix:");

    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf(" \n Enter the element: ");
            scanf("%d", &B[i][j]);
        }
    }
} else {
    printf("Matrix cannot be added\n");
    return 0;
}

    
 
 for(i=0;i<row1;i++)
  {
   for(j=0;j<col1;j++)
    {
     result[i][j]=A[i][j]+B[i][j];
    }
  }
 for(i=0;i<row1;i++)
  {
   for(j=0;j<col1;j++)
    {
     printf("%d ",result[i][j]);
    }
   printf("\n");
}
 return 0;
}
