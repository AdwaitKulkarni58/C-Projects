#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  int i = 0;
  int k = 0;
  int ecount = 0;
  int ocount = 0;
  printf("Enter the number of integers in the array:\n");
  scanf("%d", &n);
  int evenarr[n];
  int oddarr[n];

  int* ptr = (int*) malloc(n * sizeof(int));

  printf("Enter the numbers in the array:\n");
  for (int i = 0; i < n; i++){
    scanf("%d", &ptr[i]);
  }

  for (int j = 0; j < n; j++){
    if (ptr[j] % 2 == 0){
      evenarr[i] = ptr[j];
      i++;
      ecount++;
    }
  }

  for (int i = 0; i < n; i++){
    if (ptr[i] % 2 == 1){
      oddarr[k] = ptr[i];
      k++;
      ocount++;
    }
  }

  for (int i = 0; i < ecount; i++){
    printf("%d\t", evenarr[i]);
  }
  for (int i = 0; i < ocount; i++){
    printf("%d\t", oddarr[i]);
  }
}