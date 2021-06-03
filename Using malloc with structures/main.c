#include <stdio.h>
#include <stdlib.h>

struct employee{
  int id;
  float sal;
};

int main(void) {
  int n = 0;
  struct employee* ptr;
  printf("For how many people do you wish to record information?\n ");
  scanf("%d", &n);
  ptr = (struct employee *) malloc (n * sizeof(struct employee));
  printf("Enter the information:\n");
  for (int i = 0; i < n; i++){
    printf("ID:\t");
    scanf("%d", &ptr[i].id);
    printf("Salary:\t");
    scanf("%f", &ptr[i].sal);
  }
  printf("The information entered is:\n");
  for (int i = 0; i < n; i++){
    printf("ID: %d\t\n", ptr[i].id);
    printf("Salary: %f\t\n", ptr[i].sal);
  }
  free(ptr);
}