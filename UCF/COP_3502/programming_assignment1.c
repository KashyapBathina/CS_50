#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    int freq1[26], freq2[26], letters_required = 0;
    char* string1 = (char*) malloc(100002 * sizeof(char));
    char* string2 = (char*) malloc(100002 * sizeof(char));

    fgets(string1, 100002, stdin);
    fgets(string2, 100002, stdin);

    printf("%s", string1);
    printf("%s", string2);

    for (int i=0; i<strlen(string1)-1;i++) {
        freq1[string1[i]-'A']++;
    }

    for (int i=0; i<strlen(string1)-1;i++) {
        freq1[string2[i]-'A']++;
    }

    for (int i=0; i<26; i++) {
        letters_required += freq2[i] - freq1[i];
    }

    printf("%d", letters_required);

    return 0;
}
