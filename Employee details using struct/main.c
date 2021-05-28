#include <stdio.h>

struct employee{
  int id;
  int salary;
  char name[100];
};

int main(void) {
  int t = 0;
  printf("For how many employees do you wish to enter the details?");
  scanf("%d", &t);
  struct employee e[t];
  for (int i = 1; i <= t; i++){
    printf("Enter employee %d's details\n", i);
    printf("Enter the id of the employee\n");
    scanf("%d", &e[i].id);
    printf("Enter the salary of the employee\n");
    scanf("%d", &e[i].salary);
    printf("Enter the name of the employee\n");
    scanf("%s", e[i].name);
  }
  printf("\n");
  printf("-----------------------------------------\n");
  printf("            Employee details\n");
  printf("-----------------------------------------\n");

  for (int i = 1; i <= t; i++){
    printf("Id of employee %d: %d\n", i, e[i].id);
    printf("Salary of employee %d: %d\n", i, e[i].salary);
    printf("Name of employee %d: %s\n", i, e[i].name);
    printf("---------------------------------------\n");
  }
}