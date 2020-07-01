// Write a void function which returns the address of the 
// greater of two integers passed by reference.
#include <stdio.h>

int *max(int *a, int *b);
int max_no_pointer (int a, int b);

int main (void) {

    int num1 = 3;
    int num2 = 4;
    int maximum = max_no_pointer(num1, num2);
    printf("max between num1 and num2 is %d\n", maximum);
    
    
    int *a = &num1;
    int *b = &num2;
    int *max_pointer = max (a, b);
    printf("max between num1 and num2 is %d\n", *max_pointer);

}

int max_no_pointer (int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int *max(int *a, int *b) {
    // a is a pointer (or of type int *)
    // *a is of type int
    
    // *b is of type int
    
    if (*a > *b) {
        return a;
    } else {
        return b;
    
    }

}
