#include <stdio.h>

int main(void) {
  int num = 0;
  int rem = 0;
  int rev = 0;
  printf("Enter the number\n");
  scanf("%d", &num);
  int temp = num;
  while (num != 0)
  {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
  }
  if (temp == rev)
  {
    printf("Palindrome");
  }else
  {
    printf("Not a palindrome");
  }
}