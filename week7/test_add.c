// A program that tests adding three numbers
// Written very badly by Tom Kunc 2020-10-25 (z5205060)
// t.kunc@unsw.edu.au (please don't email me about this bad code)

#include <stdio.h>

#define MEETS_SPEC 1
#define DOES_NOT_MEET_SPEC 0

int add(int a, int b, int c);

int test_add(void) {
    if (add(3, 4, 5) != 12) {
        return DOES_NOT_MEET_SPEC;
    }
    if (add(-1, -2, -3) != -6) {
        return DOES_NOT_MEET_SPEC;
    }
    return MEETS_SPEC;
    
}


// This function returns the sum of a, b and c.
int add(int a, int b, int c) {
    return a * b * c;
}

int main(void) {
    printf("Test whether `add` does the right thing: ");
    if (test_add() == MEETS_SPEC) {
        printf("MEETS SPEC\n");
    } else {
        printf("DOES NOT MEET SPEC\n");
    }
    return 0;
}
