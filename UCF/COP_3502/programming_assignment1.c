#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Name: Kashyap Bathina
    Date: 11/4/23
    purpose: This programs takes in three integers and passes them through
    a function which returns the largest of the three using if statements.
    Then returns that number to main and prints it.
*/

const int LTTRS_IN_ALPHABET = 26;

int main () {
    int freq1[LTTRS_IN_ALPHABET] = {0}, freq2[LTTRS_IN_ALPHABET] = {0}, letters_required = 0;
    char* string1 = (char*) malloc(100002 * sizeof(char));
    char* string2 = (char*) malloc(100002 * sizeof(char));

    fgets(string1, 100002, stdin);
    fgets(string2, 100002, stdin);

    printf("%s", string1);
    printf("%s", string2);

    for (int i=0; i<strlen(string1)-2;i++) {
        if (string1[i] != '\n' && string1[i] >= 'A' && string1[i] <= 'Z') {
            freq1[string1[i]-'A']++;
        }
    }

    for (int i=0; i<strlen(string2)-2;i++) {
        if (string2[i] != '\n' && string2[i] >= 'A' && string2[i] <= 'Z') {
            freq2[string2[i]-'A']++;
        }
    }

    for (int i=0; i<26; i++) {
        if (freq1[i]<freq2[i]) {
            letters_required += (freq2[i] - freq1[i]);
        }
    }

    free(string1);
    free(string2);
    printf("%d\n", letters_required);

    return 0;
}
