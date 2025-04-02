#include<stdio.h>
#include<string.h>
struct car{
char name[10];
int vehicle_no;
int price;
};
int main()
{
 int n=0;
 int i=0;
 printf("Enter the no. of cars:");
 scanf("%d",&n);
 struct car cr[n];
 for(i=0;i<n;i++)
 {
  printf("Enter the name of the car:");
  scanf("%s",cr[i].name);
  printf("Enter the vehicle.no:");
  scanf("%d",&cr[i].vehicle_no);
  printf("Enter the price of the car:");
  scanf("%d",&cr[i].price);
  
 }
 int price_max=0;
 char s_name[10];
 for(i=0;i<n;i++)
 {
  if(cr[i].price>price_max)
  {
   price_max=cr[i].price;
   strcpy(s_name, cr[i].name);
  }
 }
printf("\nCar Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nName: %s\nVehicle No: %d\nPrice: %d\n", cr[i].name, cr[i].vehicle_no, cr[i].price);
    }
printf("\n The vehicle with highest price  is %s  \n price:%d",s_name,price_max);
return 0;
}
