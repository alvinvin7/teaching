/** Week 7 - Characters and Strings **/

#include <stdio.h>

#define MAX_LENGTH 256

int main (void) {

    // What is the size of an int?
    int a;
    printf("The size of a is %zu\n", sizeof(a));
    printf("The size of an int is %zu\n", sizeof(int));

    
    // What is the size of a char?
    char b = 'A'; // char b = 65;
    printf("The size of b is %zu\n", sizeof(b));
    printf("The size of a char is %zu\n", sizeof(char));
    printf("b is %c and %d\n", b, b);

    // What does getchar() do? -> Just use English explanation
    // How do we use getchar()? -> Use man page "man getchar"
    
    // We commented this out because we were using fgets() and
    // didn't want getchar() to get in the way
    // int c = getchar();
    // printf("c is %c and %d\n", c, c);
    // printf("Using putchar!! ");
    // int check = putchar(c);
    // printf("Check is %d and %c\n", check, check);
    
    /** While loop removes capital letters from input **/
    // while (c != EOF) {
    //    if (!(c >= 'A' && c <= 'Z')) {
    //        putchar(c);
    //    } 
    //    c = getchar();
    // }
    
    // What does fgets do? -> Just use English explanation
    // How do we use fgets()? -> Use man page "man fgets"
    char line[MAX_LENGTH];

    // printf("Check is %p and %s\n", check, check);
    // printf("%s", line);
    /** While loop removes capital letters from input **/
    while (fgets(line, MAX_LENGTH, stdin) != NULL) {
        int i = 0;
        while (line[i] != '\0') {
            if (!(line[i] >= 'A' && line[i] <= 'Z')) {
                putchar(line[i]);
            }
            i++;
        }
        
        // printf("Check is %p and %s\n", check, check);
    }

    return 0;
}
