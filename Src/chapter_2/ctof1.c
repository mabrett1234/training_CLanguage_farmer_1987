/*ctof1.c*/
// Converts celsius to fahrenheit
// Illustrates use of cast operator

// Includes
#include <stdio.h>

// Definitions
#define LOW 0
#define HIGH    100
#define MUL_BY  1.8
#define ADD_IN  32.5

// Declarations

// Main
int main(void)
{
    int celsius;
    for (celsius = LOW; celsius <= HIGH; celsius++) {
        int fahrenheit = (int)(celsius * MUL_BY + ADD_IN);
        printf("%3d\t%3d\n", celsius, fahrenheit);
    }
}