#include <stdio.h>

int main(void) {
  int mat1[100][100];
  int rows = 0;
  int cols = 0;
  printf("How many rows do you wish to enter?\n");
  scanf("%d", &rows);
  printf("How many columns do you wish to enter?\n");
  scanf("%d", &cols);
  printf("You will have total %d * %d = %d numbers\n", rows, cols, rows*cols);
  printf("Enter the numbers for the first matrix:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      scanf("%d", &mat1[i][j]);
    }
  }
  printf("Your original matrix is:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d\t", mat1[i][j]);
    }
    printf("\n");
  }
  printf("Your right triangular matrix is: \n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      if (i > j){
        mat1[i][j] = 0;
      }else{
        continue;
      }
    }
  }
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d\t", mat1[i][j]);
    }
    printf("\n");
  }
}