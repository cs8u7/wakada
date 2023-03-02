#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node  *next;    
};
typedef struct node node_t ;

void verify_and_remove ( node_t *head ){
    node_t *temp = head;
    int count=0;
    
    while (temp != NULL){
        count++;
        temp = temp->next;
        
        
    }
    if (count = 3)
    {
        printf("all slots are full \n");

    }
    else{
        printf("avariable to insert!\n");
    } 
}

void calculate (){
    int x;
    printf("Enter x: ");
    scanf("%d", x);
    x = 12 * x * x + 16 * x + 24;
    printf("value of whole function: %d\n",x); 
}

void display(){
    printf("12x^2+16x+24\n");
}

int main(){
    node_t a , b, c, *head;
    a.value = 12;
    b.value = 16;
    c.value = 24;
    head = &a;       
    a.next = &b;
    b.next = &c;
    c.next = NULL;   
    verify_and_remove(head);
    calculate();
    display();
    //remove a term
    
    
    return 0;
} 
