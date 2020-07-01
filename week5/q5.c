// Write a function that takes in a 2d array of ints and multiplies 
// every value in the array by a given int. 

#include <stdio.h>

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  
                                                            int scalar);


int main (void) {

    int a = 5;
    add_three(a);
    // a is still 5
    a = add_three(a);
    // a is now 8
    int nums[2][2] = {{1, 2}, {3, 4}};
    scalar_multiply (2, 2, nums, 5);
    // nums = {{5, 10}, {15, 20}};
    
}


/*  matrix
    [[2,3],
     [4,5]]--- 5  ---> [[10,15],[20,25]]
*/

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  
                                                                int scalar) {
                                                                
    int row = 0;

    
    while (row < rows) {
        int col = 0;
        while (col < columns) {
            
            matrix[row][col] = matrix[row][col] * scalar;
            
            col++;
        }
    
        row++;
    }                                                    
}

int add_three (int num) {
    return num + 3;

}