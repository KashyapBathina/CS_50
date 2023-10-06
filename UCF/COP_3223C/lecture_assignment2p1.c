#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
    name: Kashyap Bathina
    date: 9/3/23
    purpose: Lorem Ipsum Dolor
*/

/*
int main() {
    //
    int years, months, weeks, days, hours, minutes, seconds;
    int now;
    #define leap_years_since_1970 13

    //
    now = time(NULL);

    //
    int sec_in_minutes = 60;
    int sec_in_hours = 60*60;
    int sec_in_days = sec_in_hours * 24;
    int sec_in_weeks = sec_in_days * 7;
    int sec_in_months = sec_in_days * 30.42;
    int sec_in_years = sec_in_days * 365;

    // *NOTE*: I was told by the professor to add the seconds accumulated from leap years
    // Since there are 13 leap years, there are 13 extra days; we can add the seconds from those days
    //now += 13*sec_in_days;

    //
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
    //
    printf("Time passed since Jan 1, 1970: %d years, %d months, %d weeks, %d days, %d hours, %d minutes, and %d seconds\n", years, months, weeks, days, hours, minutes, seconds);

    return 0;
}
*/

int main() {
    time_t now = time(NULL);
    time_t startTime = 0; // January 1, 1970, 00:00:00

    double secondsSince1970 = difftime(now, startTime);
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;
    const int DAYS_PER_YEAR = 365;
    const double SECONDS_PER_MONTH = 30.42 * SECONDS_PER_DAY; // Accurate number of seconds in a month

    int years, months, weeks, days, hours;

    years = secondsSince1970 / (SECONDS_PER_MONTH * 12);
    secondsSince1970 -= years * (SECONDS_PER_MONTH * 12);

    months = secondsSince1970 / SECONDS_PER_MONTH;
    secondsSince1970 -= months * SECONDS_PER_MONTH;

    weeks = secondsSince1970 / (SECONDS_PER_DAY * 7);
    secondsSince1970 -= weeks * (SECONDS_PER_DAY * 7);

    days = secondsSince1970 / SECONDS_PER_DAY;
    secondsSince1970 -= days * SECONDS_PER_DAY;

    hours = secondsSince1970 / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);

    return 0;
}
