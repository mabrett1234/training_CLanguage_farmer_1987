/*assignment_4_2.c*/

// Includes
#include <stdio.h>
#include "chapter_4/bubble.h"
#include "chapter_4/salary.h"
#include "chapter_4/binary.h"

// Main
int main(void) {
    printf("Assignment 4.2:\n");
/* Test: Read in the salaries and print in order.
    // Read salaries into a nice array of ints
    int n = countEntries(); // Checks how many entries are in the file.
    int salaries[n];
    long salarySum = readSalaries(salaries, n);
    if (salarySum <= 0) {
        printf("ERR: Could not read salaries. Please check file.");
        return -1;
    }

    // Sort the salaries
    bubble(salaries, n);
    printf("Company salaries in order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", salaries[i]);
    }
*/ // Test: Read in the salaries and print in order.
    int n = countEntries(); // Checks how many entries are in the file.
    int dob_arr[4][n];
    readAge(dob_arr[0], dob_arr[1], dob_arr[2], dob_arr[3], n);
    for (int i = 0; i < n; i++) {
        printf("Employee %d\tDOB is:\t", dob_arr[0][i]);
        printf("%.2d/%.2d/%.2d\n",
                dob_arr[1][i],
                dob_arr[2][i],
                dob_arr[3][i]
        );
    }
    int startDate_arr[4][n];
    readStartDate(startDate_arr[0],
            startDate_arr[1],
            startDate_arr[2],
            startDate_arr[3],
        n
    );
    for (int i = 0; i < n; i++) {
        printf("Employee %d\tStart Date is:\t", startDate_arr[0][i]);
        printf("%.2d/%.2d/%.2d\n",
                startDate_arr[1][i],
                startDate_arr[2][i],
                startDate_arr[3][i]
        );
    }

    return 0;
}