#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char name[20] = "test.txt";
  char str[1000];
  FILE *fptr;
  fptr = fopen(name, "w");
  if (fptr == NULL){
    printf("Error opening file");
    exit(1);
  }
  printf("Enter text for the file:\n");
  fgets(str, sizeof(str), stdin);
  fprintf(fptr, "%s", str);
  fclose(fptr);
  printf("File was created successfully!");
  return 0;
}