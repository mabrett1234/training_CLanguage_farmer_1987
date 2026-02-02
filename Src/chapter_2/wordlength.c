/*wordlength.c*/
// Computes number of bits in unsigned integer.
/*Note that
    *w>>= 1
 *is equivalent to
    *w = w >> 1
*/

// Includes
#include <stdio.h>

// Main
int main(void) {
    int n = 1;
    unsigned w = ~0; // w is now all ones
    while ((w >>= 1) > 0) { // Shift until all ones are gone.
        n++;
    }
    printf("Wordlength is %d\n", n);
}