#include<stdio.h>
#define pi 3.14
#define area_of_circle(r)(pi*r*r)
#define surface_area_of_cylinder(r,h)(2*pi*r*(r+h))
int main()
{
 float r,h,area,surface_area;
 printf("Enter the radius:");
 scanf("%f",&r);
 printf("ENTER THE HEIGHT OF CYLINDER:");
 scanf("%f",&h);
 area=area_of_circle(r);
 surface_area=surface_area_of_cylinder(r,h);
 printf("The  area of the circle is %f",area);
 printf(" \n The surface area of the cylinder is %f",surface_area);
 return 0;
}
 
