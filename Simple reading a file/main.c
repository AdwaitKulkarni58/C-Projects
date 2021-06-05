#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *fptr;
  char str;
  char fname[20] = "test.txt";
  fptr = fopen(fname, "r");
  if (fptr == NULL){
    printf("Error opening file.");
    exit(1);
  }
  str = fgetc(fptr);
  while (str != EOF){
    printf("%c", str);
    str = fgetc(fptr);
  }
  fclose(fptr);
}