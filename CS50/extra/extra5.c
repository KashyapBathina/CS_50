#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Raj";
    people[0].number = "650-740-2062";

    people[1].name = "Prameela";
    people[1].number = "650-538-4948";

    for(int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Raj") == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}