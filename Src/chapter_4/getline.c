/*getline.c*/
// Example 4.8
// This function fetches next line from standard input
// into an array of char.
// The while statement handles two extremes:
//  1. Running out of space in the array
//  2. Encountering EOF
// Break terminates loop body naturally after reaching newline character

// Includes
#include <stdio.h>
#include "chapter_4/getline.h"

// Definitions
#define NEWLINE '\n'



// Function Definitions
int getLine(char *s, int max) {
    char c; // Declare char temporary variable
    char *t = s; // Move pointer to array to local variable.
    while (max > 0 && scanf("%c", &c) != EOF) {
        max--;
        *s++ = c; // Increment pointer
        if (c == NEWLINE) {
            break;
        }
    }
    *s = '\0';
    return (s-t);
}