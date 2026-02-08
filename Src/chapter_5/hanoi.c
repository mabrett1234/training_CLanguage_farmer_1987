/*hanoi.c*/
// Example 5.6

// Includes
#include <stdio.h>

// Definitions
#define WORLD_END   64

typedef enum {LEFT, MIDDLE, RIGHT} pole;

// Function prototypes
void printPole(pole p);
void moveDisk(pole source, pole destination);
void move(int n, pole source, pole destination, pole other);

// Main
int main(void) {
    int total;
    scanf("%d", &total);
    move(total, LEFT, RIGHT, MIDDLE);
    if (total >= WORLD_END) {
        printf("World ends now\n");
    }
    return 0;
}

// Function definitions
void printPole(pole p) {
    switch (p) {
    case LEFT:
        printf("Left");
        break;
    case MIDDLE:
        printf("Middle");
        break;
    case RIGHT:
        printf("Right");
        break;
    }
}

void moveDisk(pole source, pole destination) {
    printPole(source);
    printf(" to ");
    printPole(destination);
    printf("\n");
}

void move(int n, pole source, pole destination, pole other) {
    if (n > 1) {
        move(n-1, source, other, destination);
    }
    moveDisk(source, destination);
    if (n > 1) {
        move(n-1, other, destination, source);
    }
}
