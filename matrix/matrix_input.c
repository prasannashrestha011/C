#include <stdio.h>
int main() {
  // 4x4 matrix
  int a[4][4], i, j;
  printf("Enter your numbers to build 4x4 matrix");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
