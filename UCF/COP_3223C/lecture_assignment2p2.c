#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: This program asks the user for an input in the
    range of 1 to 20 and prints out the corresponding roman numeral;
    the program prints out error and exits when int is out of range.
*/

int main() {
    // declaring variables
    int user_num;

    // asking user for number in range and storing it
    printf("Please enter a number between 1 and 20: ");
    scanf("%d", &user_num);

    // using a switch statement to ouput the roman numeral for said input
    // default prints our error and exits when given int is out of range
    switch (user_num) {
        case 1: printf("The Roman Numeral For This Number is I\n");
                break;
        case 2: printf("The Roman Numeral For This Number is II\n");
                break;
        case 3: printf("The Roman Numeral For This Number is III\n");
                break;
        case 4: printf("The Roman Numeral For This Number is IV\n");
                break;
        case 5: printf("The Roman Numeral For This Number is V\n");
                break;
        case 6: printf("The Roman Numeral For This Number is VI\n");
                break;
        case 7: printf("The Roman Numeral For This Number is VII\n");
                break;
        case 8: printf("The Roman Numeral For This Number is VIII\n");
                break;
        case 9: printf("The Roman Numeral For This Number is IX\n");
                break;
        case 10: printf("The Roman Numeral For This Number is X\n");
                break;
        case 11: printf("The Roman Numeral For This Number is XI\n");
                break;
        case 12: printf("The Roman Numeral For This Number is XII\n");
                break;
        case 13: printf("The Roman Numeral For This Number is XIII\n");
                break;
        case 14: printf("The Roman Numeral For This Number is XIV\n");
                break;
        case 15: printf("The Roman Numeral For This Number is XV\n");
                break;
        case 16: printf("The Roman Numeral For This Number is XVI\n");
                break;
        case 17: printf("The Roman Numeral For This Number is XVII\n");
                break;
        case 18: printf("The Roman Numeral For This Number is XVIII\n");
                break;
        case 19: printf("The Roman Numeral For This Number is XIX\n");
                break;
        case 20: printf("The Roman Numeral For This Number is XX\n");
                break;
        default: printf("The Number You Entered is Out of Range!\n");
                 exit(-1);
    }

    return 0;
}