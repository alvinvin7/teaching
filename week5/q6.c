// Alvin


#include <stdio.h>



int main (void) {


    int num = 5;
    // address of num can be denoted with &num
    
    //int x;
    //scanf("%d", &x); //storing in the location of x (0xblabla)
    
    
    int *alvinsHouse; // alvinsHouse is a pointer, which is a location
    // alvinsHouse = 4; illegal play, setting pointer to be a number? what?
    
    alvinsHouse = &num; //alvin's house is num's house
    
    //alvinsHouse is of type (int *)
    //*alvinsHouse is of type int
    
    *alvinsHouse = 3; //alvin's house contains 3
    
    // num is 3
    printf("%d\n", num);
    
    return 0;
}
