#include<stdio.h>
#include<stdlib.h>

struct Tree_node{
    int value;
    struct Tree_node *right;
    struct Treen_node *left;
};
typedef struct Tree_node tree_node ;

printtab(int level){
    for( int a = 0 ; a < level ; a++ ){
        printf("\t");
    }
}

tree_node *createnote(int value){
    tree_node *temp = malloc(sizeof(tree_node));
    if( temp != NULL ){
        temp->left = NULL;
        temp->right = NULL;
        temp->value = value;
    }
    return temp;
}

void print_tree_advance(tree_node *root, int level){
    if( root == NULL){
        printtab(level);
        printf("---<empty>---\n");
        return;
    }
    else{
        printtab(level);
        printf("value is: %d\n", root->value);

        printtab(level);
        printf("left\n");
        print_tree_advance(root->left,level+1);

        printtab(level);
        printf("right\n");
        print_tree_advance(root->right,level+1);

        printtab(level);
        printf("Done\n");    
    }
}

print_tree(tree_node *root){
    print_tree_advance(root,0);
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