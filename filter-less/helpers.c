#include "helpers.h"
#include <math.h>


// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < &image[i]; i++)
        {
            float color = rgbtBlue[i] + rgbtGreen[i] + rgbtGreen[i] / 3.0;
            int greyscale = round(color);
            rgbtblue[i] = greyscale;
            rgbtGreen[i] = greyscale;
            rgbtGreen[i] = greyscale;
            return 0;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
