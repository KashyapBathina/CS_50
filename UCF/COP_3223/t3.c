#include <stdio.h>

/*------------module 3------------------------------------------------------------------------------------------------------------*/

/*
Functions requirements
    1. name of a function
    2. the data type of paramaters
    3. the return type of the function

Functions:
    Printf, scanf
    Random number function-std library:
        int x=1+rand()%100;
    C math library = #include <math.h>:
        int=return type abs=function name, int=data type of paramater: int abs(int x)
        double pow(double x, double y)
        double sqrt(double x)

Conditional expression-expression is true or false
    test if condition is true or false . . . if true, then do something . . . if false, do something
    noting 'a' < 'b', also 10%12 is 10 bc 10 doesnt go into 12 so 10 is the remainder
    six different orelational operators for comparison
        1. ==   is equal
        2. !=   is not equal
        3. >    greater tham
        4. >=   greater than or equal to
        5. <    less than
        6. <=   less than or equal t
    logical or (||): at least two conditions and only one condition has to be true
    logical and (&&): both conditions must be true
        if (statement) {
            statement1;
        }
        else {
            statement 2;
        }

        or

        if (statement) statement 1;
*/

/*
int main(void) {
    //constants
    #define MIN_GPA 3.2
    #define MIN_SAT 1200
    float gpa;
    int sat;

    printf("Enter your gpa\n.");
    scanf("%f", &gpa);

    printf("Enter your sat\n.");
    scanf("%d", &sat);

    //logical and to confirm both req. true

    if (gpa >= MIN_GPA && sat >= MIN_SAT) {
        printf("Congrats, you're eligible for scholarship\n");
    }
    else if (gpa <= MIN_GPA || sat <= MIN_SAT){
        printf("Apologies, you have not met the SAT or GPA requirements for the scholarhsip\n");
    }
    else {
        printf("Apologies, you have not met the requirements for the scholarhsip\n");
    }
    return 0;
}
*/

/*
int main() {
    int roomlen, roomwid;
    int desklen, deskwid;
    int temp;

    printf("Enter w and l of room\n");
    scanf("%d%d", &roomlen, &roomwid);

    printf("Enter w and l of desk\n");
    scanf("%d%d", &desklen, &deskwid);

    // adjust room length to be greater than or equal to its width
    if (roomlen<roomwid) {
        temp=roomlen;
        roomlen=roomwid;
        roomwid=temp;
    }

    // adjust deask length to be greater than or equal to its width
    if (desklen<deskwid) {
        temp=desklen;
        desklen=deskwid;
        deskwid=temp;
    }

    // compare correspoding dimesnions and output result
    if (deskwid<=roomwid && desklen<=roomlen) {
        printf("The desk will fit in the room\n");
    }
    else {
        printf("The desk will NOT fit in the room\n");
    }

    return 0;
}
*/

int main() {
    char operator;
    double n1, n2;

    printf("Enter an opeartion (+,-,*,/): \n");
    scanf("%c", &operator);

    printf("Enter 2 operands: \n");
    scanf("%lf%lf", &n1, &n2);

    // switch is used for conditional statements with int or char types, switch(expression): expression is variable being tested againt other cases
    switch(operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1+n2);
            // when break occurs, switch terminates, and the flow of control jumps to the next line following the switch statement
            // if not break -> then all the cases after the matching case are executed (EXCLUDING WHEN BREAK AGAIN), including default
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1/n2);
            break;

        // default when none of cases are true
        default:
            printf("Error! Operator is not correct\n");
    }

    return 0;

}
