// Functions
// input
// output
// the process between input and output

#include <stdio.h>

int is_even (int num);

void print_five(void);
int give_me_five (void);

int main (void) {
    
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);
    
    
    int result = is_even(num1);
    
    printf("status of num1 is %d\n", 3^5);
    
    
    print_five();
    int x = give_me_five();
    printf("%d\n", x);
}



// Create a function called is_even which takes in an integer and 
// returns 1 if it is an even number, and 0 if it is not.
int is_even (int num) {

    int return_value = 0;
    if (num % 2 == 0) {
        return_value = 1;
    } else {
        return_value = 0;
    }
    return return_value;
}

void print_five(void) {

    printf("five!\n");
    return;
}

int give_me_five (void) {

    return 5;

}


















