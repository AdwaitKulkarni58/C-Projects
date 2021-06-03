#include <stdio.h>

int main(void) {
  int n1 = 0;
  int n2 = 1;
  int  n = 0;
  int n3 = 0;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  printf("%d\t", n1);
  printf("%d\t", n2);
  for (int i = 1; i < n; i++){
    n3 = n1 + n2;
    printf("%d\t", n3);
    n1 = n2;
    n2 = n3;
  }
}