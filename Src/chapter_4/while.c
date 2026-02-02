/*while.c*/
// Example 4.4
// This program computes value of the function:
//  h(n) = (1/1) + (1/2) + (1/3) + ... + (1/n)
// h(n) = \Sigma_ {k = 1} ^{n} {1/k}
/*
        n
   |--------|
    \
     \
      >       (1 / k)
     /
    /
   |_______|
     k = 1

 */
// Includes
#include <stdio.h>

// Main
int main (void) {
    int n;
    float h = 0.0;
    scanf("%d", &n);
    printf("n = %d\n", n);

    printf("h(%d) =\t", n); // print before value of n is changed
    while (n > 0) {
         h += 1.0 / n;
         n --;
    }
    printf("%f\n", h);
    return 0;
}