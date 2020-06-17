// Write a C program range.c which reads integers n and m and then prints the
// integers n..m, one per line.
// 16th June 2020
// Written by T13A

#include <stdio.h>

// #define'd the divisor because it doesn't need to be a variable and
// using words gives more meaning than a random 7 in the code
#define DIVISOR 7

int main (void) {

    int start = 0;
    printf("Enter start: ");
    scanf("%d", &start);

    int finish = 0;
    printf("Enter finish: ");
    scanf("%d", &finish);

    // where does the if statement go?
    // a) around the while loop
    // b) around everything inside the while loop
    // c) other
    while (start <= finish) {
        if (start % DIVISOR == 0) {
            printf("%d\n", start);
        }
        start++;
    }

    return 0;
}
