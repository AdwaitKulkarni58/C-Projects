#include <stdio.h>

int main(void) {
  int arr[100];
  int num = 0;
  int temp = 0;
  printf("How many numbers do you wish to enter?\n");
  scanf("%d", &num);
  printf("Enter the numbers\n");
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < num; i++)  
  {
    for (int j = 1; j < num; j++)
    {
      if (arr[j - 1] > arr[j])
      {
        temp = arr[j - 1]; 
        arr[j - 1] = arr[j]; 
        arr[j] = temp; 
      }
    }
  }
  for (int i = 0; i < num; i++)
  {
    printf("%d\t", arr[i]);
  }
}