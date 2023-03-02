#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node  *next;    
};
typedef struct node node_t ;

void printlist( node_t *head ){
    node_t *temporary = head;

    while(temporary != NULL){
        printf("%d - ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}

node_t *create_new_node (int value){
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;

}

node_t *insert_at_head(node_t *head, node_t *node_to_insert){
    node_to_insert->next = head;
    return node_to_insert;
}

node_t *find_node(node_t *head, int value){
    node_t *tmp = head;
    while ( tmp!=NULL){
        if(tmp->value==value){
            return tmp;
            tmp = tmp->next;
        }
    }
    return NULL;
}

int main(){
    node_t *tmp;
    node_t *head = NULL;

    for(int i=0;i<25;i++){
        tmp = create_new_node(i);
        head = insert_at_head(head,tmp);
        
    }

    tmp = find_node(head, 13);
    printf("%d", tmp->value);
    

    // for(int i=0;i<25;i++){
    //     tmp = create_new_node(i);
    //     tmp->next = head;
    //     head = tmp;
    // }

    // tmp = create_new_node(32);
    // head = tmp;
    // tmp = create_new_node(8);
    // tmp->next = head;
    // tmp = create_new_node(34);
    // tmp->next = head;
    // head = tmp;



    

    printlist(head);
    
    return 0;
} 
