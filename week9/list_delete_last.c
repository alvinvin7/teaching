#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

void print(struct node *head);
struct node *strings_to_list(int len, char *strings[]);
struct node *delete_last(struct node *head);
struct node *find_last_node(struct node *list);
struct node *find_second_last(struct node *head);

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    head = delete_last(head);

    print(head);

    // hasn't freed the whole list yet. Will have error when run
    // --leak-check although list will be less
    return 0;
}

// Implement a function delete_last which 
// deletes the last node from a given list.

// delete_last should call free to free the memory of the node it deletes.
// delete_last should return a pointer to the head of the list.
struct node *delete_last(struct node *head) {

    // when list is empty
    if (head == NULL) {
        return NULL;
    } 
    // when list has one node
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    // case: list is not empty, list has more than 1 node.
    
    struct node *second_last = find_second_last(head);
    
    
    
    struct node *to_be_deleted = find_last_node(head);
    free(to_be_deleted);
    
    second_last->next = NULL;
    
    
    return head;

}
// finds second node from last, assumes node has more than 1 node
struct node *find_second_last(struct node *head) {
    struct node *curr = head;
    while(curr->next->next != NULL) {
        curr = curr->next;
    }
    return curr;
}

// given a list, find its last node
struct node *find_last_node(struct node *list) {
    struct node *curr = list;
    if (curr == NULL) {
        return NULL;
    }
    
    while (curr->next != NULL) {
        curr = curr->next;
    }
    // here we know that curr->next == NULL
    return curr;
    

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
