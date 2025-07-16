#include <stdio.h>
int main() {
  int i, j, temp, n = 5, a[5];
  printf("Enter your numbers");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 5 - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i = 0; i < 5; i++) {
    printf("%d", a[i]);
  }
  return 0;
}
