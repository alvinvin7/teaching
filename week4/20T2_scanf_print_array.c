//Q12. Edit the code written in the previous question so that the integers 
//scanned in are placed into an array called inputs of size 1000. 
//You can assume no more than 1000 numbers will be entered.



#include <stdio.h>


#define SIZE_MAX 1000


void array_print(int array_num[], int length);

int main (void) {


    int array[SIZE_MAX] = {0};
    int result = 1;
    int i = 0;
    while (result == 1) {
        result = scanf("%d", &array[i]);
        i++;
    }
    int length = i - 1;
    array_print(array, length);
    
/*
    int num1;
    
    int result = scanf("%d", &num1);
    
    while (result == 1) {
        
        printf("%d ", num1);
        result = scanf("%d", &num1);
        
    }
    printf("\n");
*/
    return 0;
}

void array_print(int array_num[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array_num[i]);
        
        i++;
    }
    printf("\n");

}