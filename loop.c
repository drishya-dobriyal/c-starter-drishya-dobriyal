#include <stdio.h>

int fact(int);
int fact(int);

int fact(int num ) {
  if(num <= 1) {
    return 1;
  }
  return num * fact( num - 1);
}

int print_fibonacci_series(num) {
  int prevTerm = -1;
  int currterm = 1;
  int numOfTerm = 0;
  while(numOfTerm != num) {
    int temp = prevTerm;
    prevTerm = currterm;
    currterm = temp + prevTerm;
    printf(" %d \n", currterm);
    numOfTerm +=1;
  }
  return 0;
}

int main(void) {
  int num;
  printf("Enter Num to find its factorial : \n");
  scanf("%d",&num);
  printf("The factorial of %d is %d\n", num, fact(num));

  printf("Enter num of terms you want to print fibonacci \n");
  scanf("%d",&num);
  print_fibonacci_series(num);
}