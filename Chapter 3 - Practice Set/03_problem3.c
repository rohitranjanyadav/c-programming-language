#include <stdio.h>

int main()
{
  int income; float tax = 0;

  printf("Enter your Income Amount:\n");
  scanf("%d", &income);

  if(income<=250000)
  {
    tax = 0;
  }
  else if(income>250000 && income<=500000)
  {
    tax = 0.05 * (income - 250000);
  }
  else if(income>500000 && income<=1000000)
  {
    tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
  }
  else
  {
    tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
  }

  printf("The total tax to pay is %.2f", tax);  // %.2f for displaying only 2 number after point. 
  

  return 0;
}