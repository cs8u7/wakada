#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};
typedef struct node Node ;

void link (Node *head, Node *aim){
    Node *temp = head;
    Node *urf = aim;
    while (urf != NULL)
    {
        temp->value = temp->value + urf->value;
        printf("%d\n", temp->value);
        temp = temp->next;
        urf = urf->next;

    }
}   

Node remove (Node *head){
    Node *simp = head;
    free(simp);
    head->next = NULL;

}

int main(){
    Node a , b, c ;
    Node f , d ,e ;
    Node *head;
    Node *aim;
    printf("assume that the polynomial is ax^2+bx^1+cx^0=0\n");
    printf("Enter standard term:\n");
    scanf("%d", &a.value);
    scanf("%d", &b.value);
    scanf("%d", &c.value);
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("Enter new term:\n");
    scanf("%d", &d.value);
    scanf("%d", &e.value);
    scanf("%d", &f.value);
    aim = &d;
    d.next = &e;
    e.next = &f;
    f.next = NULL;

    link(head,aim);
    remove(head);
    printf("after run remove function above, the polynomial left: bx^1+cx^0=0\n");
    int x;
    printf("Enter x: \n");
    scanf("%d",&x);
    x = b.value * x + c.value;
    printf("value of poly funtion is: %d\n", x);
    printf("whole function is: %d * x + %d\n",b.value,c.value);



}