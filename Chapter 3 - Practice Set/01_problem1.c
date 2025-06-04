#include <stdio.h>

int main()
{
  int a = 10;

  // Output will be "I am 11" as single "=" assigns value

  if(a = 11)
  {
    printf("I am 11");
  }
  else
  {
    printf("I am not 11");
  }

  return 0;
}