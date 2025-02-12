#include<stdio.h>
int main()
{
 int a[50],i,n;
 printf("Enter the no.of Elements");
 scanf("%d",&n);
 for(i=0;i<n;i++)
     {
       printf("Enter the elements");
       scanf("%d",&a[i]);
     }
 int key,p1=0,flag=0;
 printf("Enter the element to be searched");
 scanf("%d",&key);
 for(i=0;i<n;i++)
     {
      if(a[i]==key)
         {
          flag=1;
          p1=i;
         }
     }
if(flag=1)
  {
  printf("The element is present in the position %d",p1);
  }
else
 {
  printf("The element is not found");
 }
return 0;
}
