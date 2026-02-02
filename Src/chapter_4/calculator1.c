/*calculator1.c*/
// Example 4.3
// Emulates a simple calculator.
// Expressions are input in infixed notation.
// No operator precedence.
// Makes use of case statements

// Includes
#include <stdio.h>

// Main


int main(void) {
    float ac;
    char operator;
    while (scanf("%f%c", &ac, &operator) != EOF) {
        while (operator != '=') {
            float operand;
            scanf("%f", &operand);
            switch (operator) {
                case '+':
                    ac+= operand;
                    break;
                case '-':
                    ac-= operand;
                    break;
                case '*':
                    ac*= operand;
                    break;
                case '/':
                    ac/= operand;
                    break;
                default:
                    break;
            } // switch (operator)
            scanf("%c", &operator);
        } // while (operator != '=')
        printf("%f\n", ac);
    } // while (scanf("%f%c", &ac, &operator) != EOF)
}