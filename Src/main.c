#include <stdio.h>
#include <stdlib.h>
#include "chapter_4/quadratic.h"
#include "chapter_4/bubble.h"
#include "chapter_4/binary.h"

#define LEN 10

// Function Prototypes
void test_example_4_10(void);
void test_example_4_11(void);


int main(void) {
    printf("Hello, World!\n");
    //test_example_4_10();
    test_example_4_11();
    return 0;
}

/*
void test_example_4_10(void) {     // Example 4.10 Test
    quadratic(1, -3, 2);
}
*/

void test_example_4_11(void) {     // Example 4.11 Test
    int arr[LEN] = {0}; // Initialise an integer array
    printf("Unordered array:\n");
    for (int i = 0; i < LEN; i++) { // Fill array with random numbers 0-10
        arr[i] = rand() % 10; // PSEUDO RANDOM: Same each time
        printf("%d\t", arr[i]);
    }
    printf("\n");
    bubble(arr, LEN);
    printf("Ordered array:\n");
    for (int i = 0; i < LEN; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    int k = 3;
    printf("%d located at position %d", k, binary(arr, LEN, k));
}