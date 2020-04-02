#include <stdio.h>

int currency_breakdown(int, int, int *, int *);
int print_currency_breakdown(int, int, int *, int *);

int currency_breakdown(int amount, int currency_notes ,int *currency_breakdown_list, int *currency_weight_list ) {
  for(int i=0; i < currency_notes; i++) {
    currency_breakdown_list[i] =  amount/currency_weight_list[i];
    amount = amount % currency_weight_list[i];
  }
  return 0;
}

int print_currency_breakdown(int amount, int currency_notes ,int *currency_breakdown_list, int *currency_weight_list ) {
  for(int i=0; i < currency_notes; i++) {
    if(currency_breakdown_list[i]) {
     printf("%d * Rs %d \n", currency_breakdown_list[i] , currency_weight_list[i] );
   }
  }
  return 0;
}

int main(void) {
  int currency_weight_list[] = {2000, 500, 200, 100, 50, 10, 5, 1};
  int currency_notes = sizeof(currency_weight_list)/sizeof(currency_weight_list[0]);

  int amount;
  printf("Enter the amount: \n");
  scanf("%d", &amount);

  int  currency_breakdown_list[currency_notes];
  currency_breakdown( amount, currency_notes, currency_breakdown_list, currency_weight_list);
  print_currency_breakdown( amount, currency_notes, currency_breakdown_list, currency_weight_list);
  return 0;
}