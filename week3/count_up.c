// WWrite a C program count_up.c which reads an integer n and then prints the
// integers 1..n, one per line.
// 16th June 2020
// Written by T13A

#include <stdio.h>

// removed the limit as soon as i removed it in the code because then it would
// reduce the chances of me confusing someone else reading my code

int main (void) {

    // here 0 can be #define'd
    
    // why do we use 0? 0 < 1 which is our start. 
    // why do we even give it a value? it's good practice. what happens if we
    // try to give scanf something that's not an integer when it's expecting one?
    // let's remove the 0 and try again
    int finish = 0;
    printf("Enter finish: ");
    scanf("%d", &finish);

    int i = 1;
    while (i <= finish) {
        printf("%d\n", i);
        i++;
    }


    return 0;
}
