#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  int sum = 0;
  printf("How many numbers do you wish to enter?\n");
  scanf("%d", &n);
  int* ptr = (int*) malloc(n * sizeof(int));
  printf("Enter the numbers\n");
  for (int i = 0; i < n; i++){
    scanf("%d", &ptr[i]);
    sum += ptr[i];
  }
  printf("%d", sum);
  free(ptr);
}

/*
Syntax for malloc function (platform dependent):
datatype pointername = (void)* malloc(n * sizeof(datatype));

Syntax for calloc function (platform independent):
datatype pointername = (void)* calloc(n, sizeof(datatype));
*/