#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  int rem = 0;
  printf("How many elements do you wish to enter?\n");
  scanf("%d", &n);
  int* ptr = (int*) malloc (n * sizeof(int));
  printf("Enter the elements\n");
  for (int i = 0; i < n; i++){
    scanf("%d", &ptr[i]);
  }
  printf("Enter the position of the element you wish to remove\n");
  scanf("%d", &rem);
  for (int i = 0; i < n; i++){
    if (i == rem - 1){
      ptr[i] = ptr[i + 1];
      break;
    }
  }
  for (int i = 0; i < n; i++){
    printf("%d\t", ptr[i]);
  }
  free(ptr);
}