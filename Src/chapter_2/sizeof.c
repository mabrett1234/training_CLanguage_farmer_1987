/*sizeof.c*/
// Example 2.1
// Prints sizes in bytes of basic data types

// Includes
#include <stdio.h>

// Definitions

// Declarations

// Main
int main(void)
{
    printf("char\t%d\n", sizeof(char));
    printf("unsigned char\t%d\n",
            sizeof(unsigned char));
    printf("short\t%d\n", sizeof(short));
    printf("unsigned short\t%d\n",
            sizeof(unsigned short));
    printf("int\t%d\n", sizeof(int));
    printf("unsigned int\t%d\n", sizeof(unsigned));
    printf("long\t%d\n", sizeof(long));
    printf("unsigned long\t%d\n", sizeof(unsigned long));
    printf("float\t%d\n", sizeof(float));
    printf("double\t%d\n", sizeof(double));
    printf("long double\t%d\n", sizeof(long double));
}