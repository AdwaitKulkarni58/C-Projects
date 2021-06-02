#include <stdio.h>

int main(void) {
  int rows = 0;
  int cols = 0;
  int n = 0;
  int sum = 0;
  printf("Enter the number of rows.\n");
  scanf("%d", &rows);
  printf("Enter the number of columns.\n");
  scanf("%d", &cols);
  int arr[rows][cols];
  printf("Your matrix will have %d * %d = %d elements.\n", rows, cols, rows * cols);
  printf("Enter the elements\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  printf("Your matrix is:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  printf("The sum of elements of the principal diagonal is:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      if (i == j){
        sum += arr[i][j];
      }
    }
  }
  printf("%d", sum);
}