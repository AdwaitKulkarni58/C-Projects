#include <stdio.h>
#include <string.h>

void lengthOfString(char* b){
  int length = 0;
    for (int i = 0; i < strlen(b); i++){
      while (*b != '\0'){
        length++;
        b++;
      }
    }
    printf("The length is %d", length);
}

int main(void) {
  char a[] = "Hello World!";
  lengthOfString(a);
}