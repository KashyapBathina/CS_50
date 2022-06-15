#include <stdio.h>


int main(void)
{
    int x = 1;
    int y = 2;
    int *p = &x
    printf("x is %i, y is %i\n", x, y);
    
    printf("x is %i, y is %i\n", x, y);
}


int main()
{
   int a = 7, b ;
   int *p; // Un-initialized Pointer
   p = &a; // Stores address of a in ptr
   b = *p; // Put Value at ptr in b
}
