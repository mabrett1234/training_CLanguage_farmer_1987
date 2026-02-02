/*nibble.c*/
// Reads input as stream of bytes.
// Then swaps the nibbles with
// masking and shifting
// not sure if it works?

// Includes
#include <stdio.h>

// Main
int main(void) {
    char c;
    while (scanf("%c", &c) != EOF) {
        c = ((c & 0xf) << 4) + ((c & 0xf0) >> 4);
    }
}