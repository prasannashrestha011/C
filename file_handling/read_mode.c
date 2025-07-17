#include <stdio.h>
int main() {
  FILE *ptr = fopen("text.txt", "r");
  puts("File content:\n");
  while (!feof(ptr)) {
    char n = fgetc(ptr);
    printf("%c", n);
  }
  printf("\n");
  return 0;
}
