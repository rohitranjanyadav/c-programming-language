#include <stdio.h>

int main() {
  float a = 9.0;
  float b = 2;
  float c = a/b;
  int d = 6.7;

  int k = 3.0/9; //Ans. is 0.333 but since k is an int, it can't store floats and value 0.333 is demoted to 0. 
  printf("The value of k is %d\n", k);

  printf("The value of c is %f\n", c);
  
  printf("The value of d is %d\n", d);
  return 0;
}