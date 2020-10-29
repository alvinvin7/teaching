// Chars and strings

#include <stdio.h>


#define MAX_SIZE 100

int main (void) {

    char ch = 'A';
    
    printf("%c\n", ch);
    printf("%d\n", ch);
    
    // if (ch == 65)
    if (ch == 'A') {
        printf("ch is in fact A\n");
    }
    // ch >= 65 && ch <= 90
    if (ch >= 'A' && ch <= 'Z') {
        printf("ch is an uppercase letter\n");
    }
    
    char str[MAX_SIZE] = {'A', 'l', 'v', 'i', 'n'}; // str[0] = 'A', str[1] = 'l', ..., str[4] = 'n'
                                                   // str[5] = '\0'
    //int nums[MAX_SIZE] = {1, 2, 3, 4, 5}; //5th element to 99th element is initialised to 0
    
    printf("%s\n", str);
    
    
    char str1[MAX_SIZE];
    str1[0] = 'A'; // nums[0] = 5
    str1[1] = 'B';
    str1[2] = '\0';
    printf("%s\n", str1);
    
    
    
    char str2[MAX_SIZE] = "Alvin"; // equivalent to str   
    
    
    
    
    


}
