#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year);
void checkMultipleLeapYears(int startYear, int count);
void inputValidation(int *year);

int main(void) {
    int year, choice, count;

    printf("\n--- Leap Year Checker & Predictor ---\n");
    printf("1. Check if a specific year is a leap year\n");
    printf("2. Find the next N leap years from a given year\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a year: ");
        inputValidation(&year);
        if (isLeapYear(year)) {
            printf("\n %d is a leap year!\n", year);
        } else {
            printf("\n %d is NOT a leap year.\n", year);
        }
    } else if (choice == 2) {
        printf("Enter the starting year: ");
        inputValidation(&year);
        printf("Enter the number of leap years to find: ");
        inputValidation(&count);
        printf("\n--- Next %d Leap Years Starting from %d ---\n", count, year);
        checkMultipleLeapYears(year, count);
    } else {
        printf("\nInvalid choice! Please restart and enter 1 or 2.\n");
    }

    return 0;
}


bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}


void checkMultipleLeapYears(int startYear, int count) {
    int found = 0;
    while (found < count) {
        if (isLeapYear(startYear)) {
            printf("✔ %d\n", startYear);
            found++;
        }
        startYear++;
    }
}


void inputValidation(int *year) {
    while (scanf("%d", year) != 1 || *year <= 0) {
        printf("Invalid input! Please enter a positive numeric year: ");
        while (getchar() != '\n'); 
    }
}
