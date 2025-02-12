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
 int key,count=0;
 printf("Enter the element to be searched");
 scanf("%d",&key);
 for(i=0;i<n;i++)
     {
      if(a[i]==key)
         {
          count=count+1;
         }
     }
printf("The no of occurances  of the element %d is %d",key,count);
return 0;
}
