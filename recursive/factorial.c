#include <stdio.h>
int fact(int n) {
  if (n == 0 || n == 1)
    return 1;
  return n * fact(n - 1);
}
int main() {
  int n, result;
  printf("Enter your nth term");
  scanf("%d", &n);
  result = fact(n);
  printf("Factorial=%d", result);
  return 0;
}
