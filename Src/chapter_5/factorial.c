/*factorial.c*/
// Example 5.5

// Includes
#include <stdio.h>

// Function prototypes
int factorial(int n);

// Main
int main(void) {
    int i;
    while (scanf("%d", &i) != EOF) {
        printf("%d\n", factorial(i));
    }
}

// Function Definitions
int factorial(int n) {
    if (n == 0) return 1;       // base case
    return n * factorial(n-1);  // recursive case
}