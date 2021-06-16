// Write a program that reads in an integer and prints out that many
// asterisks, each on a new line.
// Example:
// ./asterisks
// Please enter an integer: 5
// *
// *
// *
// *
// *

// Made by: Alvin Fujito (a.fujito@unsw.edu.au)
// Date: June 2021

#include <stdio.h>

int main (void) {

    printf("Enter a number: ");
    
    int input;
    scanf("%d", &input);
    
    // 1. initialisation stage (counter = 1)
    // 2. On going stage (counter <= input)
    // 3. ending stage (counter > input)
    int counter = 1;
    while (counter <= input) {
        printf("*\n");
        counter = counter + 1;
    } 

    return 0;
}