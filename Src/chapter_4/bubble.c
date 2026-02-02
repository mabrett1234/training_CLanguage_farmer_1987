/*bubble.c*/
// Example 4.1
// Demonstrates use of for loops.
// Note {}, a code block, restricts the scope
// of variables, with variables initialised in code block
// limited to there:
    // scope of i is lines 11:23
    // scope of j is lines 14:22
    // scope of k is lines 17:19

// Includes
#include "chapter_4/bubble.h"

void bubble(int a[], int n) {
    int i = 0;
    for (i = n; i >0; i --) {
        int j = 0;
        for (j = 0; j < i; j++) {
            if (a[j] > a[j+1]) {
                int k = a[j];
                a[j] = a[j+1];
                a[j+1] = k;
            }
        }
    }
}