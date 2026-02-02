/*normal.c*/
// Example 3.3
// Similar to random.c, just normalised.
// Still uses the static prefix so that the object is
// restricted to this file's scope.
// This means that the function random() and variable seed
// are not accessible to other files.
// Use case can be for privacy reasons, or to prevent
// multiple conflicting definitions of functions or variables
// when combing files, common in larger, modular projects.

// Includes
#include <stdio.h>

// Definitions
#define INC 1
#define MOD 16384
#define MUL 125
#define BEG 17

// Declarations
// Previously declared and initialised inside random() function.
static long seed = BEG;

// Function prototypes
static long random(void);
double normal(void);

// Main
int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%f\n",normal());
    }
    return 0;
}

// Function definitions
static long random(void) {
    // Initialisation is now done above (Declarations section)
    seed = (MUL*seed + INC) % MOD;
    return seed;
}

double normal(void) {
    // Casting the constant to a double.
    // Return is in double form, as we want a decimal number
    // between 0 and 1
    return (random())/(double)MOD;
}