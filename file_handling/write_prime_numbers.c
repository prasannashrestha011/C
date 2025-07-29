#include <stdio.h>
int main() {
  FILE *ptr = fopen("prime_numbers.txt", "w");
  int a[5];
  printf("Enter your numbers ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 5; i++) {
    if (a[i] <= 1)
      continue;
    int isPrime = 1;
    for (int j = 2; j * j <= a[i]; j++) {
      if (a[i] % j == 0) {
        isPrime = 0;
        break;
      }
    }
    if (isPrime) {
      fprintf(ptr, "%d \n", a[i]);
    }
  }
  printf("Numbers have been written to the file");
  return 0;
}
