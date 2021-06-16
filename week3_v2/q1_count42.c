// Write a C program count42.c which prints the integers 1..42, one per line
// Made by: Alvin Fujito (a.fujito@unsw.edu.au)
// Date: June 2020
// Note: see q2_maker.c

#include <stdio.h>

#define MAX_NUM 42

int main (void) {

    // 1. initialisation stage (counter = 1)
    // 2. On going stage (counter <= 42)
    // 3. ending stage (counter > 42)

    int counter = 1;
    while (counter <= MAX_NUM) {
        printf("%d\n", counter);
        counter = counter + 1;
    } 


    return 0;
}
