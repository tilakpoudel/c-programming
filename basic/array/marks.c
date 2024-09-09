#include <stdio.h>

int main () {
    // initialize an array
    // datatype arrayname[size];
    // array index starts from 0
    float marks[5] = {45.0,10.5,35.5,40,31};
    int totalSubjects = sizeof(marks)/ sizeof(marks[0]);
    // TODO:: Find the lowest and highest marks
    // TODO:: Search 50 and display the result(Found: 50). If not found display
    // (Sorry: 50 not found)

    // printf("Enter marks");
    // float m1,m2, m3, m4, m5;
    // scanf("%f", &m1);
    // marks[0] = m1;

    // printf("marks 1 %f", marks[0]);
    // scanf("%f", &m2);
    // marks[1] = m2;

    // scanf("%f", &m3);
    // marks[2] = m3;

    // scanf("%f", &m4);
    // marks[3] = m4;

    // scanf("%f", &m5);
    // marks[4] = m5;

    printf("Enter the marks in 5 subects \n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks %d \n", i+1);
        float m;
        scanf("%f", &m);
        marks[i] = m;
    }
    
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