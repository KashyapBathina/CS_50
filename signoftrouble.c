#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    name: Kashyap Bathina
    date: 1/25/24
    purpose: after taking in two strings, the program calculates how many new letters are needed for the second
    message, subtracting the letters from the 1st message. after reading each character of the array through a
    frequency array of both strings noting how many of each alphabet there are, the program subtracts string 2's
    array from string 1's array when the # of characters are greater than string 1's at that index. totaling this
    number gets the # of new letters needed for the new sign.
*/

// declaring the constannts of alphabets and the max size of the strings
const int LTTRS_IN_ALPHABET = 26;
const int STRING_SIZE = 100002;

int main () {
    // declaring variables: initializing freq arrays and letters required to zero
    int freq1[LTTRS_IN_ALPHABET] = {0}, freq2[LTTRS_IN_ALPHABET] = {0}, letters_required = 0;

    // dynamically allocating memory for two strings of STRING max SIZE via malloc
    char* string1 = (char*) malloc(STRING_SIZE * sizeof(char));
    char* string2 = (char*) malloc(STRING_SIZE * sizeof(char));

    // using fgets on the stdin to read in user input and storing it in the previously allocated char array
    fgets(string1, 100002, stdin);
    fgets(string2, 100002, stdin);

    // for each character in string1, noting which alphabet it is by updating freq array
    for (int i=0; i<strlen(string1)-1;i++) {
        // using if statement to ensure char at i is not a space, then updating freq to note alphabet
        if (string1[i]!=' ') {
            freq1[string1[i]-'A']++;
        }
    }

    // for each character in string1, noting which alphabet it is by updating freq array
    for (int i=0; i<strlen(string2)-1;i++) {
        // using if statement to ensure char at i is not a space, then updating freq to note alphabet
        if (string2[i]!=' ') {
            freq2[string2[i]-'A']++;
        }
    }

    // iterating over freq array that indicates alphabets
    for (int i=0; i<26; i++) {
        // if the letter appears more in string 2 than 1, updating letters required to note # of new letters
        if (freq1[i]<freq2[i]) {
            letters_required += (freq2[i] - freq1[i]);
        }
    }

    // freeing dynamically allocated strings then printing # of letters required
    free(string1);
    free(string2);
    printf("%d\n", letters_required);

    return 0;
}
