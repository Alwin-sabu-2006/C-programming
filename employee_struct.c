xy#include<stdio.h>
struct employees{
char name[10];
int emp_id;
int salary;
};
int main()
{
 int n,i=0;
 printf("Enter the no of employees:");
 scanf("%d",&n);
 struct employees emp[n];
 emp[n].salary=0;
 for(i=0;i<n;i++)
 {
  printf("Enter the details of the %d employee:",i+1);
  printf("\nEnter the name of the Employee:");
  scanf("%s",emp[i].name);
  printf("\nEnter the id of the employee:");
  scanf("%d",&emp[i].emp_id);
  printf("\nEnter the salary of the employee:");
  scanf("%d",&emp[i].salary);
 }
printf("Displaying the details of the employees that have been entered:");
for(i=0;i<n;i++)
{
 printf(" \n Details of the %d employee",i+1);
 printf("\n Name:%s\n employee_id:%d \n salary:%d",emp[i].name,emp[i].emp_id,emp[i].salary);
}
return 0;
}
