#include <stdio.h>

int main()
{
  int seconds, h, m, s;

  printf("Enter the number of seconds: ");
  scanf("%d", &seconds);

  h = seconds / 3600;
  printf("Hours: %d\n", h);

  m = (seconds % 3600) / 60;
  printf("Minutes: %d\n", m);

  s = seconds % 60;
  printf("Seconds: %d", s);

  return 0;
}