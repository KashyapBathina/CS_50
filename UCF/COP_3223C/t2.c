#include <stdio.h>

//-------------------------------------------------------------------------------------------------------------------------------
/*
    Implicit Casting (automatically) - converting a smaller type to a larger type size. char -> int -> long -> float -> double.
    Explicit Casting (manually) - converting a larger type to a smaller size type. double -> float -> long -> int -> char.
*/

//driver code
/*
int main(void) {
    int grade1 = 75;
    int grade2 = 80;

    int average1 = (grade1+grade2)/2;
    int average2 = grade1+grade2/2;
    int average3 = grade2+grade1/2;
    double average4 = (grade1+grade2)/2;
    double average5 = (double)(grade1+grade2)/2;
    double average6 = (grade1+grade2)/2.0;
    double average7 = (double)((grade1+grade2)/2);
    int average8 = (grade1+grade2/2.0);

    //&d=placeholder
    printf("Avg #1 = %d\n", average1);
    printf("Avg #2 = %d\n", average2);
    printf("Avg #3 = %d\n", average3);
    printf("Avg #4 = %lf\n", average4);
    printf("Avg #5 = %lf\n", average5);
    printf("Avg #6 = %lf\n", average6);
    printf("Avg #7 = %lf\n", average7);
    printf("Avg #8 = %d\n", average8);

}
*/

/*
int main() {
    int a=15, b=2;
    char x = 'a';

    double div;

    //explicit typecasting in double
    div=(double)a/b;

    //converting x implicity to a+3 i.e a+3=d
    x=x+3;

    printf("The result of implicit typecasting is %c\n", x);
    printf("The result of explicit typecasting is %f\n", div);

    return 0;

}
*/

/*
int main(){
    int n;
    printf("Enter an Integer.\n");
    scanf("%d", &n);

    // use mod to split out the units digits
    int units = n%10;

    // use integer division to get the rest of the number, then mod to get origial tens digit
    int tens = (n/10)%10;

    printf("Units digit is %d and tens diigit is %d\n", units, tens);
}
*/

//-------------------------------------------------------------------------------------------------------------------------------

int main(void) {
    int lorem;
    
}