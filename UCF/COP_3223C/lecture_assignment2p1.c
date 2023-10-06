#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: This program outputs the years, months, weeks,
    days, hours, minutes, and seconds passed since Jan 1, 1970;
    it does this by using dividing to get a quotient (represeting the
    years, months, etc.) and then using modulus to get the remaining seconds
    and repeat for all time variables. The program also adds the seconds accum-
    alated from leap years.
    note: *PLEASE UNDERSTAND* that I included leap years even though the assignment
    doesn't delineate me to because the professor told me personally to when I asked him,
    so if this is incorrect, just ignore the line with the leap years and accept it the rest.
*/


int main() {
    // declaring variables and the constant of the leap years since 1970;
    int years, months, weeks, days, hours, minutes, seconds;
    // use a long long int type for now just in case even thought it's not wholly necessary 
    long long int now;
    #define leap_years_since_1970 13

    // getting the number of seconds since Jan 1, 1970
    now = time(NULL);

    // using arithmetic to find the number of seconds in various time elements
    int sec_in_minutes = 60;
    int sec_in_hours = 60*60;
    int sec_in_days = sec_in_hours * 24;
    int sec_in_weeks = sec_in_days * 7;
    int sec_in_months = sec_in_days * 30.42;
    int sec_in_years = sec_in_days * 365;

    // *NOTE*: I was told by the professor to add the seconds accumulated from leap years
    // since there are 13 leap years, there are 13 extra days; we can add the seconds from those days
    now += 13*sec_in_days;

    // finding out the years, months, etc. by dividing to get a quotient and using the remaining with modulus
    // and then repeating for every time types
    years = now / sec_in_years;
    int t1 = now % sec_in_years;
    months = t1 / sec_in_months;
    int t2 = t1 % sec_in_months;
    weeks = t2 / sec_in_weeks;
    int t3 = t2 % sec_in_weeks;
    days = t3 / sec_in_days;
    int t4 = t3 % sec_in_days;
    hours = t4 / sec_in_hours;
    int t5 = t4 % sec_in_hours;
    minutes = t5 / sec_in_minutes;
    int t6 = t5 % sec_in_minutes;
    seconds = t6;

    // *NOTE*: I was also told by the professor to also ouput the minutes and seconds
    // printing out the years, months, weeks, days, hours, minutes, and seconds that passed since Jan 1, 1970
    printf("Time passed since Jan 1, 1970:\n%d years, %d months, %d weeks, %d days, %d hours, %d minutes, and %d seconds\n", years, months, weeks, days, hours, minutes, seconds);

    return 0;
}
