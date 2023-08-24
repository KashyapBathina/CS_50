#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("name: ");
    int length = strlen(name);
    printf("Your name is %i letters\n", length);
}