#include <stdio.h>

int main(void) {
  int nums = 0, maxNum = 0;
  int a[10000];
  a[0] = maxNum;
  printf("How many numbers do you wish to enter?");
  scanf("%d", &nums);
  for (int i = 0; i < nums; i++){
    scanf("%d", &a[i]);
  }
  for (int i = 1; i <= nums; i++){
    if (a[i] > maxNum){
      maxNum = a[i];
    }
  }
  printf("The largest number is %d", maxNum);
}