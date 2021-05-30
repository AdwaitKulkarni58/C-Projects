#include <stdio.h>

struct book{
  char title[1000];
  char author[1000];
  int edition;
  int price;
};

int main(void) {
  int num = 0;
  printf("For how many books do you wish to record the information?\n");
  scanf("%d", &num);
  struct book b[num];
  printf("Enter the details of the books\n");
  for (int i = 1; i <= num; i++){
    printf("Enter book %d's information.\n", i);
    printf("Enter the title of the book: \n");
    scanf("%s", b[i].title);
    printf("Enter the author of the book: \n");
    scanf("%s", b[i].author);
    printf("Enter the edition of the book: \n");
    scanf("%d", &b[i].edition);
    printf("Enter the price of the book: \n");
    scanf("%d", &b[i].price);
  }
  printf("---------------------------------------------\n");
  printf("                Book Details                 \n");
  printf("---------------------------------------------\n");
  for (int i = 1; i <= num; i++){
    printf("Title of book %d: %s\n", i, b[i].title);
    printf("Author of book %d: %s\n", i, b[i].author);
    printf("Edition of book %d: %d\n", i, b[i].edition);
    printf("Price of book %d: %d\n", i, b[i].price);
    printf("----------------------------------------------\n");
  }
}