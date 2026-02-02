/*perfect.c*/
// Example 4.7
// 'perfect' number is integer > 0 that equals sum of its divisors
// E.g. 1 + 2 + 3 = 6
// Other examples are 28, 496, 8128, 33550336
// 8589869056 is the next perfect number, but will return an error due to
// number being to big for integer representation
// This program reads in integer values (from standard input)
// then reports if input number is perfect or not.

// Demonstrates combo of selection statements and iteration statements
// if/else if/case/else and while/for/d

// Includes
#include <stdio.h>

// Main
int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int sum = 1;
        // printf("n = %d\n", n); // DBUG
        for (int divisor = 2; divisor <= n/2; divisor++) {
            if (n % divisor == 0) {
                sum += divisor;
                // printf("Divisor = %d, Sum = %d\n", divisor, sum); // DBUG
            }
        }
        printf(")\n%d is ", n);
        if (sum != n) {
            printf("not ");
        }
        printf("perfect\n");
    }
    return 0;
}