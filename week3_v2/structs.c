// code explaining structs

// code demo on structs
// Alvin Fujito
// z5248355
// Sept 2021

#include <stdio.h>

struct time {
    int hour;
    int minute;
    
    // could take 'a' or 'p'
    char time_of_day; 

};


int main (void) {

    struct time now;
    
    // initialisation
    now.hour = 3;  
    now.minute = 15;
    now.time_of_day = 'p';
                           
    printf("Hour is %d\n", now.hour);

    printf("%02d:%02d %cm\n", now.hour, now.minute, now.time_of_day);


    return 0;
}

