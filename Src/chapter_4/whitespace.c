/*whitespace.c*/
// Counts the amount of whitespace on the standard input.
// Blanks, newlines, tabs are counted separately.
// While loop body demonstrates chain of if statements.

// I've coded a few alternate implementations
// these have been contained in functions, with the 0th
// identical to the book source code

// Includes
#include <stdio.h>

// Definitions
# define BLANK      ' '
# define NEWLINE    '\n'
# define TAB        '\t'

// Used in alt. implementations
# define BLANK_ID   1
# define NEWLINE_ID 2
# define TAB_ID     3

// Declarations

// Function prototypes
void whitespace_0(void);

int checkType(char c);
void whitespace_1(void);

// Main
int main(void) {

    //whitespace_0();
    whitespace_1();
    return 0;
}

// Function definitions
void whitespace_0(void) {
    char c;
    int nb = 0;
    int nl = 0;
    int nt = 0;
    printf("Enter \'#\' to stop\n"); // Added this for ease of use.
    while (scanf("%c", &c) != EOF && c != '#') {
        if (c == BLANK) {
            nb++;
        } else if (c == NEWLINE) {
            nl++;
        } else if (c == TAB) {
            nt++;
        }
    }
    printf("Blanks\t%d\n", nb);
    printf("Newlines\t%d\n", nl);
    printf("Tabs\t%d\n", nt);
}

void whitespace_1(void) {
    char c = 'E';
    int count[3] = {0, 0, 0};
    printf("Enter \'#\' to stop\n"); // Added this for ease of use.
    while (scanf("%c", &c) != EOF && c != '#') {
        int type = checkType(c);
        if (type != 0) {
            count[type - 1]++;
        }
    }
    printf("Blanks\t%d\n", count[BLANK_ID - 1]);
    printf("Newlines\t%d\n", count[NEWLINE_ID - 1]);
    printf("Tabs\t%d\n", count[TAB_ID - 1]);
}

int checkType(char c) {
    if (c == BLANK) return BLANK_ID;
    if (c == NEWLINE) return NEWLINE_ID;
    if (c == TAB) return TAB_ID;
    return 0;
}