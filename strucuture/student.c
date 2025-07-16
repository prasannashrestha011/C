#include <stdio.h>
struct Student {
  char name[50];
  int age;
  char address[50];
};
int main() {
  int n, i;
  printf("Enter the numbers of students ");
  scanf("%d", &n);
  struct Student s[n];
  for (i = 0; i < n; i++) {
    printf("Enter name age ,and address");
    scanf("%s %d %s", s[i].name, &s[i].age, s[i].address);
  }
  printf("Details of students: \n");
  for (i = 0; i < n; i++) {
    printf("%s %d %s \n", s[i].name, s[i].age, s[i].address);
  }
  return 0;
}
