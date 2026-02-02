/*quadratic1.c*/
// Example 4.10
// This example uses a goto statement, typically considered harmful [32]
// Unconditional branch to labeled statement.
// Perhaps useful for relating C to assembly, but typically banned in most
// style guides.

// The program prints the roots of a quadratic equation.
// Note: obscure program logic because different cases handled by
// 'patching' the code.

// Includes
# include <stdio.h>
# include <math.h>

// Function prototypes
void quadratic(double a, double b, double c);

// Function definitions


