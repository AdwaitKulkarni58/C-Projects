#include <stdio.h>

int main(void) {
  int n = 0;
  int res = 1;
  printf("Enter the number:\n");
  scanf("%d", &n);
  for (int i = n; i >= 1; i--){
    res = res * i;
  }
  printf("\n%d", res);
}