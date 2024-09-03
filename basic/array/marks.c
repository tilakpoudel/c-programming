#include <stdio.h>

int main () {
    // initialize an array
    float marks[5] = {45.0,10.5,35.5,40,31};
    int totalSubjects = sizeof(marks)/ sizeof(marks[0]);
    // TODO:: Find the lowest and highest marks
    // TODO:: Search 50 and display the result(Found: 50). If not found display
    // (Sorry: 50 not found)

    float average = 0;
    float sum = 0;

    // display the marks
    for (int i = 0; i < totalSubjects; i++)
    {
        printf("%.2f \t", marks[i]);
        // add marks in every subject
        sum += marks[i];
    }
    average = sum / totalSubjects;
    // TODO:: Find the average marks
    printf("\n The total marks of %d subjects is: %.2f", totalSubjects, sum);
    printf("\n The average of %d subjects marks is: %.2f", totalSubjects, average);
    
    
    return 0;
}