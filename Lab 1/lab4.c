#include <stdio.h>

int main()
{
  char name[30], section[30];
  int age;
  float salary;

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your section: ");
  scanf("%s", section);

  printf("Enter your salary: ");
  scanf("%f", &salary);

  printf("Name: %s\nAge: %d\nSection: %s\nSalary: %.2f\n", name, age, section, salary);

  return 0;
}
