#include <stdio.h>

int main(void) {
  int arr[3][3];
  int det = 0;
  printf("Enter the numbers:\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Your matrix is:\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  printf("The determinant value is:\n");
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      det = arr[0][0] * ((arr[1][1] * arr[2][2]) - (arr[1][2] * arr[2][1])) - arr[0][1] * ((arr[1][0] * arr[2][2]) - (arr[1][2] * arr[2][0])) + arr[0][2] * ((arr[1][0] * arr[2][1]) - (arr[1][1] * arr[2][0]));
    }
  }
  printf("%d", det);  
}