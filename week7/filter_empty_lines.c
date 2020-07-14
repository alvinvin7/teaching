// Write a program filter_empty_lines.c which reads lines from its input 
// and prints them only if they contain a non-white-space-character.
// In another words remove lines are empty or contain only white-space.
// The only functions you can use are fgets and printf.
// You can assume lines contain at most 4096 characters.
// You can assume there are only 3 white space characters, space, tab & new-line.

#define MAX_CHAR_LENGTH 4096
#define TRUE 1
#define FALSE 0

#include <stdio.h>

int is_not_just_white_space(char line[MAX_CHAR_LENGTH]);
int is_white_space(char c);

int main (void) {

    char line[MAX_CHAR_LENGTH];
    while (fgets(line, MAX_CHAR_LENGTH, stdin) != NULL) {
        if (is_not_just_white_space(line)) {
            printf("%s", line);
        }
    }

    return 0;
}

int is_not_just_white_space(char line[MAX_CHAR_LENGTH]) {
    int i = 0;
    while (line[i] != '\0') {
        if (is_white_space(line[i]) == FALSE) {

            return TRUE;
        }
        i++;
    }
    return FALSE;
}

int is_white_space(char c) {
    if (c == '\t' || c == '\n' || c == ' ') {
        return TRUE;
    } else {
        return FALSE;
    }
    
}




