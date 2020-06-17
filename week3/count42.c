// Write a C program count42.c which prints the integers 1..42, one per line.
// 16th June 2020
// Written by T13A

#include <stdio.h>

// #define the last number because it is a constant!! 
// Also 42 has no meaning by itself!
#define LIMIT 42

int main (void) {

    // an improvement on this code would be 1 being #define'd
    int i = 1;
    while (i <= LIMIT) {
        printf("%d\n", i);
        i++;
    }


    return 0;
}