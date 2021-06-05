#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char fname[10] = "test.txt";
  char str;
  int count = 0;
  FILE *fptr;
  fptr = fopen(fname, "r");
  for (str = fgetc(fptr); str != EOF; str = fgetc(fptr)){
    if (str == '\n'){
      count++;
    }
  }
  fclose(fptr);
  printf("The number of lines are %d", count + 1);
}