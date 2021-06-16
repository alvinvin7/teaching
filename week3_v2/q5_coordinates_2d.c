// Write a program that reads in an integer and prints out  
// coordinate s
// Example:
// ./q5
// Please enter an integer: 3
// (0, 0) (0, 1) (0, 2)
// (1, 0) (1, 1) (1, 2)
// (2, 0) (2, 1) (2, 2)

// Made by: Alvin Fujito (a.fujito@unsw.edu.au)
// Date: June 2021

#include <stdio.h>

int main (void) {

    printf("Enter a number: ");
    int input;
    scanf("%d", &input);

    int row = 0;
    while (row < input) {
        int col = 0;
        while (col < input) {
            printf("(r%d, c%d) ", row, col);
            col = col + 1;
        }
        printf("\n");
        row++;
    }

    return 0;
}