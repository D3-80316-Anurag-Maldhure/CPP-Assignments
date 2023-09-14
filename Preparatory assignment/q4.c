#include <stdio.h>

int main() {
    int totalSubjects = 5;
    int totalMarks = 0;

    printf("Enter marks for each subject:\n");

    for (int i = 1; i <= totalSubjects; i++) {
        int marks;
        printf("Subject %d: ", i);
        scanf("%d", &marks);
        
        totalMarks += marks;
    }

    // Assign grade based on the rule
    char grade;
    if (totalMarks >= 90) {
        grade = 'A';
    } else if (totalMarks >= 80) {
        grade = 'B';
    } else if (totalMarks >= 70) {
        grade = 'C';
    } else if (totalMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total Marks: %d\n", totalMarks);
    printf("Grade: %c\n", grade);

    return 0;
}