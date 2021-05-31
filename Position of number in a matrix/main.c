#include <stdio.h>

int main(void) {
  int arr[100][100];
  int rows = 0;
  int cols = 0;
  int  num = 0;
  printf("How many rows do you wish to enter?\n");
  scanf("%d", &rows);
  printf("How many columns do you wish to enter?\n");
  scanf("%d", &cols);
  printf("There will be total %d * %d = %d numbers\n", rows, cols, rows * cols);
  printf("Enter the numbers of your matrix\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Which number do you wish to search for?\n");
  scanf("%d", &num);
  printf("Your matrix is as follows:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      if (arr[i][j] == num){
        printf("Your desired number is at row %d, column %d", i + 1, j + 1);
      }
    }
  }
}