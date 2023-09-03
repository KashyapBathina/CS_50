#include <stdio.h>

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
    volume_in_cubic_feet = volume_in_cubic_inches/12;

    printf("The volume is %.2lf cubic inches\n", volume_in_cubic_inches);
    printf("The volume is %.2lf cubic feet\n", volume_in_cubic_feet);


}