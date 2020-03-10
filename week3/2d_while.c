// Demonstrating how nested loop works
// 
// Example:
//
// Size: 3
// (0, 0) (0, 1) (0, 2)
// (1, 0) (1, 1) (1, 2)
// (2, 0) (2, 1) (2, 2)
// 
// Made by Alvin Fujito
// Date: March 2020
// Contact: a.fujito@unsw.edu.au

#include <stdio.h>

int main (void) {

    int size;
    printf("Size: ");
    scanf("%d", &size);

    int row = 0;
    int col = 0;

    while (row < size) {
        col = 0;
        while (col < size) {
            printf("(%d, %d) ", row, col);
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}

