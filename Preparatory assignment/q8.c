#include <stdio.h>
#include <string.h>

//Student structure
struct Student {
    char studentName[50];
    int rollNo;
    int totalMarks;
};

void readStudentData(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->studentName);

    printf("Enter student's roll number: ");
    scanf("%d", &(student->rollNo));

    printf("Enter student's total marks: ");
    scanf("%d", &(student->totalMarks));
}

void displayStudentData(const struct Student *student) {
    printf("Student Name: %s\n", student->studentName);
    printf("Roll Number: %d\n", student->rollNo);
    printf("Total Marks: %d\n", student->totalMarks);
}

int main() {
    struct Student student;

    printf("Enter student information:\n");
    readStudentData(&student);

    printf("\nStudent Information:\n");
    displayStudentData(&student);

    return 0;
}
