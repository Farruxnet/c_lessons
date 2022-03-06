#include <stdio.h>

int main() {
  unsigned int it = -1997;
  float fl = 12.05;
  char str = 'F';
  double dl = 1212121;
  const double PI = 3.141516171819;

  printf("it: %d, fl %f, str %c, dl %.f, PI %f", it, fl, str, dl, PI);

  printf("\n");
  printf("siz of %ld\n", sizeof(it));
  printf("siz of %ld\n", sizeof(fl));
  printf("siz of %ld\n", sizeof(str));
  printf("siz of %ld\n", sizeof(dl));



  return 0;
}
