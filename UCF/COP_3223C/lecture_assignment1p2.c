#include <stdio.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: This program takes asks for the length, width, and height of
    the box, and then finds the volume in cubic inches per the formula l*w*h
    and then find the volume in cubic feet by didividng that number by 1728.
*/

int main(void) {
    double length, width, height;
    double volume_in_cubic_inches, volume_in_cubic_feet;

    printf("Length of box (inches): ");
    scanf("%lf", &length);

    printf("Width of box (inches): ");
    scanf("%lf", &width);

    printf("Height of box (inches): ");
    scanf("%lf", &height);

    volume_in_cubic_inches = length * width * height;
    volume_in_cubic_feet = volume_in_cubic_inches/1728;

    printf("The volume is %.2lf cubic inches\n", volume_in_cubic_inches);
    printf("The volume is %.2lf cubic feet\n", volume_in_cubic_feet);

    //


}