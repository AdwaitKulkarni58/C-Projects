#include <stdio.h>
#include <string.h>

int main(void) {
  char a[1000], b[1000];
  int j = 0;
  int i = 0;
  printf("Enter the string");
  scanf("%s", a);
  i = strlen(a) - 1;
  while (i >= 0){
    b[j] = a[i];
    i--;
    j++;
  }
  b[j] = '\0';
  printf("The reversed string is %s", b);
}