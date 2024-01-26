#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    int freq1[26] = {0}, freq2[26] = {0}, letters_required = 0;
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
        freq2[string2[i]-'A']++;
    }

    for (int i=0; i<26; i++) {
        if (freq1[i]<freq2[i]) {
            letters_required += freq2[i] - freq1[i];
        }
    }

    free(string1);
    free(string2);
    printf("%d\n", letters_required);

    return 0;
}
