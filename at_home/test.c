#include <stdio.h>


struct Person {
  int id;
};

void findStudent(struct Person **foundStudent, struct Person ***students) {
  foundStudent = students[2];
}

int main() {

  struct Person students[5] = {12, 34, 81, 2, 23};
  struct Person *foundStudent;

  printf("Test Struct Function\n");
  printf("--------------------\n");
  findStudent(&foundStudent, students);

  printf("Student: %i\n", students[2].id);
  printf("Found Student: %i\n", foundStudent->id);
  foundStudent->id = 1000;
  printf("Student: %i\n", students[2].id);
  printf("Found Student: %i\n", foundStudent->id);
/*
  printf("Student: %i\n", students[2].id);
  printf("Found Student: %i\n", foundStudent.id);
  foundStudent.id = 1000;
  printf("Student: %i\n", students[2].id);
  printf("Found Student: %i\n", foundStudent.id);



  struct Person *directStudentPtr = &students[4];

  printf("Student: %i\n", students[4].id);
  printf("Direct Student: %i\n", directStudentPtr->id);
  directStudentPtr->id = 1000;
  printf("Student: %i\n", students[4].id);
  printf("Direct Student: %i\n", directStudentPtr->id);*/


/*  int arr[5] = {1,2,3,4,5};
  int *ptr1 = &arr[2];
  for (int i = 0; i < 5; ++i) {
    printf("%i\n", arr[i]);
  }
  printf("%i\n", *ptr1);
  *ptr1 = 100;
  printf("%i\n", arr[2]);*/
}