#include <stdio.h>

int main(void) {
  int num;
  int rem;
  int sum = 0;
  int i;
  printf("Enter the number");
  scanf("%d", &num);
  i = num;
  while (num != 0){
    rem = num % 10;
    num = num / 10;
    sum = sum + rem * rem * rem;    
  }
  if (sum == i){
    printf("It is an Armstrong number");
  }else{
    printf("It is not an Armstrong number");
  }

}