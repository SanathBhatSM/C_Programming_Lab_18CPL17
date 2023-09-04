// Implement structures to read, write, compute average- marks and the students scoring above and below the average marks for a class of N students.

#include <stdio.h>

// Define a structure to store student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n;

    // Input the number of students in the class
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    float totalMarks = 0.0;

    // Input student information and calculate total marks
    printf("Enter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        totalMarks += students[i].marks;
    }

    // Calculate the average marks
    float averageMarks = totalMarks / n;

    printf("\nClass Average Marks: %f\n", averageMarks);

    printf("\nStudents scoring above average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > averageMarks) {
            printf("Name: %s, Roll Number: %d, Marks: %f\n", students[i].name, students[i].rollNumber, students[i].marks);
        }
    }

    printf("\nStudents scoring below average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < averageMarks) {
            printf("Name: %s, Roll Number: %d, Marks: %f\n", students[i].name, students[i].rollNumber, students[i].marks);
        }
    }

    return 0;
}
