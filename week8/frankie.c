// Fills up Frankie's data.

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 20

struct student {
    char name [MAX_LENGTH];
    int zid;
    double ass1_mark;

};

void fill_zid(struct student frankie, int new_zid);


int main (void) {
    struct student frankie;

    strcpy(frankie.name, "Frankie");  
    frankie.zid = 6000000;

    fill_zid(frankie, 5151515);

    frankie.ass1_mark = 60.2;
    
    printf("Frankie's zid is %d\n", frankie.zid);
    

    return 0;
}

// fills the zid of a struct student called frankie
void fill_zid(struct student frankie, int new_zid) {

    frankie.zid = new_zid;

}
