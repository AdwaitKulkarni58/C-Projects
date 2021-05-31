#include <stdio.h>

int main(void) {
  int arr[100];
  int size = 0;
  printf("How many numbers do you wish to enter?\n");
  scanf("%d", &size);
  printf("Enter the array\n");
  for (int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < size; i++){
    for (int j = i + 1; j < size; j++){
      if (arr[i] == arr[j]){
        printf("%d\t", arr[i]);
      }
    }
  }
}