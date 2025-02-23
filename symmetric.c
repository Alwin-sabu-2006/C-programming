#include<stdio.h>
int main()
{
 int a[10][10],size,i,j,r=1;
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
     if (a[i][j]!=a[j][i])
     {
         r=0;
         break;
     }
 if(r==0)break;
    }
  }
 if(r==0)
  {
   printf("The entered matrix is not  symmetric");
  }
 else
  {
   printf("The entered matrix is symmetric");
  }


 return 0;
}
