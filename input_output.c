#include <stdio.h>

int main(int argc, char const *argv[]) {
  double d;
  int i;
  float f;
  char chr;
  printf("ch = ");
  scanf("%c", &chr);

  printf("\n");

  printf("d = ");
  scanf("%lf", &d);

  printf("\n");

  printf("i = ");
  scanf("%i", &i);

  printf("\n");

  printf("f = ");
  scanf("%f", &f);




  printf("\n");
  printf("d = %lf\ni = %i\nf = %f\nch = %c", d, i, f, chr);

  printf("\n");
  printf("ASCII: %d", chr);
  printf("\n");
  return 0;
}
