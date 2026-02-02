/*salary.c*/
// Assignment 3.2
// Modify program for Assignment 2.2 so that it includes:
// a) minimum salary
// b) maximum salary
// c) median salary

// Code description
// Chose to implement a sort and arrays.
// More memory and comp. expensive, but highly readable.
// A less adaptable implementation could probs be done using only one loop
// And perhaps a median of medians recursive function.
// Could reduce code length by half

// Includes
#include <stdio.h>

// Definitions

// Declarations

// Function prototypes
long int readSalaries(int *arr, int n);
int countEntries(void);
int sort(int* arr, int n);
void printStats(int* arr, int n, long int sum);

// Main
// Kept this <50 lines (style guide) and very abstracted.
int main(void) {
    int n = countEntries();                     // Count the number of entries (or number of employees)
    int salaries[n];                            // Initialise array of salary values
    long int sum = readSalaries(salaries, n);   // Read salaries from file into array
    sort(salaries, n);                          // Sort the salaries
    printStats(salaries, n, sum);               // Print out the statistics

    return 0;
}

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
    return n;
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

int sort(int* arr, int n) { // horrid, probably like O(n^2)
    // Simplest, bubble sort (although comp. expensive)
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[i]) {
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    /*DBUG
    printf("\nSorted:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\n", i, salaries[i]);
    }
    */
    return 0;
}

void printStats(int* arr, int n, long int sum) {
    printf("Salary statistics:\n");
    printf("\tAverage:\t$%d\n", (int)(sum / n));
    printf("\tMinimum:\t$%d\n", arr[0]);
    printf("\tMedian:\t\t$%d\n", arr[n / 2]);
    printf("\tMaximum:\t$%d\n", arr[n-1]);
}