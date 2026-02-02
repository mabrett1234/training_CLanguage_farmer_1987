/*do.c*/
// Example 4.5
// An alternative computation of the h(n) function computed in
// Example 4.4 (while.c)
// Making use of a do loop here.
// This is a bad case to use do loop, as it is always executed once
// before the condition is evaluated.
// This can cause issues if the input value is zero.
// previous example returned h(0) = 0.0
// this example whill return h(0) = inf

// Includes
#include <stdio.h>

// Main
int main(void) {
    int n;
    float h = 0.0;
    scanf("%d", &n);
    printf("n = %d\n", n);

    printf("h(%d) =\t", n);
    do {
        h += 1.0 / n;
        n--;
    } while (n > 0);
    printf("%f\n", h);

    return 0;
}