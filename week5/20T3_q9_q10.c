// Alvin


#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main (void) {

    int x = 3;
    int y = 2;
    int result;
    
    sum_nums(x, y, &result);
    printf("sum is %d\n", result);
    
    printf("location of x is %p\n", &x);
    printf("location of y is %p\n", &y);
    printf("location of the bigger number is %p\n", max(&x,&y));
    
    return 0;
}
// Write an int *function which returns the address of the greater 
// of two integers passed by reference.
int *max(int *a, int *b) {
    // a is of type (int *) 
    // *a is of type (int)
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}


// Write a void function which places the sum of two numbers inside a 
// variable passed in by reference.
void sum_nums(int a, int b, int *sum) {

    //sum is of (int *) type
    //*sum is of (int) type
    
    *sum = a + b;

}
