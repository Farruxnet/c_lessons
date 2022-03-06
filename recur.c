#include <stdio.h>

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1);
    else
        return n;
}


int main(int argc, char const *argv[]) {
  int number = 3;
  printf("%d\n", sum(number));
  return 0;
}
