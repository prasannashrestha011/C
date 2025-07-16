#include <stdio.h>
int main() {
  int i = 0, j = 0;
  for (i = 0; i < 5; i++) {
    for (j = i + 1; j < 5 + 1; j++) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}
