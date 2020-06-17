// W3Q8
// Alvin Fujito


#include <stdio.h>

int main (void) {

    int input;
    printf("Please enter an integer: ");
    scanf("%d", &input);

    int i = 0;
    while (i < input) {
        printf("*\n");
        i++;
    }
    return 0;
}