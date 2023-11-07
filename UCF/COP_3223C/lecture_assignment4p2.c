#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs lorem ipsum
*/

//
char letter_grade(double grade);

int main(void) {
    //
    double grade;

    //
    printf("Grade (0-100): ");
    scanf("%lf", &grade);

    //
    char letterGrade = letter_grade(grade);
    printf("Letter Grade: %c\n", letterGrade);

    return 0;
}

//
char letter_grade(double grade) {
    //
    if (grade >= 90 && grade <= 100) return 'A';
    else if (grade >= 80 && grade <= 89.99) return 'B';
    else if (grade >= 70 && grade <= 79.99) return 'C';
    else if (grade >= 60 && grade <= 69.99) return 'D';
    else return 'F';
}
