#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n = 50;
  for (int i = 0; i <= n; i++) {
    if (i % 2 == 1){
      continue;
    }
    printf("%d, ", i);
  }
  return 0;
}
