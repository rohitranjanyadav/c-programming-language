#include <stdio.h>

int main()
{
  int days, y, m, d;

  printf("Enter the number of days: ");
  scanf("%d", &days);

  y = days / 365;
  printf("Years: %d\n", y);

  m = (days % 365) / 30;
  printf("Months: %d\n", m);

  d = days % 30;
  printf("Days: %d", d);

  return 0;
}