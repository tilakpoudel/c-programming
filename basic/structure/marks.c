#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float grades[5]; // Array to store grades for 5 subjects
};

int main() {
    struct Student student1;

    // Get user input
    printf("Enter student ID: ");
    scanf("%d", &student1.id);
    printf("Enter student name: ");
    getchar(); // Clear the newline character from the input buffer
    fgets(student1.name, sizeof(student1.name), stdin);

    // Get grades for each subject
    for (int i = 0; i < 5; i++) {
        printf("Enter grade for subject %d: ", i + 1);
        scanf("%f", &student1.grades[i]);
    }

    // Calculate and display average grade
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student1.grades[i];
    }
    float average = total / 5;

    printf("\nStudent ID: %d\n", student1.id);
    printf("Student Name: %s", student1.name);
    printf("Average Grade: %.2f\n", average);

    return 0;
}
