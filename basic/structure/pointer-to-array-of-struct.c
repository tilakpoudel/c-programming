#include <stdio.h>
#include <stdlib.h> // Include for malloc and free

// Define a structure for Student
struct Student {
    int id;
    char name[50];
    float grades[5]; // Array to store grades for 5 subjects
};

int main() {
    int num_students;

    // Get number of students from the user
    printf("Enter number of students: ");
    scanf("%d", &num_students);

    // Allocate memory for an array of Student structures
    struct Student *students = (struct Student *)malloc(num_students * sizeof(struct Student));

    // Check if memory allocation was successful
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if allocation fails
    }

    // Input data for each student
    for (int i = 0; i < num_students; i++) {
        struct Student *current_student = students + i; // Pointer to the current student
        
        printf("\nEnter student ID for student %d: ", i + 1);
        scanf("%d", &current_student->id);
        printf("Enter student name for student %d: ", i + 1);
        getchar(); // Clear the newline character from the input buffer
        fgets(current_student->name, sizeof(current_student->name), stdin);

        // Input grades for each student
        for (int j = 0; j < 5; j++) {
            printf("Enter grade for subject %d for student %d: ", j + 1, i + 1);
            scanf("%f", &current_student->grades[j]);
        }
    }

    // Display the records of each student
    printf("\nStudent Records:\n");
    for (int i = 0; i < num_students; i++) {
        struct Student *current_student = students + i; // Pointer to the current student
        
        printf("Student ID: %d\n", current_student->id);
        printf("Student Name: %s", current_student->name);
        
        // Calculate and display average grade
        float total = 0;
        for (int j = 0; j < 5; j++) {
            total += current_student->grades[j];
        }
        float average = total / 5;
        printf("Average Grade: %.2f\n", average);
    }

    // Free the allocated memory
    free(students);

    return 0;
}
