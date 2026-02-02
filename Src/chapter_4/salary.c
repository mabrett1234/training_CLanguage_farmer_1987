/*salary.c*/
// Some helpful functions for the assignments

// Includes
#include <stdio.h>
#include "chapter_4/salary.h"

// Function Definitions
int countEntries(void) {
    FILE *fp = fopen("data.txt", "r"); // Open file in read mode
    if (fp == NULL) { // Error checking
        perror("Could not open file.");
        return 1;
    }
    int n = 0; // Number of entries
    char ch;
    // Annoyingly, need to count the number of entries to use arrays for other bits.
    // %*[^\n] means 'skip to newline character'
    // %c means 'read char'
    // so the scanf is just reading the newline char every line until EOF
    while (fscanf(fp, "%*[^\n]%c", &ch) != EOF){
        n++;
    }
    fclose(fp); // Close the file
    return n + 1;
}

long int readSalaries(int *arr, int n) {
    int salary = 0;
    long int sum = 0;
    int i = 0;

    // Open the file
    FILE *fp = fopen("data.txt", "r"); // Open file in read mode
    if (fp == NULL) { // Error checking
        perror("Could not open file.");
        return 1;
    }
    // The fscanf is skipping 25 characters, reading an int,
    // then skipping to end of line
    while (i < n && fscanf(fp, "%*25c%d%*[^\n]*]%*c", &salary) != EOF) {
        arr[i] = salary;
        sum+= salary;
        i++;
    }
    fclose(fp); // Close the file
    return sum;
}

void printStats(int* arr, int n, long int sum) {
    printf("Salary statistics:\n");
    printf("\tAverage:\t$%d\n", (int)(sum / n));
    printf("\tMinimum:\t$%d\n", arr[0]);
    printf("\tMedian:\t\t$%d\n", arr[n / 2]);
    printf("\tMaximum:\t$%d\n", arr[n-1]);
}

int readAge(int* ref_arr, int* d_arr, int* m_arr, int *y_arr,  int n) {
    int d, m, y, r = {0};

    // Open the file
    FILE *fp = fopen("data.txt", "r"); // Open file in read mode
    if (fp == NULL) { // Error checking
        perror("Could not open file.");
        return 1;
    }
    // The fscanf is skipping 25 characters, reading an int,
    // then skipping to end of line
    int i = 0;
    while ( i < n &&
        fscanf(fp, "%d %*30c%d/%d/%d%*[^\n]*]%*c", &r, &d, &m, &y) != EOF) {
        //printf("Employee %d DOB is %d/%d/%d\n", r, d, m, y);
        d_arr[i] = d;
        m_arr[i] = m;
        y_arr[i] = y;
        ref_arr[i] = r; // TODO: Read in the employee number
        i++;
    }
    fclose(fp); // Close the file
    return 0;
}

int readStartDate(int* ref_arr, int* d_arr, int* m_arr, int *y_arr,  int n) {
    int d, m, y, r = {0};

    // Open the file
    FILE *fp = fopen("data.txt", "r"); // Open file in read mode
    if (fp == NULL) { // Error checking
        perror("Could not open file.");
        return 1;
    }
    // The fscanf is skipping 25 characters, reading an int,
    // then skipping to end of line
    int i = 0;
    while ( i < n &&
        fscanf(fp, "%d %*42c%d/%d/%d%*[^\n]*]%*c", &r, &d, &m, &y) != EOF) {
        //printf("Employee %d DOB is %d/%d/%d\n", r, d, m, y);
        d_arr[i] = d;
        m_arr[i] = m;
        y_arr[i] = y;
        ref_arr[i] = r;
        i++;
        }
    fclose(fp); // Close the file
    return 0;
}