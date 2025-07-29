#include <stdio.h>
int main() {
  int n[5];
  printf("Enter your 5 numbers");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 5; i++) {
    if (n[i] <= 1)
      continue;
    int isPrime = 1;
    for (int j = 2; j * j <= n[i]; j++) {
      if (n[i] % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime) {
      printf("%d ", n[i]);
    }
  }
  return 0;
}
