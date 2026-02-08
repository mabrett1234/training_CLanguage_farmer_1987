/*reverse2.c*/
// Example 5.2

// Includes
# include <stdio.h>
# include "chapter_4/getline.h"
# include "chapter_6/reverse.h"

// Definitions
#define MAX_LINE    200

// Main
int main(void) {
    char line[MAX_LINE];
    while (getLine(line, MAX_LINE) > 0) {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}