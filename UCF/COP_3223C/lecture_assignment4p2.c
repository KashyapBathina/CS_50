#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 11/6/23
    purpose: This programs takes in a numerical grade from the user and then passes the
    grade into a function, which determines the alphabetic--char--referencing our syllabus
    using if statements. The function returns that to main which prints the letter grade.
*/

// declaring function letter_grade
char letter_grade(double grade);

int main(void) {
    // declaring variables
    double grade;

    // asking for user to input numerical, integer, grade and storing it
    printf("Grade: ");
    scanf("%lf", &grade);

    // passing in numerical grade to function letter grade and printing result
    char letterGrade = letter_grade(grade);
    printf("Letter Grade: %c\n", letterGrade);

    return 0;
}

// this function takes in a grade and outputs the letter grade equivalent
char letter_grade(double grade) {
    // using if statements to determine which letter grade the number falls under as per
    // our syllabus, returns a ? if out of range 0-100
    if (grade >= 90 && grade <= 100) return 'A';
    else if (grade >= 80 && grade <= 89.99) return 'B';
    else if (grade >= 70 && grade <= 79.99) return 'C';
    else if (grade >= 60 && grade <= 69.99) return 'D';
    else if (grade >=0 && grade <= 59.99) return 'F';
    else return '?';
}
