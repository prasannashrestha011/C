#include <stdio.h>
int main() {
  // 4x4 matrix
  int a[2][2], i, j;
  printf("Enter your numbers to build 2x2 matrix");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Given matrix : \n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("Your transpose matrix : \n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", a[j][i]);
    }
    printf("\n");
  }
  return 0;
}
