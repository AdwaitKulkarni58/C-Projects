#include <stdio.h>

int main(void) {
  int nums = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int a[10000], odd[10000], even[10000];
  printf("How many numbers do you wish to enter?");
  scanf("%d", &nums);
  for (int i = 0; i < nums; i++){
    scanf("%d", &a[i]);
  }
  for (i = 0; i < nums; i++){
    if (a[i] % 2 == 0){
      even[j] = a[i];
      j++;
    }else if (a[i] % 2 == 1){
      odd[k] = a[i];
      k++;
    }
  }
  printf("Even numbers:\n");
  for (int i = 0; i < j; i++){
    printf("%d\t\n", even[i]);
  }
  printf("Odd numbers:\n");
  for (int i = 0; i < k; i++){
    printf("%d\t\n", odd[i]);
  }
}