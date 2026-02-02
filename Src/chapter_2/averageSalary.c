/*averageSalary.c*/
/*
 *Assignment 2.2
 *Write a program that computes the average salary
 *of the employees at NODDY Software Corp
 *using provided dataset.
 */

// Includes
#include <stdio.h>

// Definitions

// Declarations

// Main
int main(void) {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        perror("Could not open file.");
        return 1;
    }

    int salary;
    long int sum = 0;
    int n = 0;
    while (fscanf(fp, "%*25c%d%*[^\n]*]%*c", &salary) != EOF){
        sum += salary;
        n++;
    }
    fclose(fp);

    salary = sum / n;
    printf("Average salary is $%d per annum", salary);

    return 0;
}