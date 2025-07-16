#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, sum = 0, *p;
  printf("Enter how many numbers you want to add");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    p = (int *)calloc(n, sizeof(n));
    printf("Enter your number ");
    scanf("%d", p);
    sum += *p;
    p++;
  }
  printf("\nSum=%d", sum);
  return 0;
}
