// Fills up Frankie's data.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 20

struct student {
    char name [MAX_LENGTH];
    int zid;
    double ass1_mark;

};

struct student *create_student(char new_name[MAX_LENGTH], int new_zid, 
                                                  double new_ass1_mark);

void fill_zid (struct student *new_student, int new_zid);


int main (void) {

    struct student *new_student = malloc(sizeof(struct student));
    
    strcpy(new_student->name, "Chicken");
    new_student->zid = 600000;
    new_student->ass1_mark = 70.2;
    
    fill_zid(new_student, 5252525);
    printf("Chicken's zid is %d\n", new_student->zid);

    free(new_student);

}

void fill_zid (struct student *new_student, int new_zid) {
    new_student->zid = new_zid;

}























int main_1 (void) {


    struct student *chicken = create_student("Chicken", 5252525, 70.2);
    printf("Chicken's zid is %d\n", chicken->zid);

    return 0;
}

// fills the zid of a struct student called frankie
struct student *create_student(char new_name[MAX_LENGTH], int new_zid, 
                                                    double new_ass1_mark) {

    struct student *new_student = malloc(sizeof(struct student));
    
    
    
    strcpy(new_student->name, new_name);
    new_student->zid = new_zid;
    new_student->ass1_mark = new_ass1_mark;

    return new_student;
}
