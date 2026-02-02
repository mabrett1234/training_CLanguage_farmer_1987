/*hailstone.c*/
// Generates sequence of hailstone numbers.
// Illustrates multiplicative operators

// Includes
#include <stdio.h>

// Main
int main(void) {
    int n;
    scanf("%d", &n);
    while (n > 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d\n", n);
    }
}