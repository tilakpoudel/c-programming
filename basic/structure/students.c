#include <stdio.h>
#include <string.h>

// Define a structure named Student
struct Student {
    int id;
    char name[50];
    float grades[5]; // Array to store grades for 5 subjects
};

int main() {
    // Declare a structure variable
    struct Student student1;

    // Assign values to the structure members
    student1.id = 1;
    strcpy(student1.name, "Alice Johnson");
    student1.grades[0] = 85.5;
    student1.grades[1] = 90.0;
    student1.grades[2] = 78.0;
    student1.grades[3] = 92.5;
    student1.grades[4] = 88.0;

    // Calculate and display average grade
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student1.grades[i];
    }
    float average = total / 5;

    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Average Grade: %.2f\n", average);

    return 0;
}
