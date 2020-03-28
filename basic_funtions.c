#include <stdio.h>

int isEven(int);

int isEven( num ) {
  return !(num % 2);
}

int isOdd( num ) {
  return !isEven(num);
}

int main(void) {
  int num;

  printf("Enter a number to check whether it is Even or not : ");
  scanf("%d",&num);
  if(isEven(num)) {
    printf("The num is Even\n");
  }
  else {
    printf("The num is Not Even\n");
  }

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&num);
  if(isOdd(num)) {
    printf("The num is odd\n");
  }
  else {
    printf("The num is Not odd\n");
  }
  return 0;
}