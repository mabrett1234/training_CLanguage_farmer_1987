/*assignment_4_2.c*/
// Assignment 4.2
// Print the employee number of the oldest person at NODDY Software corp.

// Includes
#include <stdio.h>
#include <stdlib.h>

#include "chapter_4/bubble.h"
#include "chapter_4/salary.h"
#include "chapter_4/binary.h"

// Definitions
#define N_ROW 4

// Function prototypes
int bubble_pattern(int * arr, int *pat, int n);

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
    int n = 0;
    n = countEntries(); // Checks how many entries are in the file.
    int dob_arr[N_ROW][n];

    readAge(dob_arr[0],
             dob_arr[1],
            dob_arr[2],
             dob_arr[3],
                  n
            );
    // DBUG
    /*
    for (int i = 0; i < n; i++) {
        printf("Employee %d\tDOB is:\t", dob_arr[0][i]);
        printf("%.2d/%.2d/%.2d\n",
               dob_arr[1][i],
               dob_arr[2][i],
               dob_arr[3][i]
        );
    }
    */
    int startDate_arr[N_ROW][n];
    readStartDate(startDate_arr[0],
                  startDate_arr[1],
                  startDate_arr[2],
                  startDate_arr[3],
                  n
    );
    // DBUG
    /*
    for (int i = 0; i < n; i++) {
        printf("Employee %d\tStart Date is:\t", startDate_arr[0][i]);
        printf("%.2d/%.2d/%.2d\n",
               startDate_arr[1][i],
               startDate_arr[2][i],
               startDate_arr[3][i]
        );
    }*/

    // Order the array
    // TODO: Make a function for this
    int tmp = 0;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            int swap = 0;
            for (int k = 3; k > 0; k--) {
                if (dob_arr[k][j] > dob_arr[k][j+1]) {
                    swap = 1;
                }
                if (dob_arr[k][j] != dob_arr[k][j+1]) {
                    break;
                }
            }

            if (swap == 1) {
                for (int k = 0; k < N_ROW; k++) {
                    tmp = dob_arr[k][j];
                    dob_arr[k][j] = dob_arr[k][j+1];
                    dob_arr[k][j+1] = tmp;
                }
            }
        }
    }

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            int swap = 0;
            for (int k = 3; k > 0; k--) {
                if (startDate_arr[k][j] > startDate_arr[k][j+1]) {
                    swap = 1;
                }
                if (startDate_arr[k][j] != startDate_arr[k][j+1]) {
                    break;
                }
            }

            if (swap == 1) {
                for (int k = 0; k < N_ROW; k++) {
                    tmp = startDate_arr[k][j];
                    startDate_arr[k][j] = startDate_arr[k][j+1];
                    startDate_arr[k][j+1] = tmp;
                }
            }
        }
    }

    printf("Oldest employee has reference number %d.\n", dob_arr[0][0]);
    printf("Earliest employee has reference number %d.\n",
            startDate_arr[0][0]);
    return 0;
}