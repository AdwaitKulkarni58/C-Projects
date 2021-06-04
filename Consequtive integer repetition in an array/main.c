#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  int rep = 0;
  printf("How many integers do you wish to enter?\n");
  scanf("%d", &n);
  int* ptr = (int*) malloc(n * sizeof(int));
  printf("What number do you wish to check for consequtive repetition?\n");
  scanf("%d", &rep);
  printf("Enter the integers:\n");
  for (int i = 0; i < n; i++){
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < n; i++){
    if ((ptr[i] == ptr[i + 1]) && ptr[i] == rep){
      printf("The number is repeated consequtively\n");
      break;
    }
  }
}