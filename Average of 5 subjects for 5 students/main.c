#include <stdio.h>

int main(void) {
  int data[5][5];
  int sum = 0;
  printf("Enter the subject marks for each student\n");
  for (int i = 1; i <= 5; i++){
    printf("Enter student %d's marks for the 5 subjects\n", i);
    for (int j = 1; j <= 5; j++){
      scanf("%d", &data[i][j]);      
    }
    printf("----------------------------------\n");  
  }
  for (int i = 1; i <= 5; i++){
    sum = 0;
    for (int j = 1; j <= 5; j++){
      sum += data[i][j];
    }
    printf("Student %d's average is: %d\n", i, sum/5);
  }
}