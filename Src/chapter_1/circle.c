/*circle.c*/
// Example 1.1

// Includes
#include <stdio.h>

// Definitions
#define PI  3.14159265

// Declarations
int radius;

// Main
int main(void)
{
    // Read radius from terminal and print area
    while (scanf("%d",&radius) != EOF) {
        double area = PI * radius * radius;
        printf("%f\n", area);
    }
}
