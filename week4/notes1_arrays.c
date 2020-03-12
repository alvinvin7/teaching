#include <stdio.h>

// Made by Alvin Fujito
// March 2020

/* Arrays

We learned what a variable is. Array is basically a collection of 
variables of the same type. 

So, what are the main components that you need when declaring an 
array in C?
1. Type
2. Name
3. Size
4. Whether or not they are initialised

Example:*/
int grades[10] = {0};
/*
    _________________________________________
    | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    -----------------------------------------
               Diagram 4.2: grades
*/

/*In English, this means I have declared an array of integers called
grades that is of size 10. I then declare all of the variables
inside the array to be 0.

However, the following does not mean we declared an array of 1s:*/
int not_all_ones[10] = {1};
/*
    _________________________________________
    | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
    -----------------------------------------
            Diagram 4.3: not_all_ones
*/

/*The array not_all_ones only contain a 1 in its first index, namely
not_all_ones[0]. 

Hence, */
int pi_array[10] = {3, 1, 4, 1, 5}; // (idk the rest lol)
/*            
    _________________________________________
    | 3 | 1 | 4 | 1 | 5 | 0 | 0 | 0 | 0 | 0 |
    -----------------------------------------
              Diagram 4.4: pi_array
*/

/*just shows that:

pi_array[0] = 3;
pi_array[1] = 1;
pi_array[2] = 4;
pi_array[3] = 1;
pi_array[4] = 5;

*/

/*If you haven't realised already, we start indexing array from 0, 
not 1. Hence, you can probably guess that pi_array[10] just 
doesn't exist since pi_array has a maximum index of 9.*/

/* So how can I see an array in practice? Say, I have 10 employees
and I want to record how many hours they work in the past week. */
#define EMPLOYEE_SIZE 10

int main_stage_one(void) {
    printf("Enter employee hours: ");
    //declaring array of size 10 to put in the hours
    int employee_hours[EMPLOYEE_SIZE] = {0};

    //recording 10 employees' hours
    int i = 0;
    while (i < EMPLOYEE_SIZE) {
        // Observe that i changes from 0 to 9.
        // This means that it will scan 10 times
        // and putting them into employee_hours[0]
        // to employee_hours[9]
        scanf("%d", &employee_hours[i]);
        i++;
    }
    return 0;
}

/* Suppose now we want to find the average number of hours that
the employees work. To know that, we need to sum all the hours
that all the employees work and divide with the number of employee.
Continuing our main function: */

int main(void) {
    printf("Enter employee hours: ");
    //declaring array of size 10 to put in the hours
    int employee_hours[EMPLOYEE_SIZE] = {0};

    //recording the employees' hours
    int i = 0;
    while (i < EMPLOYEE_SIZE) {
        scanf("%d", &employee_hours[i]);
        i++;
    }   

    //finding average. We first need to find the sum
    int sum = 0;
    i = 0;
    while (i < EMPLOYEE_SIZE) {
        //sum (right) = employee_hours[0]+...+employee_hours[i-1];
        sum = sum + employee_hours[i];
        i++;
    }
    double average = sum * (1.0) / EMPLOYEE_SIZE;
    printf("The average number of hours is %lf\n", average);
    
    return 0;
}