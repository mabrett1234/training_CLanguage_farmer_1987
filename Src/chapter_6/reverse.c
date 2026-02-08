/*reverse.c*/
// Example 6.2

// Includes
#include "chapter_6/reverse.h"

// Function definitons
void reverse(char *s) {
    int j = strlen(s) - 1;
    for (int i = 0; i < j; i++) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        j--;
    }
}