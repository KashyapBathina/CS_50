#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: Lorem Ipsum Dolor
*/

int main() {
    //
    int years, months, weeks, days, hours;
    double now;
    #define leap_years_since_1970 13

    //
    now = time(NULL);

    //
    int sec_in_hours = 60*60;
    int sec_in_days = sec_in_hours * 24;
    int sec_in_weeks = sec_in_days * 7;
    int sec_in_months = sec_in_days * 30.42;
    int sec_in_years = sec_in_days * 365;

    years = num / sec_in_years;
    int t1 = (num % sec_in_years);
    months = t1/sec_in_months;
    int t2 = (t1 % sec_in_months);
    weeks = t2/sec_in_weeks;
    int t3 = (t2 % sec_in_weeks);
    days = t3/sec_in_days;
    int t4 = (t3 % sec_in_days);
    hours = t4/sec_in_hours;

    printf("Time passed since Jan 1, 1970: %d years, %d months, %d weeks, %d days   , %d, )

    return 0;
}