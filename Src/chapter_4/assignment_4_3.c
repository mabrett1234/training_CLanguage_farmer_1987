/*assignment_4_3.c*/
// a) Rewrite Example 4.10 to work the same but without goto statements.
// For solution of quadratics
// b) TODO: Write another function that calculates cubic roots.
// Suggests Cardan's solution for algorithm to use

// Includes
#include <stdio.h>
#include <math.h>

// Function Prototypes
void quadratic(double a, double b, double c);
void cubic(double a, double b, double c, double d);

// Main
int main(void) {
    quadratic(1.0, -5.0, 6.0);
    quadratic(1.0, -6.0, 9.0);
    quadratic(1.0, 1.0, 1.0);
    quadratic(0.0, 2.0, -9.0);
    return 0;
}

void quadratic(double a, double b, double c) {
    double d = b*b - 4*a*c; // Calculate determinant
    double r1, r2;
    if (a == 0) {
        printf("Degenerate roots\n");
        return;
    }
    if (d == 0) {
        r1 = r2 = -0.5*b/a;
        printf("Equal roots\n");
    } else if (d > 0) {
        r1 = 0.5*(-b + sqrt(d)) / a;
        r2 = 0.5*(-b - sqrt(d)) / a;
        printf("Real roots\t");
    } else {
        printf("Imaginary roots\n");
        return;
    }
    printf("%f\t%f\n", r1, r2);
}

void cubic(double a, double b, double c, double d) {

}