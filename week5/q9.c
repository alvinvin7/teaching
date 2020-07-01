// Write a void function which places the sum of two numbers inside 
// a variable passed in by reference. It should have the following prototype:

#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int sum_no_pointer(int a, int b);

int main (void) {

    int num1 = 3;
    int num2 = 5;
    int sum1 = sum_no_pointer(num1, num2);
    printf("stage 1: sum1 is equal to %d\n", sum1);
    
    
    int num3 = 4;
    int num4 = 6;
    int location;
    int *sum = &location;
    sum_nums(num3, num4, sum);
    printf("stage2: sum is equal to %d\n", *sum);
    
    
    int sum2;
    sum_nums(num1, num2, &sum2);
    printf("stage3: sum is equal to %d\n", sum2);

    return 0;
}

int sum_no_pointer(int a, int b) {

    return a + b;

}


void sum_nums(int a, int b, int *sum) {

    *sum = a+b;
}