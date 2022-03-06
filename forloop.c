#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n = 10, s = 0;

  for (int i = 1; i < n; i++){
    s += i;
  }
  printf("%d\n", s);
  return 0;
}
