// getchar putchar

#include <stdio.h>


int main (void) {

    int ch = getchar(); // char ranges from 0 to 255
    while (ch != EOF) {
        
        putchar(ch);
        
        
        ch = getchar();
    }


}
