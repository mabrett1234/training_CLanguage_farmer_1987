/*circumference.c*/
// Assignment 1.2
// Modify circle.c to print the circumference.

// Includes
#include <stdio.h>

// Defines
#define PI 3.14159265

// Declarations
int radius;

int main(void)
{
    while (scanf("%d", &radius) != EOF) {
        double circumference = 2 * PI * radius;
        printf("%f\n", circumference);
    }
}