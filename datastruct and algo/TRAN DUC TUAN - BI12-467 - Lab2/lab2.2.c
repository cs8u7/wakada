#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    char name[10];
    struct node *next;
};
typedef struct node noder ;

noder *create_new_node (int value){
    noder *result = malloc(sizeof(noder));
    result->value = value;
    result->next = NULL;
    printf("what is the name of car %dth\n",value);
    scanf("%c",result->name);
    return result;

}

noder *insert_at_head(noder *head, noder *node_to_insert){
    node_to_insert->next = head;
    return node_to_insert;
}

void printlist( noder *head ){
    noder *temp = head;
    while(temp != NULL){
        printf("the car in %dth name is %s \n", temp->value, temp->name);
        temp = temp->next;
    }
    printf("\n");
}

void addnode (noder *head, noder *tmp,int count){
    int add=1;
    while(add==1){
        count = count + 1;
        tmp = create_new_node(count);
        head = insert_at_head(head,tmp);
        printf("do you want to add a car? enter 0 to stop and 1 to countinue:\n");
        scanf("%d",&add);
    }
    
}

int main(){
    noder *tmp;
    noder *head = NULL;
    int count = 10;
    
    printf("assume that the train has 10 cars at the beginning\n");

    for(int i=10;i>0;i--){
        tmp = create_new_node(i);
        head = insert_at_head(head,tmp);
        
    }

    addnode(head,tmp,10);
    printf("the length of train is: %d\n",count);

    printlist(head);
}