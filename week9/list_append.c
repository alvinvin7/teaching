#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

void print(struct node *head);
struct node *strings_to_list(int len, char *strings[]);
struct node *list_append(struct node *list1, struct node *list2);
struct node *scans_to_list(int num);
struct node *get_last_node(struct node *head);
struct node *find_last_node(struct node *list);

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head1 = strings_to_list(argc - 1, &argv[1]);

    int num;
    printf("insert the number of nodes in the second list: ");
    scanf("%d", &num);
    struct node *head2 = scans_to_list(num);
    
    
    struct node *appended_list = list_append(head1, head2);

    print(appended_list);

    return 0;
}

//  Implement a function list_append which appends its second 
// argument to its first. Treat both inputs as if they are lists 
// and may have more than one node.

//list_append should not create (malloc) any new list elements.
//list_append should just change the appropriate next field in the first list.
struct node *list_append(struct node *list1, struct node *list2) {
    // find the last node of list1, last1
    // last1->next = list2
    // need to ensure that last1 isn't null
    //
    struct node *last1 = find_last_node(list1);
    if (last1 == NULL) { //list1 is empty, hence no last node of list1
        return list2;
    } else {
        last1->next = list2;
    }
    

    return list1;

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




struct node *scans_to_list(int num) {
    struct node *head = NULL;
    int i = 0;
    while (i < num) {
        int num_to_be_added;
        scanf("%d", &num_to_be_added);
        struct node *n = malloc(sizeof (struct node));
        n->data = num_to_be_added;
        n->next = NULL;
        assert(n != NULL);
        if (head == NULL) {
            head = n;
        } else {
            struct node *last_node = get_last_node(head);
            last_node->next = n;
        }
        i++;
    }
    return head;
}

struct node *get_last_node(struct node *head) {
    if (head == NULL) return NULL;
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
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
