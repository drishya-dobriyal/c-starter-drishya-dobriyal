#include <stdio.h>

int fact(int);
int print_fibonacci_series(int);
int print_oddNum_series(int);
int print_EvenNum_series(int);
int print_table(int, int);

int fact(int num ) {
  if(num <= 1) {
    return 1;
  }
  return num * fact( num - 1);
}

int print_fibonacci_series(int num) {
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

int print_oddNum_series(int num) {
  printf("Odd numbers till %d\n", num);
  int currNum = 1;
  while( currNum <= num ) {
    printf(" %d \n", currNum);
    currNum += 2;
  }
  return 0;
}

int print_EvenNum_series(int num) {
  printf("Even numbers till %d\n", num);
  int currNum = 0;
  while( currNum <= num ) {
    printf(" %d \n", currNum);
    currNum += 2;
  }
  return 0;
}

int print_table(int multiplicand,int num) {
  int multiplier = 1;
  while( multiplier <= num) {
    printf("%d * %d = %d\n", multiplicand, multiplier, multiplicand * multiplier );
    multiplier += 1;
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

  printf("Enter num till you want to print \n");
  scanf("%d",&num);
  print_oddNum_series(num);
  print_EvenNum_series(num);

  int multiplicand;
  printf("Enter multiplicand : \n");
  scanf("%d",&multiplicand);
  printf("Enter num : \n");
  scanf("%d", &num);
  print_table(multiplicand,num);
}