

// Enter instruction: 1 5
// 25
// Enter instruction: 2 3 4
// 81
// ctrl+d


#include <stdio.h>



int main (void) {

    int command;
    printf("Enter instruction: ");
    
    int can_scan_number = scanf("%d", &command);
    while (can_scan_number == 1) {
        if (command == 1) {
            int num;
            scanf("%d", &num);
            int result = num * num;
            printf("%d\n", result);
        } else if (command == 2) {
            int num1, num2;
            scanf("%d %d", &num1, &num2);
            int result = 1;
            while (num2 > 0) {
                result = result * num1;
                num2--;
            }
            printf("%d\n", result);
            
        }

        printf("Enter instruction: ");
        can_scan_number = scanf("%d", &command);
    }
    return 0;
}