#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.145926535898

/*------------module 4------------------------------------------------------------------------------------------------------------*/

/*
The ability to read and write large datatstes to files
    fprintf--
        purpose:
        structure: fprintf(file_ptr, control_string, other arguments)
                    pointer - tells the compiler to referece or look ata specific memory location for value
                    control string -
                    other arguments - read or write
    fscanf--
        purpose:
        structure: fcanf(file_ptr, control_string, other arguments)
                    pointer - tells the compiler to referece or look ata specific memory location for value
                    control string -
                    other arguments -

Requirements:
    1. Find the file we have to use a pointer - FILE *ifp;
    2. Name of the file with mode: "r" for read "w" for writing data
    3. Open file: ifp = fopen("input.txt", "r");
    4. Operate on file: fscanf(ifp, "%d", &num);
    5. Close file fclose(ifp);

*/

int main() {
    //location in memory where our data is temp stored, pointer points to memory of file
    FILE *ifp;

    //open input file
    ifp = fopen("input.in", "r");

    int n;
    int day;
    fscanf(ifp, "%d", &numcases);

    //process each case
    


}