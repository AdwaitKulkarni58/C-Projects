#include <stdio.h>

void checksum(int a, int b, int c){
  if (a == b+c || b == a+c || c == a+b){
    printf("%d", 1);
  }else{
    printf("%d", 0);
  }
} 

int main(void) {
  int x, y, z;
  printf("Enter the values of the 3 integers:\n");
  scanf("%d%d%d", &x, &y, &z);
  checksum(x, y, z);
}