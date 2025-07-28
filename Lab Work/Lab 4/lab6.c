#include <stdio.h>

int main()
{
  int n, m, p;
  float total, discount, net, tax, final;

  printf("Enter pieces of Heater, Toasters and Fans:\n");
  scanf("%d %d %d", &n, &m, &p);

  total = (n * 1500) + (m * 200) + (p * 400);
  discount = (n * 1500 * 5 / 100) + (m * 200 * 15 / 100) + (p * 400 * 10 / 100);
  net = total - discount;
  tax = net * 10 / 100;
  final = net + tax;

  printf("The amount to be paid by the store is %.2f", final);

  return 0;
}