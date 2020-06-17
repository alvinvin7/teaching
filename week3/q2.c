// Write a C program count42.c which prints the integers 1..42, one per line
// Made by: Alvin Fujito (a.fujito@unsw.edu.au)
// Date: June 2020
// Note: see q2_maker.c

#include <stdio.h>

#define MAX_NUM 42

int main (void) {

    int i = 1;
    while (i <= MAX_NUM) {
        printf("%d\n", i);

        i = i + 1;
        
    }
    return 0;
}
/*
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    printf("11\n");
    printf("12\n");
    printf("13\n");
    printf("14\n");
    printf("15\n");
    printf("16\n");
    printf("17\n");
    printf("18\n");
    printf("19\n");
    printf("20\n");
    printf("21\n");
    printf("22\n");
    printf("23\n");
    printf("24\n");
    printf("25\n");
    printf("26\n");
    printf("27\n");
    printf("28\n");
    printf("29\n");
    printf("30\n");
    printf("31\n");
    printf("32\n");
    printf("33\n");
    printf("34\n");
    printf("35\n");
    printf("36\n");
    printf("37\n");
    printf("38\n");
    printf("39\n");
    printf("40\n");
    printf("41\n");
    printf("42\n");

    return 0;
}
*/