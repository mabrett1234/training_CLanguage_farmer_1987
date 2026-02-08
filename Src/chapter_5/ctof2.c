/*ctof2.c*/
// Demonstrating a simple function

// Includes
#include <stdio.h>

// Definitions
#define LOW     0
#define HIGH    100
#define MUL_BY  1.8
#define ADD_IN  32.5

// Function Prototypes
int ctof(int c);

// Main
int main(void) {
    for (int celsius = LOW; celsius <= HIGH; celsius++) {
        printf("%3d\t%3d\n", celsius, ctof(celsius));
    }
    return 0;
}

// Function definitions
int ctof(int c) {
    return (int)(c*MUL_BY+ADD_IN);
}