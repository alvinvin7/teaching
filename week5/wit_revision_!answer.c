// Made by: Alvin Fujito
// Part 1 Q2 is taken from another source

// Part 1: If Statements

// 1. What is the output of the following program?
int main (void) {
    int age = 17;
    if (16 < age < 18) {
        printf("You're probably in High School!")
    } else if (age >= 18) {
        prinf("You're an adult!")
    } else {
        prinf("You're not an adult!")
    }
    return 0;
}
// a. ERROR
// b. You're probably in High School!
// c. You're an adult!
// d. You're not an adult!


// 2. Why do we use if statements?

// a. To express that we are certain our code works
// b. To make our lives more difficult
// c. To loop through code
// d. To execute different blocks of code for different conditions


// 3. What is the output of the following program?
int main (void) {
    int x = 3;
    if (!x) {
        printf("A");
    }
    if (x % 3) {
        printf("B");
    }
    if (x == 3 || x != 3) {
        printf("C");
    }
    if (x) {
        printf("D");
    }
    printf("\n");
    return 0;
}
// a. A
// b. AB
// c. C
// d. CD


// 4. What is the output of the following program?
int main (void) {
    int x = 3;
    if (!x) {
        printf("A");
    } else if (x % 3) {
        printf("B");
    } else if (x == 3 || x != 3) {
        printf("C");
    } else if (x) {
        printf("D");
    }
    printf("\n");
    return 0;
}
// a. A
// b. AB
// c. C
// D. CD

// 5. What is the output of the following program?
int main (void) {
    int x = 5;
    int y = 3;
    if (x / y > 1) {
        printf("A");
    } else if (x / y < 1) {
        printf("B");
    } else {
        printf("C");
    }
    printf("\n");
    return 0;
}
// a. A
// b. B
// c. C
// d. ERROR


// 6. What is the output of the following program?
int main (void) {
    int x = 5;
    double y = 3;
    if (x / y > 1) {
        printf("A");
    } else if (x / y < 1) {
        printf("B");
    } else {
        printf("C");
    }
    printf("\n");
    return 0;
}
// a. A
// b. B
// c. C
// d. ERROR



// Part 2: While loops

// 1. What is the output of the following code?
int main (void) {
    int x = 0;
    while (!x) {
        printf("A");
        x++;
    }
    printf("\n");
}
// a. A
// b. AA
// c. AAA
// d. ERROR (infinite loop)

// 2. What is the output of the following code?
int main (void) {
    int i = 0;
    while (i < 6) {
        if (i % 3 == 0) {
            printf("A");
        } 
        i++;
    }
    printf("\n");
    return 0;
}
// a. A
// b. AA
// c. AAA
// d. 42

// 3. What is the output of the following code?
int main (void) {
    int i = 0;
    int sum = 0;
    while (i < 5) {
        sum += i;
        i += 1;
    }
    printf("%d\n", sum);
}
// a. 5
// b. 10
// c. 15
// d. ERROR

// 4. What is the output of the following code?
int main (void) {
    int array[10] = {3, 1, 4, 1, 5};
    int i = 0;
    while (i < 10) {
        printf("%d", array[i]);
        i++;
    }
    printf("\n");
}
// a. 3.1415
// b. 31415
// c. 3141500000
// d. ERROR

// 5. What is the output of the following code?
int main(void) {
    int array[3][3] = {{0, 1, 2}, 
                       {3, 4, 5},
                       {6, 7, 8}};
    int i = 0;
    while (i < 3) {
        printf("%d", array[i][i]);
        i++;
    }
    printf("\n");
}
// a. 012
// b. 036
// c. 048
// d. ERROR

// 6. What is the output of the following code?
int main(void) {
    int array[3][3] = {{0, 1, 2}, 
                       {3, 4, 5},
                       {6, 7, 8}};   
    int i = 0;
    int j = 0;
    while (i < 3){
        while (j < 3) {
            printf("%d", array[i][j]);
            j++;
        }
        i++;
    }
    printf("\n");
}
// a. 012
// b. 012345
// c. 012345678
// d. ERROR
