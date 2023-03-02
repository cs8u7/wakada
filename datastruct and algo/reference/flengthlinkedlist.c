#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
 

void push(struct Node** head_ref, int new_data)
{
    struct Node *new_node
        = (struct Node*)malloc(sizeof(struct Node));
 
    /* put in the data  */
    new_node->data = new_data; 
    /* link the old list off the new node */
    new_node->next = *head_ref;
    /* move the head to point to the new node */
    *head_ref = new_node;
} 
/* Counts no. of nodes in linked list */
int getCount(struct Node* head)
{
    int count = 0; // Initialize count
    struct Node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
 
    /* Use push() to construct below list
     1->2->1->3->1  */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
 
    printf("count of nodes is %d", getCount(head));
    return 0;
}