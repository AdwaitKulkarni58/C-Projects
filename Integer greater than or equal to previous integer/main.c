#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  printf("How many integers do you wish to enter?\n");
  scanf("%d", &n);
  int* ptr = (int*) malloc(n * sizeof(int));
  printf("Enter the integers:\n");
  for (int i = 0; i < n; i++){
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++){
    if (ptr[i] >= ptr[i - 1]){
      printf("Greater than or equal to previous integer\n");
      continue;
    }
    printf("Lesser than the previous integer\n");
  }
}