#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 0;

  do {
    printf("%d, ", i);
    i++;
  } while(i <= 30);
  return 0;
}
