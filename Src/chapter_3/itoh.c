/*itoh.c*/
// Example 3.1
// Converts unsigned integer n
// into string of hex digits in s

// Makes use of registers for speed

// Includes
#include <stdio.h>

// Definitions

// Declarations

// Function prototypes
extern void reverse(char *s); // Defined in Example 6.2

void itoh(register unsigned n, char *s);

// Main
int main(void) {
    char s[16];
    for (int i = 0; i < 16; i++) {
        s[i] = '\0';
    }
    int n = 0;
    while (scanf("%d",&n) != EOF) {
        itoh(n,s);
        s[(n >> 4) + 1] = '\0';
        printf("%s\n", s);
    }
    return 0;
}

// Function definitions
void itoh(register unsigned n, char *s) {
    register char *t = s;
    do {
        register char h = n % 16;
        if (h <= 9) {
            *t++ = h + '0';
        } else {
            *t++ = h + 'a' - 10;
        }
    } while ((n /= 16) != 0);
}