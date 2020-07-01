#include <stdio.h>


// returns 1 if all elements of array nums are positive, otherwise returns 0.
int test_all_positive(int length, int nums[]);



int main (void) {
    int nums[100] = {3, -1, 4, 1, 5};
    if (test_all_positive(5, nums)) {
        printf("hey it's all positive\n");
    
    } else {
        printf("hey it's not all positive\n");
    
    }

    return 0;


}
// returns 1 if all elements of array nums are positive, otherwise returns 0.
int test_all_positive(int length, int nums[]) {
    int i = 0;
    int is_positive = 1;
    while (i < length) {
        if (nums[i] <= 0) {
            is_positive = 0;
        }
        i++;
    }

    return is_positive;
}