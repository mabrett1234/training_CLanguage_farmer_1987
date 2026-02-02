//
// Created by ddani on 2/02/2026.
//

#ifndef BOOK_FARMER_1987_SALARY_H
#define BOOK_FARMER_1987_SALARY_H

// Structs
typedef struct {
    int d;
    int m;
    int y;
} Date;

// Function prototypes
int countEntries(void);

long int readSalaries(int *arr, int n);

void printStats(int* arr, int n, long int sum);

int readAge(int* ref_arr,int* d_arr, int* m_arr, int *y_arr, int n);

int readStartDate(int* ref_arr, int* d_arr, int* m_arr, int *y_arr,  int n);

#endif //BOOK_FARMER_1987_SALARY_H