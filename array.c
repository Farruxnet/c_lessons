#include <stdio.h>

int calc(int arr[], int n){
  int s = 0;
  for (int i = 0; i < n; i++) {
    s += arr[i];
  }

  return s;
}

int main(int argc, char const *argv[]) {
  int num[] = {1, 2, 3, 4};
  printf("%d\n", calc(num, 4));
  return 0;
}
