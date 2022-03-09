#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("How tall is the pyramid?  ");
    }
    while ( n > 8 || n < 1);

// row
    for ( int i = 0; i < n; i++);
    {
        // column
            for (int j = 0; j < n; j++);

}
