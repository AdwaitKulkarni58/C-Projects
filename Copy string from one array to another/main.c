#include <stdio.h>
#include <string.h>

void ustrcpy(char* b, char* a){
  int i = 0;
  int j = 0;
  while (i <= strlen(a)){
    b[j] = a[i];
    i++;
    j++;
  }
}

int main(void) {
  char a[] = "hi";
  char b[3];
  ustrcpy(b, a);
  printf("The copied string is %s", b);
}