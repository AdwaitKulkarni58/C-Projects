#include <stdio.h>

int main(void) {
  int arr[2][7];
  printf("Enter the temperatures of both cities for the 7 days\n");
  for (int i = 1; i <= 2; i++){
    printf("Temperature of city %d: \n", i);
    for (int j = 1; j <= 7; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  printf("The temperatures are as follows:\n");
  for (int i = 1; i <= 2; i++){
    printf("The temperature of city %d is:\n", i);
    for (int j = 1; j <= 7; j++){
      printf("Day %d: %d\t\n", j, arr[i][j]);
    }
    printf("---------------------------\n");
  }
}