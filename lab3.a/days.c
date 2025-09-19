#include <stdio.h>

int main() {
    int year, leap_years, total_days, day_of_week;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter a year: ");
    scanf("%d", &year);

    int current_year = 1;
    leap_years = 0;

    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            leap_years++;
        }
    }

    total_days = (year - 1) * 365 + leap_years;
    day_of_week = (total_days + 1) % 7; 

    printf("The day on 1st January of year %d was: %s\n", year, days[day_of_week]);

    return 0;
}