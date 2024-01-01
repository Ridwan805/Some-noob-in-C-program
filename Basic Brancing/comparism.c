#include <stdio.h>

int main() {
  int n,m;
  printf("Enter the first number:");
  scanf("%d", &n);

  printf("Enter the second number:");
  scanf("%d", &m);

  if (n > m){
    printf("The first number is greater");

  }
  else if (m > n) {

    printf("The second number is greater");

  }
  else{
    printf("The numbers are equal");

  }

  return 0;
}