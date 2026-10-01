#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100   // Maximum number of students allowed
#define NAME_LEN 50        // Maximum length of student name
#define PERIOD_LEN 20      // Maximum length of period string

// Structure to store student details
typedef struct {
    char name[NAME_LEN];
    char period[PERIOD_LEN];
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int totalStudents, n;

    // Read total number of students
    printf("Enter total number of students (max %d): ", MAX_STUDENTS);
    if (scanf("%d", &totalStudents) != 1 || totalStudents <= 0 || totalStudents > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Read student details
    for (int i = 0; i < totalStudents; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name); // Read full name with spaces

        printf("Enter period for %s: ", students[i].name);
        scanf(" %[^\n]", students[i].period);
    }

    // Read how many students to display
    printf("\nEnter number of students to display from the start: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > totalStudents) {
        printf("Invalid number to display.\n");
        return 1;
    }

    // Display first n students
    printf("\n--- First %d Students and Their Periods ---\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d. Name: %s | Period: %s\n", i + 1, students[i].name, students[i].period);
    }

    return 0;
}
