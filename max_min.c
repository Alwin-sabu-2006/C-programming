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
 int max=a[0],min=a[0],p1=0,p2=0;
 for(i=0;i<n;i++)
     {
      if(a[i]>max)
         {
          max=a[i];
          p1=i;
         }
     }
 for(i=0;i<n;i++)
     {
      if(a[i]<min)
          {
           min=a[i];
           p2=i;
          }
     }
printf(" The maximum element is %d int position %d:",max,p1);
printf(" The minimum element is %d in the position %d :",min,p2);
}
