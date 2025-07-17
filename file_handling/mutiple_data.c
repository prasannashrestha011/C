#include <stdio.h>
int main() {

  char name[50], post[50];
  int salary, n;
  printf("How many numbers of employee detail you want to add: ");
  scanf("%d", &n);
  FILE *ptr = fopen("employee.txt", "w+");

  for (int i = 0; i < n; i++) {
    scanf("%s %s %d", name, post, &salary);
    fprintf(ptr, "%s %s %d\n", name, post, salary);
  }
  // reading file
  rewind(ptr);
  puts("\nFile content:");
  while (!feof(ptr)) {
    fscanf(ptr, "%s %s %d", name, post, &salary);
    printf("%s %s %d\n", name, post, salary);
  }
  return 0;
}
