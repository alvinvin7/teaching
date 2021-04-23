// Implementation file for Stack demo

// see stack.h for function headers and documentation

// Marc Chee (cs1511@cse.unsw.edu.au), November 2020

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


// Struct governing the whole stack
// The head is considered the top of the stack
struct stack_internals {
    struct stack_node *head;

};

struct stack_node {
    int data;
    struct stack_node *next;
};

// Create an empty stack
Stack create_stack(void) {
    // Stack can be used in place of struct stack_internals *
    Stack new_stack = malloc(sizeof(struct stack_internals));
    new_stack->head = NULL;
 
    return new_stack;
}
//Free the given stack
void free_stack(Stack s) {
    struct stack_node *curr = s->head;
    while (curr != NULL) {
        struct stack_node *rem_node = curr;
        curr = curr->next;
        free(rem_node);
    }
    free(s);
}

// Add an item to the top of the stack
void stack_push(Stack s, int item) {
    if (item == 0) {
        return;
    }
    // create a new stack node and attach it to the current stack
    struct stack_node *new_node = malloc(sizeof(struct stack_node));
    new_node->data = item;
    new_node->next = s->head;
    
    // aim the stack's head at this new node
    s->head = new_node;
    
    stack_push(s, item - 1);

}

// Remove the top item from the stack and return its data
int stack_pop(Stack s) {
    // check whether the head exists
    if (s->head == NULL) {
        // there are no elements in this stack, end program
        printf("Attempted to pop an element from an empty stack.\n");
        exit(1);
    }
    
    // if we reach this point, there is at least 1 element in the stack
    int pop_data = s->head->data;
    struct stack_node *rem_node = s->head;
    s->head = rem_node->next;
    free(rem_node);

    
    return pop_data;
}

// returns the current size of the stack
int stack_size(Stack s) {
    int size = 0;
    struct stack_node *curr = s->head;
    while (curr != NULL) {
        curr = curr->next;
        size++;
    }

    return size;
}





