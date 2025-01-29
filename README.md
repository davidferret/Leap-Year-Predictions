# 📆 Leap Year Checker & Predictor - C Program

## 🚀 Overview
This C program allows users to check if a given year is a leap year and predict upcoming leap years. It features user input validation and provides a choice between checking a single year or listing multiple leap years.

## 🛠 Features
- **Leap Year Verification**: Determines whether a specific year is a leap year.
- **Leap Year Prediction**: Finds and lists the next N leap years starting from a given year.
- **Input Validation**: Ensures users enter positive numeric values.

## 📜 How It Works
1. The user selects one of two options:
   - `1` to check if a specific year is a leap year.
   - `2` to find the next N leap years starting from a given year.
2. The program verifies input and processes the request.
3. The results are displayed in a user-friendly format.

## 🏗 Code Structure
- **`isLeapYear(int year)`**: Determines whether a given year is a leap year.
- **`checkMultipleLeapYears(int startYear, int count)`**: Finds and prints the next `count` leap years starting from `startYear`.
- **`inputValidation(int *year)`**: Ensures the user inputs a valid year.
- **`main()`**: Handles user interaction and function calls.

## 🔧 Compilation & Execution
To compile and run the program, use the following commands:
```bash
gcc leap_year_checker.c -o leap_year_checker
./leap_year_checker
```

## 🎯 Example Usage
```
--- Leap Year Checker & Predictor ---
1. Check if a specific year is a leap year
2. Find the next N leap years from a given year
Enter your choice (1 or 2): 1
Enter a year: 2024

✅ 2024 is a leap year!
```
```
Enter your choice (1 or 2): 2
Enter the starting year: 2023
Enter the number of leap years to find: 5

--- Next 5 Leap Years Starting from 2023 ---
✔ 2024
✔ 2028
✔ 2032
✔ 2036
✔ 2040
```

## 📬 Contributions & Feedback
Feel free to contribute or suggest improvements. Happy coding! 🎉

