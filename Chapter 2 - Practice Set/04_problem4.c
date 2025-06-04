#include <stdio.h>

int main() {
  int x = 2, y = 3, z = 3, k = 1;
  float a = 3*x/y-z+k;

 /* 3*x/y-z+k
  6/y-z+k
  2-z+k
  -1+z
  0
*/

  printf("The value of a is %f", a);
  return 0;
}