#include <stdio.h>

int main()
{
  int a = 10;
  float b = 3.14;
  char c = 'A';

  int *pa = &a;
  float *pb = &b;
  char *pc = &c;

  printf("Address of int = %p\n", pa);
  printf("Address of float = %p\n", pb);
  printf("Address char = %p\n", pc);

  return 0;
}