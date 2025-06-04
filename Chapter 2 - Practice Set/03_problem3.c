#include <stdio.h>

int main() {
  int a, b;
  
  printf("Enter a number to check if it is divisible by 97 or not:");
  scanf("%d", a);
  b = a%97;
  printf("The value of a%97 is: %d", b);
  return 0;
}