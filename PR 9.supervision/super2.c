//Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in //Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: //roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each //student.
#include <stdio.h>

struct Student
{
  int roll_no;
  char name[20];
  int chemistry_marks;
  int maths_marks;
  int physics_marks;
};

int main() 
{
  struct Student students[5];

    for (int i = 0; i < 5; i++) 
    {
    printf("Enter the details of student %d:\n", i + 1);
    printf("Roll number: ");
    scanf("%d", &students[i].roll_no);
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("Chemistry marks: ");
    scanf("%d", &students[i].chemistry_marks);
    printf("Maths marks: ");
    scanf("%d", &students[i].maths_marks);
    printf("Physics marks: ");
    scanf("%d", &students[i].physics_marks);
  }

    for (int i = 0; i < 5; i++) 
    {
    int total_marks = students[i].chemistry_marks + students[i].maths_marks + students[i].physics_marks;
    float percentage = (total_marks / 300.0) * 100.0;

    printf("\nMark sheet for student %d:\n", i + 1);
    printf("Roll number: %d\n", students[i].roll_no);
    printf("Name: %s\n", students[i].name);
    printf("Chemistry marks: %d\n", students[i].chemistry_marks);
    printf("Maths marks: %d\n", students[i].maths_marks);
    printf("Physics marks: %d\n", students[i].physics_marks);
    printf("Total marks: %d\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
  }

  return 0;
}