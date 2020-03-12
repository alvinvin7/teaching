// Made by Alvin Fujito
// March 2020

/*
It will first ask the user to mention the number of courses they had 
taken. Then, it will scan the appropriate number of grades. Finally, 
it will output the user’s WAM and the Average Grade Description 
(HD, D, C, P, or F). Assume that the maximum number of courses are 24
*/

// Important Note: Observe the comments above each function that
// I made. This is part of COMP1511's style guide. You can read 
// more about it in the course website.

#include <stdio.h>

#define MAX_NUM_COURSES 24

void scan_array(int array[], int num);
double calculate_wam(int grades[], int num_course);
void print_grade_description(double wam);

int main (void) {
    int num_course;
    printf("Number of courses have you taken so far: ");
    scanf("%d", &num_course);

    // Observe that I didn't initialise the array with num_course
    // as its size. This is due to the fact that array can't take
    // in a variable as its size. It has to be a constant.
    int grades[MAX_NUM_COURSES] = {0};
    scan_array(grades, num_course);

    double wam = calculate_wam(grades, num_course);
    printf("Your WAM is %lf\n", wam);

    print_grade_description(wam);

    return 0;
}

// scans an array from array[0] to array[num_course]
void scan_array(int array[], int num) {
    int i = 0;
    while (i < num) {
        scanf("%d", &array[i]);
        i++;
    }
}

// calculates wam by calculating the sum and dividing it by num_course
double calculate_wam(int grades[], int num_course) {
    int sum = 0;
    int i = 0;
    while (i < num_course) {
        sum = sum + grades[i];
        i++;
    }
    double wam = sum * (1.0) / num_course;
    return wam;
}

// prints the grade description based on wam (see unsw website)
// assumes wam is between 0 to 100. 
void print_grade_description(double wam) {
    printf("You have ");
    if (wam >= 85) {
        printf("HD");
    } else if (wam >= 75) {
        printf("DN");
    } else if (wam >= 65) {
        printf("CR");
    } else if (wam >= 50) {
        printf("PS");
    } else {
        printf("FL");
    }
    printf(" WAM!\n");
}