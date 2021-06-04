#include <stdio.h>

void nextnum(int num){
  if (num <= 50){
    printf("%d\t", num);
    nextnum(num + 1);
  }
}

int main(void) {
  int n = 1;
  printf("The first 50 natural numbers are:\n");
  nextnum(n);
}