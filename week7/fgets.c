// fgets

#include <stdio.h>


#define MAX_SIZE 100

int main (void) {
    /*
    int c = getchar();
    while (c != EOF) {
        if (c >= '0' && c <='9') {
            putchar(c);
        }
        c = getchar();
    }*/

    char line[MAX_SIZE];
    while(fgets(line, MAX_SIZE, stdin) != NULL) {
        printf("line is %s", line);
    
    }
    
    

}
