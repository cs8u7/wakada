#include<stdio.h>
#include<stdlib.h>

struct Tree_node{
    int value;
    struct Tree_node *right;
    struct Treen_node *left;
};
typedef struct Tree_node tree_node ;

tree_node *createnote(int value){
    tree_node *temp = malloc(sizeof(tree_node));
    if( temp != NULL ){
        temp->left = NULL;
        temp->right = NULL;
        temp->value = value;
    }
    return temp;
}

void print_tree(tree_node *root){
    if( root == NULL){
        printf("---<empty>---\n");
        return;
    }
    else{
        printf("value is: %d\n", root->value);
        printf("left\n");
        print_tree(root->left);
        printf("left\n");
        print_tree(root->right);
        printf("Done\n");    
    }
}

int main(){
    tree_node *n1 = createnote(10);
    tree_node *n2 = createnote(20);
    tree_node *n3 = createnote(30);
    tree_node *n4 = createnote(40);
    tree_node *n5 = createnote(50);
    
    n1->left = n2;
    n1->right= n3;
    n3->left = n4;
    n3->right= n5;

    print_tree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}