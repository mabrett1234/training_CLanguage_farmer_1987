/*date1.h*/
// Example 3.4
// Illustrates declaration of derived type, struct date
// with a variable of that type, and
// a pointer to an object of that type

#ifndef BOOK_FARMER_1987_DATE1_H
#define BOOK_FARMER_1987_DATE1_H

#include <stdio.h>

struct date {
    short day;
    short month;
    short year;
} my_birthday = {10, 11, 1945},
*your_birthday = NULL;

#endif //BOOK_FARMER_1987_DATE1_H