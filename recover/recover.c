#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef unit8_t BYTE;

int main(int argc, char *argv[])
{
    //check that argument count is two
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    //open file for reading
    FILE *input_file = fopen(argv[1], "r");

    //check that the input_file is valid
    if (input_file = NULL)
    {
        printf("Could not open file");
        return 2;
    }

    //store blocks of 512 blocks into arrays
    unsigned char buffer[512];

    //track number of images generated
    int count_image = 0;

    //file pointer for recovered images
    FILE *output_file = NULL:

    //char filename[8]
    char *filename = malloc(8 * sizeof(char))

    fread (buffer, sizeof(char), 512, input_file);

    if (buffer[0] ==)
}