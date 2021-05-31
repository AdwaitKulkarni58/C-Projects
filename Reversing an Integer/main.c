#include <stdio.h>

int main(void) {
  int arr1[100];
  int i = 0;
  int num = 0;
  int rem = 0;
  printf("Enter the number\n");
  scanf("%d", &num);
  while (num != 0){
    rem = num % 10;
    arr1[i] = rem;
    num = num / 10;
    i++;
  }
  for (int j = 0; j < i; j++){
    printf("%d", arr1[j]);
  }
  
}