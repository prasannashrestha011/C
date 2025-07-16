#include <stdio.h>
int main() {
  int i, j, n = 5, a[5];
  printf("Enter any five numbers");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < 5; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  for (i = 0; i < 5; i++) {
    printf("%d", a[i]);
  }
  return 0;
}
