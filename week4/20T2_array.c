// Array
// Same type
// The length is set from the beginning

#include <stdio.h>
#define MAX_LENGTH 100

void array_print(int array_num[], int length);

int main (void) {

    //int zeroes[7] = {0};

/*
    ===========================
    |0 | 5 | 0 | 0 | 0 | 0 | 0 |
    ===========================
*/

    //zeroes[1] = 5;
    

    //int array[7] = {1, 2, 3};

/*
    ===========================
    |1 | 2 | 3 | 0 | 0 | 0 | 0 |
    ===========================
*/    
    int size;
    printf("please enter a size: ");
    scanf("%d", &size);

    printf("please enter a number: ");
    int num;
    scanf("%d", &num);
    
    

    int array_num[MAX_LENGTH] = {0};
    int i = 0;
    while (i < size) {
        array_num[i] = num;
        i++;
    }   
     
    
/*
    ===================================
    |num |num |num |num |num |num |num | 0 | 0 | ...|
    ====================================
*/   

    array_print(array_num, size);
     
}

void array_print(int array_num[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array_num[i]);
        
        i++;
    }
    printf("\n");

}


