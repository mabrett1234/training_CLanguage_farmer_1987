/*for.c*/
// Example 4.5
// Implementing same h(n) computation as 4.4, 4.3
// Now using a for loop

// Includes
#include <stdio.h>

// Main
int main(void) {
    int n, i;
    float h = 0.0;
    scanf("%d", &n);
    printf("n = %d\n",n);
    printf("h(%d) =\t", n);
    for (i = 1; i <= n; i++) {
        h+= 1.0 / i;
    }
    printf("%f\n", h);


    return 0;
}