#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n = 19;
  for (int i = 0; i < n; i++) {
    if (i == 7) {
      break;
    }
    printf("%d, ", i);
  }
  return 0;
}
