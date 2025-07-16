#include <stdio.h>
#include <stdlib.h>
int main() {
  int *p, n = 2;
  printf("Enter any two numbers");
  p = (int *)calloc(n, sizeof(n));
  scanf("%d %d", p, p + 1);
  if (*p > *(p + 1)) {
    printf("%d is greater than %d ", *p, *(p + 1));
  } else {
    printf("%d is greater than %d", *(p + 1), *p);
  }
  return 0;
}
