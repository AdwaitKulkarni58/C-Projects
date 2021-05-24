#include <stdio.h>

int main(void) {
  int row, col;
  for(row = 1; row <= 9; row++){
    for(col = 1; col <= 9; col++){
      printf("%d%d\t", row, col);
    }
    printf("\n");
  }
}