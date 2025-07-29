#include <stdio.h>
int main() {
  int a[5];
  FILE *ptr = fopen("numbers.txt", "w+");
  printf("Enter your numbers");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
    fprintf(ptr, "%d\n", a[i]);
  }
  rewind(ptr);

  int n;
  while (fscanf(ptr, "%d", &n) == 1) {
    int isPrime = 1;
    for (int j = 2; j * j <= n; j++) {
      if (j <= 1)
        continue;
      if (n % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime) {
      printf("%d ", n);
    }
  }
  return 0;
}
