#include<stdio.h>
int main()
{
 int a[100],b[100],i,n;
 printf("Enter the size:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter the element:");
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  b[i]=a[i];
 }
 printf("The initial array a:");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 printf("\nThe copied array b:");
 for(i=0;i<n;i++)
 {
  printf("%d\n",b[i]);
 }
 return 0;
}
