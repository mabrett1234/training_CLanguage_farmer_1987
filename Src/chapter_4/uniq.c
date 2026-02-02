/*uniq.c*/
// Example 4.9
// Copies standard input to standard output
// but only prints first occurence from each group of adjacent identical lines.
// Simple version of UNIX utility uniq. Getline() defined in Example 4.8. [sic]

// Include
#include <stdio.h>
#include <string.h>
#include "chapter_4/getline.h"

// Definitions
#define MAX_LINE 200

// Function prototypes
extern int getLine(char *s, int max);

// Main
int main(void) {
    char line[MAX_LINE];
    char prev[MAX_LINE];
    prev[0] = '\0';

    while (getLine(line, MAX_LINE) > 0) {
        if (strcmp(line, prev) == 0) {
            continue;
        }
        printf("%s", line);
        strcpy(prev, line);
    }
    return 0;
}