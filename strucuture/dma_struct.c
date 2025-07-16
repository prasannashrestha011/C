#include <stdio.h>
#include <stdlib.h>
struct Student {
  char name[50];
  int age;
  char address[50];
};

int main() {
  int n;
  struct Student *p;
  printf("Enter the numbers of student you want to store ");
  scanf("%d", &n);
  p = (struct Student *)calloc(n, sizeof(struct Student));
  struct Student *q = p;
  for (int i = 0; i < n; i++) {
    printf("Enter the student detail %d ", i);
    scanf("%s %d %s", p->name, &p->age, p->address);
  }
  for (int i = 0; i < n; i++) {
    printf("%s %d %s", q->name, q->age, q->address);
  }
  return 0;
}
