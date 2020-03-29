#include <stdio.h>

int currency_breakdown(int);
int print_currency(int, int);

int print_currency( int amount,int currency_weight) {
  if( amount/currency_weight >= 1 ){
    printf("%d * Rs %d \n", amount/currency_weight , currency_weight );
  } 
 return amount % currency_weight;
}

int currency_breakdown( int amount ) {
  int amount_left = print_currency(amount, 2000);
  amount_left = print_currency(amount_left, 500);
  amount_left = print_currency(amount_left, 200);
  amount_left = print_currency(amount_left, 100);
  amount_left = print_currency(amount_left, 50);
  amount_left = print_currency(amount_left, 10);
  amount_left = print_currency(amount_left, 5);
  print_currency(amount_left, 1);
  return 0;
}

int main(void) {
  int amount;
  printf("Enter the amount: \n");
  scanf("%d", &amount);
  currency_breakdown(amount);
  return 0;
}