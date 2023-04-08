//assignment question 5()

#include<stdio.h>
 
int main()
{
 float  radius, circumference, diameter, area;
 
  printf(" Enter the radius of a circle :\n ");
  scanf("%f",&radius);
 
  
  circumference = 2 * 3.14 * radius;
  diameter= 2* radius;
  area = 3.14 * radius * radius; 
 
 
  printf(" Circumference Of a Circle = %.2f\n", circumference);
  printf(" Diameter Of a Circle = %.2f\n", diameter);
  printf(" Area Of a Circle = %.2f\n", area);
 
  return 0;
}
