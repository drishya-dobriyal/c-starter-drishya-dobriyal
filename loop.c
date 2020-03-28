#include <stdio.h>

int fact(int);

int fact(int num ) {
  if(num <= 1) {
    return 1;
  }
  return num * fact( num - 1);
}

int main(void) {
  int num;
  printf("Enter Num to find its factorial : \n");
  scanf("%d",&num);
  printf("The factorial of %d is %d\n", num, fact(num));
}