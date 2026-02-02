/*binary.c*/
// Example 4.11
// Returns binary search within ordered array of integers
// If value is found, returns index.
// Otherwise, returns -1.
// Note: array subscripts [sic] always start from 0.
// Return statement more elegant than using break or setting a flag.
// Both alt. options require a test after the while statement.
// Also allows for local definition of variable middle.

// Includes
#include "chapter_4/binary.h"

// Function definition
int binary(int a[], int n, int k) {
    int low = 0;
    int high = n;
    while (low <= high) {
        int middle = (low + high) / 2;
        if (a[middle] == k) return middle;
        if (a[middle] < k) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }
    return -1; // k was not found.
}