#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  char fname[20] = "test.txt";
  char str[100];
  char xstr;
  FILE *fptr;
  printf("Enter the number of lines you wish to enter:\n");
  scanf("%d", &n);
  fptr = fopen(fname, "w");
  for (int i = 0; i < n+1; i++){
    fgets(str, sizeof(str), stdin);
    fputs(str, fptr);
  }
  fclose(fptr);
  fopen(fname, "r");
  xstr = fgetc(fptr);
  while (xstr != EOF){
    printf("%c", xstr);
    xstr = fgetc(fptr);
  }
  fclose(fptr);
  return 0;
}