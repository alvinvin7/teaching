
// W3Q9
// Alvin Fujito

#include <stdio.h>

int main (void) {

    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int row = 1;

    
    while (row <= size) {           
        int col = 1;                          
        while (col <= size) {  
            if (col == row) {
                printf("*");
            } else { 
                printf("-");  
            
            }          
            col++;                  
        }
        printf("\n");
        row++;                     
    }
    return 0;
}