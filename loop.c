#include <stdio.h>

int fact(int);
int print_fibonacci_series(int);
int print_oddNum_series(int);
int print_oddNum_series_reverse(int);
int print_EvenNum_series(int);
int print_table(int, int);
int add_n_numbers(int);
int product_n_numbers(int);
int print_oddNum_range(int, int);
int print_num_in_range_for_step(int, int,int);
int sum_of_even_num(int, int);

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

int print_num_in_range_for_step(int from, int to,int step ) {
  for( int num = from; num <= to; num += step){
    printf(" %d \n",num);
  }
  return 0;
}

int print_oddNum_range( int from, int to ) {
  printf("Odd numbers from %d to %d :\n", from , to);
  from = (from % 2 == 0) ? from + 1 : from;
  return print_num_in_range_for_step(from , to, 2);
}

int print_oddNum_series(int num) {
  printf("Odd numbers to %d\n", num);
  return print_num_in_range_for_step( 1, num, 2);
}

int print_EvenNum_series(int num) {
  printf("Even numbers to %d\n", num);
  print_num_in_range_for_step(2,num, 2);
  return 0;
}

int print_oddNum_series_reverse(int starting_term) {
  printf("odd numbers in reverse : \n");
  starting_term = ( starting_term % 2 ) ? starting_term : starting_term  - 1;
  for ( int num = starting_term; num > 0; num -= 2 ){
   printf("%d\n", num);
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

int  add_n_numbers(int count) {
  int sum = 0;
  int num;
  for(int term = 0; term < count; term++){
    printf("Enter number : ");
    scanf("%d",&num);
    sum += num;
  }
  return sum;
}

int  product_n_numbers(int count) {
  int product = 1;
  int num;
  for(int term = 0; term < count; term++){
    printf("Enter number : ");
    scanf("%d",&num);
    product *= num;
  }
  return product;
}

int sum_of_even_num(int from,int to ) {
  int sum = 0;
  from = ( from % 2 ) ? (from + 1) : from;
  for( int num = from; num <= to;  num += 2) {
    sum += num;
  }
  return sum;
}

int main(void) {
  int num;
  printf("Enter Num to find its factorial : \n");
  scanf("%d",&num);
  printf("The factorial of %d is %d\n", num, fact(num));

  printf("Enter num of terms you want to print fibonacci \n");
  scanf("%d",&num);
  print_fibonacci_series(num);

  printf("Enter num to you want to print \n");
  scanf("%d",&num);
  print_oddNum_series(num);
  print_EvenNum_series(num);

  int multiplicand;
  printf("Enter multiplicand : \n");
  scanf("%d",&multiplicand);
  printf("Enter num : \n");
  scanf("%d", &num);
  print_table(multiplicand,num);
  
  int count;
  printf("Enter total numbers you wanted to add :\n");
  scanf("%d", &count);
  printf("The Sum is : %d\n", add_n_numbers(count));
  printf("The Product is : %d\n", product_n_numbers(count));

  int from, to, step;
  printf("Enter two numbers for range for odd number of series :");
  scanf("%d %d", &from, &to);
  print_oddNum_range(from, to);

  printf("Enter two numbers for range for number of series and the step :");
  scanf("%d %d %d", &from, &to, &step);
  print_num_in_range_for_step(from, to, step);

  printf("Enter two numbers for sum of even numbers :\n");
  scanf("%d %d", &from, &to);
  printf("Sum of Even numbers is : %d\n",sum_of_even_num(from, to));

  int starting_term;
  printf("Enter a number :\n");
  scanf("%d", &starting_term);
  print_oddNum_series_reverse(starting_term);
}