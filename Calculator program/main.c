#include <stdio.h>

void useAgain();
void add(int, int);
void subtract(int, int);
void multiply(int, int);
void divide(int, int);
void ask();

void add(int num1, int num2) {
   printf("Enter the numbers\n");
   scanf("%d %d", &num1, &num2);
   int num3 = num1 + num2;
   printf("Result = %d\n", num3);
   useAgain();
}

void subtract (int num1, int num2){
  printf("Enter the numbers\n");
  scanf("%d %d", &num1, &num2);
  int num3 = num1 - num2;
  printf("Result = %d\n", num3);
  useAgain();
}

void multiply (int num1, int num2){
  printf("Enter the numbers\n");
  scanf("%d %d", &num1, &num2);
  int num3 = num1 * num2;
  printf("Result = %d\n", num3);
  useAgain();
}

void divide (int num1, int num2){
  int a, b;
  printf("Enter the numbers\n");
  scanf("%d %d", &num1, &num2);
  if ((num1 == 0 && num2 ==0) || num2 == 0){
    printf("Enter non-zero value\n");
    divide(a, b);
  }else{
  int num3 = num1 / num2;
  printf("Result = %d\n", num3);
  useAgain();
  }
}

void useAgain(){
  char ans;
  printf("Do you wish to use the calculator again? (y/n)\n");
  scanf("%s", &ans);
  if (ans == 'y'){
    ask();
  }else if (ans == 'n'){
    printf("Thanks for using the calculator!");
  }else{
    printf("Enter correct response");
    useAgain();
  }
}

void ask(){
  char res;
  int a , b;
  printf("Which operation do you wish to perform?\n");
  printf("add, subtract, multiply or divide? (a/s/m/d)\n");
  scanf("%s", &res);
  if (res == 'a'){
    add(a, b);
  }else if (res == 's'){
    subtract(a, b);
  }else if (res == 'm'){
    multiply(a, b);
  }else if (res == 'd'){
    divide(a, b);
  }else{
    printf("Enter correct response\n");
    ask();
  }
}

int main() {
   ask();
}
