#include <stdio.h>
int main() {
  int a[5], i, j, temp, n = 5;
  printf("Enter any 5 numbers for sorting \n ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
  }
  printf("\n After sorting \n");
  for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
