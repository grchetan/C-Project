// Project: Student Marks & Grade Management System
// Author: Chetan
// Date: 23-April-2025

#include <stdio.h>

// Function declarations
void inputMarks(int m[], int n);
int findTotal(int m[], int n);
float findAverage(int total, int n);
char getGrade(float avg);

int main() {
    int marks[5];  // Array to store marks of 5 subjects
    int total;
    float average;
    char grade;

    printf("***** Student Marks Entry *****\n");
    printf("Please enter marks for 5 subjects (Out of 100)\n");

    // Function to take input
    inputMarks(marks, 5);

    // Calculating total, average and grade
    total = findTotal(marks, 5);
    average = findAverage(total, 5);
    grade = getGrade(average);

    // Display result
    printf("\n-------- Result --------\n");
    printf("Total Marks = %d / 500\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Grade = %c\n", grade);

    return 0;
}

// Function to take input with validation
void inputMarks(int m[], int n) {
    for (int i = 0; i < n; i++) {
        do {
            printf("Enter marks for Subject %d: ", i + 1);
            scanf("%d", &m[i]);

            if (m[i] < 0 || m[i] > 100) {
                printf("!! Invalid marks. Please enter between 0 to 100 only.\n");
            }
        } while (m[i] < 0 || m[i] > 100);
    }
}

// Function to calculate total marks
int findTotal(int m[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + m[i];
    }
    return total;
}

// Function to calculate average
float findAverage(int total, int n) {
    return (float)total / n;
}

// Function to calculate grade
char getGrade(float avg) {
    if (avg >= 90) {
        return 'A';
    } else if (avg >= 75) {
        return 'B';
    } else if (avg >= 60) {
        return 'C';
    } else if (avg >= 40) {
        return 'D';
    } else {
        return 'F';
    }
}
