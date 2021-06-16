// Write a program that reads in an integer and  printing out a 
// diagonal as shown
// Example:
// ./diagonal
// Please enter an integer: 5
// *----
// -*---
// --*--
// ---*-
// ----*

// Made by: Alvin Fujito (a.fujito@unsw.edu.au)
// Date: June 2021

#include <stdio.h>

int main (void) {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int row = 1;
    while (row <= input) {
        int col = 1;
        while (col <= input) {
            if (row == col) {
                printf("*");
            } else {
                printf("-");
            }
            col = col + 1;
        }
        printf("\n");
        row++;
    }

    return 0;
}