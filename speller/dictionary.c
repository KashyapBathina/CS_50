// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    FILE *file = fopen(dictionary, "r");
    if (file = null)
    {
        prinft("Unable to open %s\n", dictionary);
        return false;
    }
    // Declare Word
    char word[LENGTH + 1];

     // Scan Dictionary
     while (fscanf(file, %s, word) != EOF)
     {
        // Allocate Memory
        node *n = malloc(sizeof(node));

        // Protection
        if (n == NULL)
        {
            return false;
        }

        // Copy Word Into Node
        strcpy((*n).word, word);
        hash_value = hash(word);
        (n*).next = table[hash_value];
        table[hash_value] = n;
        wordcount++;
     }
     fclose(file);
     return ture;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
