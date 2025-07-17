#include <stdio.h>
int main() {
  char content[] =
      "Jan doe is a person which is commonly refered in programming";
  FILE *ptr = fopen("text.txt", "w");
  fputs(content, ptr);
  fclose(ptr);
  printf("text.txt file has been written");
  return 0;
}
