#include <stdio.h>
#define PI 3.14159

int main()
{
  float radius, area, circumference;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area = PI * radius * radius;
  printf("Area of the circle = %.2f\n", area);
  
  circumference = 2 * PI * radius;
  printf("Circumference of the circle = %.2f\n", circumference);

  return 0;
}
