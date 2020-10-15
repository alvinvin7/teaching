

// Enter instruction: 1 5
// 25
// Enter instruction: 2 3 4
// 81
// ctrl+d


#include <stdio.h>

#define        TRUE      1    
#define SQUARED_COMMAND  1
#define POWER_COMMAND     2



void print_squared_value(void);
void print_powered_value(void);
int to_the_power(int num1, int power);

int main (void) {

    int command;
    printf("Enter instruction: ");
    
    int can_scan_number = scanf("%d", &command);
    while (can_scan_number == TRUE) {
        if (command == SQUARED_COMMAND) {
        
            print_squared_value();
        } else if (command == POWER_COMMAND) {
        
            print_powered_value();
        }

        printf("Enter instruction: ");
        can_scan_number = scanf("%d", &command);
    }
    return 0;
}

// need to scan in a number x and will print x^2
void print_squared_value(void) {
    int num;
    scanf("%d", &num);
    int result = num * num;
    printf("%d\n", result);
}

// need to scan in 2 numbers x and y and will print x^y
void print_powered_value(void) {
    int num1, power;
    scanf("%d %d", &num1, &power);
    int result = to_the_power(num1, power);
    printf("%d\n", result);
}

int to_the_power(int num1, int power) {
    int result = 1;
    while (power > 0) {
        result = result * num1;
        power--;
    }
    return result;
}
