#include <stdio.h>

int currency_breakdown(int);

int currency_breakdown( int amount ) {
  if(amount / 2000 >= 1 ) {
    printf("%d * Rs %d \n",amount / 2000 , 2000 );
  } 
  amount = amount % 2000;

 if(amount / 500 >= 1 ) {
    printf("%d * Rs %d \n",amount / 500 , 500 );
  } 
  amount = amount % 500;

  if(amount / 200 >= 1 ) {
    printf("%d * Rs %d \n",amount / 200 , 200 );
  } 
  amount = amount % 200;

  if(amount / 100 >= 1 ) {
    printf("%d * Rs %d \n",amount / 100 , 100 );
  } 
  amount = amount % 100;

  if(amount / 50 >= 1 ) {
    printf("%d * Rs %d \n",amount / 50 , 50 );
  } 
  amount = amount % 50;

  if(amount / 10 >= 1 ) {
    printf("%d * Rs %d \n",amount / 10 , 10 );
  } 
  amount = amount % 10;

  if(amount / 5 >= 1 ) {
    printf("%d * Rs %d \n",amount / 5 , 5 );
  } 
  amount = amount % 5;

  if(amount / 5 >= 1 ) {
    printf("%d * Rs %d \n",amount / 5 , 5 );
  } 
  amount = amount % 5;

  if(amount / 1 >= 1 ) {
    printf("%d * Rs %d \n",amount / 1 , 1 );
  } 
  return 0;
}

int main(void) {
  int amount;
  printf("Enter the amount: \n");
  scanf("%d", &amount);
  currency_breakdown(amount);
  return 0;
}