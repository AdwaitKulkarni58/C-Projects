#include <stdio.h>

int main(void) {
  int arr[100][100];
  int rows = 0;
  int cols = 0;
  int maxnum = 0;
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
  printf("Your matrix is as follows:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
  printf("The largest element in the matrix is:\n");
  maxnum = arr[0][0];
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      if (maxnum < arr[i][j]){
        maxnum = arr[i][j];
      }
    }
  }
  printf("%d", maxnum);
}