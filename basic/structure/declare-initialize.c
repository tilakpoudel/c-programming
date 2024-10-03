/*
WAP to create a structure of student with members id,name and marks and display
student info along with the average marks.
*/
#include <stdio.h>
// Define a structure named Student
struct Student {
    int id;
    char name[50];
    float marks[5]; // Array to store marks for 5 subjects
};
int main() {
    // Declare and initialize a structure variable
    struct Student student1 = {
        1,                       // ID
        "Alice Johnson",         // Name (direct assignment)
        {85.5, 90.0, 78.0, 92.5, 88.0} // marks
    };
    // Calculate and display average grade
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += student1.marks[i];
    }
    float average = total / 5;
    printf("Student ID: %d\n", student1.id);
    printf("Student Name: %s\n", student1.name);
    printf("Average Grade: %.2f\n", average);

    return 0;
}
