#include <stdio.h>

char isEven(int);
char isOdd(int);
long long int square(int);
long long int cube(int);
int hcf(int, int);
int lcm(int, int);

char isEven( num ) {
  return !(num % 2);
}

char isOdd( num ) {
  return !isEven(num);
}

long long int square(num) {
  return num * num;
}

long long int cube(num) {
  return num * square(num);
}

int hcf(num1, num2 ) {
  int rem;
  if(num1 < num2) {
    num1  = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  }
  if(!num2) {
    return num1;
  }

  while(1){
  rem = num1 % num2;
  if(rem == 0) {
    return num2;
  }
  num1 = num2;
  num2 = rem;
  }
}

int lcm(num1, num2) {
  return (num1 * num2) / hcf(num1, num2);
}

int main(void) {
  int num;

  printf("Enter a number to check whether it is Even or not : ");
  scanf("%d",&num);
  printf("%s", isEven(num) ? "The num is Even\n" : "The num is Not Even\n");

  printf("Enter a number to check whether it is odd or not : ");
  scanf("%d",&num);
  printf("%s", isOdd(num) ? "The num is Odd\n" : "The num is Not Odd\n");

  printf("Enter a number to find it's square : \n");
  scanf("%d",&num);
  printf("The Square of %d id %lld\n",num, square(num));

  printf("Enter a number to find it's cube : \n");
  scanf("%d",&num);
  printf("The cube of %d id %lld\n",num, cube(num));

  int num1, num2;
  printf("Enter two number to find there HCF : \n");
  scanf("%d %d",&num1, &num2);
  printf("The HCF of %d and %d is %d\n",num1,num2, hcf(num1, num2));

  printf("Enter two number to find there LCM : \n");
  scanf("%d %d",&num1, &num2);
  printf("The LCM of %d and %d is %d\n",num1,num2, lcm(num1, num2));
  return 0;
}