/*perfect.c*/
//Broken kinda
// Example 4.7
// 'perfect' number is integer > 0 that equals sum of its divisors
// E.g. 1 + 2 + 3 = 6
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
        int divisor;
        for (divisor = 2; divisor <= n/2; divisor++) {
            if (n % divisor == 0) {
                sum += divisor;
            }
            if (sum == n) {
                printf("%d is perfect\n", n);
            } else {
                printf("%d is not perfect\n", n);
            }
        }
    }
    return 0;
}