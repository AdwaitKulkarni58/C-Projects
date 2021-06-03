#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int origsize = 0;
  int newsize = 0;
  int* ptr;
  printf("Enter the number of elements:\n");
  scanf("%d", &origsize);
  ptr = (int*) malloc(origsize * sizeof(int));
  printf("Enter new size:\n");
  scanf("%d", &newsize);
  ptr = (int*) realloc(ptr, origsize + newsize);
  printf("Accept elements:\n");
  for (int i = 0; i < origsize + newsize; i++){
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < origsize + newsize; i++){
    printf("%d\t", ptr[i]);
  }
  free(ptr);
}