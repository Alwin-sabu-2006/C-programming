#include<stdio.h>
struct students{
char name[10];
int rollno;
int marks[3];
float average;
};
int main()
{
 int n=0;
 int total;
 int i=0,j=0;
 printf("Enter the no. of students:");
 scanf("%d",&n);
 struct students std[n];
 for(i=0;i<n;i++)
 {
  printf("Enter the name of the student:");
  scanf("%s",std[i].name);
  printf("Enter the roll.no of the student:");
  scanf("%d",&std[i].rollno);
  for(j=0;j<3;j++)
  {
   printf("Enter the marks of %d subject:",j+1);
   scanf("%d",&std[i].marks[j]);
   total=total+std[i].marks[j];
  }
 std[i].average=total/3;
 total=0;
 }
for(i=0;i<n;i++)
{
 printf(" \n Name:%s \n rollno:%d \n average:%f",std[i].name,std[i].rollno,std[i].average);
}
return 0;
}
