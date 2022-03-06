#include <stdio.h>
int main(int argc, char const *argv[]) {
  int j, s = 0;
  const int m = 100;

  for (int i = 0; i <= m; i++) {
    printf("j = ");
    scanf("%d", &j);
    if (j < 50){
      goto jump;
    }
    s += i;
  }

  jump:
    printf("%d\n", s);
  return 0;
}
