#include <stdio.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: This program takes asks for the length, width, and height of
    the box, and then finds the volume in cubic inches per the formula l*w*h
    and then find the volume in cubic feet by didividng that number by 1728.
*/

int main(void) {
    // declares the variables of the dimensions, length, width, and height
    double length, width, height;
    // declares the variables of the volume in cubic inches and cubic feet
    double volume_in_cubic_inches, volume_in_cubic_feet;

    // prints a request for length of box in inches
    printf("Length of box (inches): ");
    // scans in input and stores in length variable
    scanf("%lf", &length);

    // prints a request for width of box in inches
    printf("Width of box (inches): ");
    // scans in input and stores in width variable
    scanf("%lf", &width);

    // prints a request for height of box in inches
    printf("Height of box (inches): ");
    // scans in input and stores in height variable
    scanf("%lf", &height);

    // 
    volume_in_cubic_inches = length * width * height;
    volume_in_cubic_feet = volume_in_cubic_inches/1728;

    printf("The volume is %.2lf cubic inches\n", volume_in_cubic_inches);
    printf("The volume is %.2lf cubic feet\n", volume_in_cubic_feet);

    //


}