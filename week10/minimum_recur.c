// Using an iterative approach, implement a function minimum which is
// given a linked list struct node *head, returns the minimum of the 
//linked list as an integer.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

void print(struct node *head);
struct node *strings_to_list(int len, char *strings[]);
int minimum(struct node *head);


int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    int min = minimum(head);

    print(head);
    printf("min is %d\n", min);

    // hasn't freed the whole list yet. Will have error when run
    // --leak-check although list will be less
    return 0;
}

int minimum(struct node *head) {
    assert(head != NULL);
    if (head->next == NULL) {
        return head->data;
    }
    int next_min = minimum(head->next);
    if (head->data > next_min) {
        return next_min;
    } else {
        return head->data;
    }
}




//  print a linked list in this format:
// 17 -> 34 -> 51 -> 68 -> X
void print(struct node *head) {
    struct node *n = head;
    while (n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("X\n");
}


// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
    }
    return head;
}