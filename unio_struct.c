#include<stdio.h>
struct student{
 int rollno;
 char name[10];
 int marks;
 }s1;
union employee{
 int emp_id;
 char name[10];
 int salary;
 }e1;
int main()
{
 int size_of_struct,size_of_union;
 size_of_struct=sizeof(s1);
 size_of_union=sizeof(e1);
 printf("Th size of structure is %d",size_of_struct);
 printf("\n The size_of_union is:%d",size_of_union);
 return 0;
}
 
