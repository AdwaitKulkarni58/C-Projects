#include <stdio.h>

int main(void) {
  int row, col;
  for(row = 1; row <= 9; row++){
    for(col = 1; col <= row; col++){
      printf("%d", row);
    }
    printf("\n");
  }
  for(row = 9; row > 0; row--){
    for(col = 1; col <= row; col++){
      printf("%d", row);
    }
    printf("\n");
  }
}