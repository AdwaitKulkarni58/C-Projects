#include <stdio.h>

int main(void){
  int orig[100][100];
  int trans[100][100];
  int total = 0;
  int rows = 0;
  int cols = 0;
  printf("How many rows do you wish to enter?\n");
  scanf("%d", &rows);
  printf("How many columns do you wish to enter?\n");
  scanf("%d", &cols);
  printf("You will have %d * %d = %d numbers\n", rows, cols, rows * cols);
  printf("Enter the numbers\n");

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      scanf("%d", &orig[i][j]);
    }
  }
  printf("The original matrix is:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d\t", orig[i][j]);
    }
    printf("\t\n");
  }
  printf("The transposed matrix is:\n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      trans[i][j] = orig[j][i];
      printf("%d\t", trans[i][j]);
    }
    printf("\t\n");
  }
}
