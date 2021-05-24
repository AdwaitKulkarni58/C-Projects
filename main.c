#include <stdio.h>

int main(void) {
  int row, col;
  for(row = 1; row <= 4; row++){
    for(col = 1; col <= row; col++){
      printf("%d", col);
    }
    printf("\n");
  }
  for (row = 4; row > 0; row--){
    for(col = 1; col <= row; col++){
      printf("%d", col);
    }
    printf("\n");
  }
}

