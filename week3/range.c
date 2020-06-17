// Write a C program range.c which reads integers n and m and then prints the
// integers n..m, one per line.
// 16th June 2020
// Written by T13A

#include <stdio.h>

int main (void) {

    // can copy paste this code
    int start = 0;
    printf("Enter start: ");
    scanf("%d", &start);

    int finish = 0;
    printf("Enter finish: ");
    scanf("%d", &finish);

    // remember to change everything from i -> start
    while (start <= finish) {
        printf("%d\n", start);
        start++;
    }


    return 0;
}
