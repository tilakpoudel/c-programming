#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float grades[5]; // Array to store grades for 5 subjects
};

int main() {

        struct Student s1;
        
        // Ask input from user of student 1
        printf("Enter student ID for student1 ");
        scanf("%d", &s1.id);
        printf("Enter student name for student1");
        getchar(); // Clear the newline character from the input buffer
        fgets(s1.name, sizeof(s1.name), stdin);

        // Input grades for each student
        for (int j = 0; j < 5; j++) {
            printf("Enter grade for subject %d for student 1: ", j + 1);
            scanf("%f", &s1.grades[j]);
        }


    // Declare an array of structures
    struct Student students[3]; // Array to hold 3 student records

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter student ID for student %d: ", i + 1);
        scanf("%d", &students[i].id);
        printf("Enter student name for student %d: ", i + 1);
        getchar(); // Clear the newline character from the input buffer
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Input grades for each student
        for (int j = 0; j < 5; j++) {
            printf("Enter grade for subject %d for student %d: ", j + 1, i + 1);
            scanf("%f", &students[i].grades[j]);
        }
    }

    // Display the records of each student
    printf("\nStudent Records:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student ID: %d\n", students[i].id);
        printf("Student Name: %s", students[i].name);
        
        // Calculate and display average grade
        float total = 0;
        for (int j = 0; j < 5; j++) {
            total += students[i].grades[j];
        }
        float average = total / 5;
        printf("Average Grade: %.2f\n\n", average);
    }

    return 0;
}
