#include <stdio.h>


int main(void)
{
    string s = get_string("W: ");
    char *t = &s;

    printf("p%\n", s);
    printf("p%\n", t);
