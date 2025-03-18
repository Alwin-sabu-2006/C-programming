#include <stdio.h>
int sum(int calc[],int n);
int main()
{
 int i,n,result;
 printf("Enter the size of the array:");
 scanf("%d",&n);
 int read[n];
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&read[i]);
 }
 result=sum(read,n);
 printf("THe sum is %d ",result);
 return 0;
}
int sum(int calc[],int n )
{
int sum=0;
for (int i=0;i<n;i++)
{
 sum=sum+calc[i];
}
return sum;
}
 
