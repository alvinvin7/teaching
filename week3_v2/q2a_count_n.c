// Write a C program countN.c which prints the integers 1..n, one 
// per line. n is a value that the user enters
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
        printf("%d\n", counter);
        counter = counter + 1;
    } 


    return 0;
}