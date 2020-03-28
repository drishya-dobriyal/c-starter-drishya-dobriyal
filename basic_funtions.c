#include <stdio.h>

char isEven(int);
char isOdd(int);
long long int square(int);
long long int cube(int);

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


  return 0;
}