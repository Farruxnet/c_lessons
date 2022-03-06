#include <stdio.h>

int addNumbers(int a, int b);

int main(int argc, char const *argv[]) {
  int n1, n2, sum;
  printf("N1. n2  = ");
  scanf("%d %d", &n1, &n2);
  sum = addNumbers(n1, n2);
  printf("sum = %d", sum);

  return 0;
}

int addNumbers(int a, int b){
  return a + b;
}
