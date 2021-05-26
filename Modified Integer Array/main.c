#include <stdio.h>

int main(void) {
  int nums = 0;
  int res = 0;
  int a[10000];
  printf("How many numbers do you wish to enter?");
  scanf("%d", &nums);
  for (int i = 0; i < nums; i++){
    scanf("%d", &a[i]);
  }
  printf("By what number do you wish to multiply all the numbers?\n");
  scanf("%d", &res);
  for (int i = 0; i < nums; i++){
    a[i] = a[i] * res;
  }
  printf("Updated array is: \n");
  for (int i = 0; i < nums; i++){
    printf("%d\n", a[i]);
  }
}