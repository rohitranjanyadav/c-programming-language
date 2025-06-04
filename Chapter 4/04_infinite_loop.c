#include <stdio.h>

int main() {
  int i = 0;
  while (i<10) // When we provide a condition which is always true, it gets looped for infinite times
  {
    printf("The value of i is %d\n", i);
    i++; // We must provide a increment in this case for terminating infinite loop
  }
  
  return 0;
}