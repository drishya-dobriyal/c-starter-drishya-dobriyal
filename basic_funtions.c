#include <stdio.h>

char isEven(int);
char isOdd(int);

char isEven( num ) {
  return !(num % 2);
}

char isOdd( num ) {
  return !isEven(num);
}

int main(void) {
  int num;

  printf("Enter a number to check whether it is Even or not : ");
  scanf("%d",&num);
  printf("%s", isEven(num) ? "The num is Even\n" : "The num is Not Even\n");

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&num);
  printf("%s", isOdd(num) ? "The num is Odd\n" : "The num is Not Odd\n");
  return 0;
}