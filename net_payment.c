#include <stdio.h>

int main()
{
  float salary, pa, ea, pf, tax, total, net_pay;

  // Input Salary
  printf("Enter Basic Salary:\n");
  scanf("%f", &salary);

  // Calculate Allowances
  pa = 0.10 * salary;
  ea = 0.20 * salary;

  pf = 0.10 * salary;

  total = salary + pa + ea;

  tax = 0.01 * (total - pf);
  
  net_pay = total - pf - tax;  

  printf("His Net Payment of a Month is Rs.%f", net_pay);

  return 0;
}