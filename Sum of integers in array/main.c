#include <stdio.h>

int main(void) {
  int a[1000];
  int totalIntegers = 0;
  int sum = 0;
  printf("How many integers do you wish to enter?");
  scanf("%d", &totalIntegers);
  for (int i = 0; i < totalIntegers; i++){
    scanf("%d", &a[i]);
  }
  for (int j = 0; j <= totalIntegers; j++){
    sum += a[j];
  }
  printf("Sum is %d", sum);
}