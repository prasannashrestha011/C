#include <stdio.h>
#include <stdlib.h>
int main() {
  int n = 0, *p, nth = 5;
  p = calloc(10, sizeof(int));
  printf("Enter any 10 numbers");
  for (int i = 0; i < nth; i++) {
    scanf("%d", p + i);
  }
  n = p[0];
  for (int i = 0; i < nth; i++) {
    if (p[i] > p[0]) {
      n = p[i];
    }
  }
  printf("Largest number %d", n);
  return 0;
}
