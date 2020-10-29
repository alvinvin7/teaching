// argc and argv

#include <stdio.h>

int main (int argc, char *argv[]) {

    printf("%d\n", argc);

    printf("%s\n", argv[1]);
    
    printf("%c\n", argv[2][3]);
    
    int num = atoi(argv[3]);

}
