/*blanks.c*/
// Copies standard input to standard output
// Replaces sequence of 1 or more blanks with a single blank
// Could have used bitwise inclusive OR operator, but less economical
// As evaluates both subexpressions every time

// Includes
#include <stdio.h>

// Definitions
#define BLANK ' '

int main(void) {
    char c;
    char prev = !BLANK;
    while (scanf("%c", &c) != EOF) {
        if (c != BLANK || prev != BLANK) {
            printf("%c", c);
        }
        prev = c;
    }
}