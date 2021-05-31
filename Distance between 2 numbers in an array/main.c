#include <stdio.h>
#include <math.h>

int main(void) {
  int arr[100];
  int num1 = 0;
  int num2 = 0;
  int size = 0;
  printf("How many numbers do you wish to enter?\n");
  scanf("%d", &size);
  printf("Enter the numbers\n");
  for (int i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }
  printf("Enter the 2 numbers between which you want to find the distance:\n");
  scanf("%d\t%d", &num1, &num2);
  for (int i = 0; i < size; i++){
    for (int j = 1; j < size; j++){
      if (arr[i] == num1 && arr[j] == num2){
        int diff = j - i;
        printf("The distance is %d", diff - 1);
      }
    }
    break;
  }
}