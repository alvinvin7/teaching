// Write a C program range.c which reads integers n and m and then prints the
// integers n..m, one per line.
// 16th June 2020
// Written by T13A

#include <stdio.h>

// removed DIVISOR as soon as didn't need it

int main (void) {

    int start = 0;
    printf("Enter start: ");
    scanf("%d", &start);

    int finish = 0;
    printf("Enter finish: ");
    scanf("%d", &finish);

    // copy and paste the code?
    int divisor = 0;
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    while (start <= finish) {
        if (start % divisor == 0) {
            printf("%d\n", start);
        }
        start++;
    }

    return 0;
}
