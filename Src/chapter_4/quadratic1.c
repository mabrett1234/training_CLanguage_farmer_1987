/*quadratic1.c*/
// Example 4.10
// This example uses a goto statement, typically considered harmful [32]
// Unconditional branch to labeled statement.
// Perhaps useful for relating C to assembly, but typically banned in most
// style guides.

// The program prints the roots of a quadratic equation.
// Note: obscure program logic because different cases handled by
// 'patching' the code.

/*[32]
 *Edsgar W. Dijkstra
 *"Go to Statement Considered Harmful"
 *Comm. ACM Vol. 11(3), pp 147-148 (March 1968)
 */


// Includes
# include <stdio.h>
# include <math.h>
# include "chapter_4/quadratic.h"

// Function definitions
void quadratic(double a, double b, double c) {
    double d = b*b - 4*a*c; // Calculate determinant
    double r1, r2;
    if (d == 0) goto EQUAL_ROOTS;
    if (d > 0) {
        REAL_ROOTS:
            if (a == 0) goto DEGENERATE_ROOTS;
        r1 = 0.5*(-b + sqrt(d)) / a;
        r2 = 0.5*(-b - sqrt(d)) / a;
        printf("Real roots\t");
        PRINT:
                printf("%f\t%f\n", r1, r2);
        DONE:
                return;
    }
    goto IMAGINARY_ROOTS;
DEGENERATE_ROOTS:
    printf("Degenerate roots\n");
    goto DONE;
IMAGINARY_ROOTS:
    if (a == 0) goto DEGENERATE_ROOTS;
    printf("Imaginary roots\n");
    goto DONE;
EQUAL_ROOTS:
    if (a == 0) goto DEGENERATE_ROOTS;
    r1 = r2 = -0.5*b/a;
    printf("Equal roots\n");
    goto PRINT;
}