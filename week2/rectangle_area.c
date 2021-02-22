// Write a program rectangle_area.c that scans in 2 integers 
// which are the side-length of a rectangle, and then prints 
// the area of the rectangle. 
// By: Alvin Fujito
// Date: Feb 2021

#include <stdio.h>

int main (void) {

    int length, width;

    printf("Please scan the length of the rectangle: ");
    scanf("%d", &length);

    printf("Please scan the width of the rectangle: ");
    scanf("%d", &width);

    //printf("The area of the rectangle is %d", length*width);
    int area = length * width;
    printf("The area of the rectangle is %d", area);


    return 0;
}