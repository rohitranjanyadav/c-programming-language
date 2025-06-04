#include <stdio.h>

int main()
{
  float cel, far;
  printf("Enter celsius to convert:");
  scanf("%f", &cel);

  far = ((9.0 / 5.0) * cel) + 32;

  printf("The value of %f degree celcius to Fahrenheit is %f", cel, far);

  return 0;
}