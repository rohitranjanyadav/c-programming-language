#include <stdio.h>

int main()
{
  float sales, commission;

  printf("Enter total sales: ");
  scanf("%f", &sales);

  if (sales < 5000)
    commission = sales * 1 / 100;
  else if (sales <= 8000)
    commission = sales * 3 / 100;
  else if (sales <= 11000)
    commission = sales * 5 / 100;
  else
    commission = sales * 10 / 100;

  printf("Commission: %.2f", commission);

  return 0;
}