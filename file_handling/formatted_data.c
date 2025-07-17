#include <stdio.h>
int main() {
  char name[50];
  int age;
  float gpa;
  FILE *ptr = fopen("student.txt", "w+");
  printf("Enter your student details:(name,age,gpa)");
  scanf("%s %d %f", name, &age, &gpa);

  fprintf(ptr, "%s %d %f", name, age, gpa);

  // reading the file
  rewind(ptr);
  while (!feof(ptr)) {
    fscanf(ptr, "%s %d %f", name, &age, &gpa);
    printf("Stored data:\n");
    printf("%s %d %f", name, age, gpa);
  }
  fclose(ptr);
  return 0;
}
