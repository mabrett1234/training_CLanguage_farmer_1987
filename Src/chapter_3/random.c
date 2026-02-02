/*random.c*/
// Example 3.2
// Demonstrates how values are retained by static objects.
// Successive calls to random() generate a sequence of pseudo
// random numbers with a linear congruential method. ([28], pp. 9-10)
// The 'seed' variable is initialised once only.
// It retains its previous value between function calls

// [28] (Book references numbering)
// Donald E. Knuth
// The Art of Computer Programming (Volume 2 - Seminumerical Algorithms)
// Addison-Wesley Publishing Company, Reading, Massachusetts
// 1969

// Includes
#include <stdio.h>

// Definitions
#define INC 1
#define MOD 16384
#define MUL 125
#define BEG 17

// Declarations

// Function prototypes
long random(void);

// Main
int main(void) {
    for (int i = 0; i < 10; i++) {
        //printf("New value: seed = %ld\n", random()); // DBUG
        printf("%ld\n", random());
    }
    return 0;
}

// Function definitions
long random(void) {
    static long seed = BEG; // Note the use of static
    //printf("Initial value: seed = %ld\n", seed); // DBUG
    seed = (MUL*seed + INC) % MOD;
    return seed;
}