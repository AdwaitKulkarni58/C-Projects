#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  printf("Enter the number of characters\n");
  scanf("%d", &n);
  char* ptr = (char*) malloc((n * sizeof(char)) + 1);
  printf("Accept name:\n");
  scanf("%s", ptr);
  printf("The name is:\n");
  printf("%s", ptr);
  free(ptr);
}