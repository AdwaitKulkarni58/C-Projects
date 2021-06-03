#include <stdio.h>

int main(void) {
  int num1 = 0;
  int num2 = 0;
  int sum = 0;
  int* ptr1;
  int* ptr2;
  printf("Enter the two numbers:\n");
  scanf("%d\t%d", &num1, &num2);
  ptr1 = &num1;
  ptr2 = &num2;
  sum = *ptr1 + *ptr2;
  printf("Sum is: %d", sum);
}