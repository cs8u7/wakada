#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int level = 1, level_ex = 1, count = 1;
int odd = 0, even = 1;

struct Tree_node{
    int value;
    struct Tree_node *right;
    struct Treen_node *left;
};
typedef struct Tree_node tree_node ;

void intialize_array(int array[100], int length ,int height){
    printf("Enter elements of array: \n");
    for( int b = 1 ; b <= length ; b++ ){
        scanf("%d", &array[b]);
    }
    if( log2(length) < height - 1 ){
       for( int c = length + 1 ; c <= 2 * (height - 1) ; c++ ){
        array[c] = 999;
    } 
    }
}

void sort_leaves(tree_node *array_node[100], int array[100]){
    sort_tree(array_node[level+1]->left);                  
    sort_tree(array_node[level+1]->right);       
    if( array_node[level] == NULL ){
        count++;
        array_node[level] = array[count];
    }
}

void intialize_tree(tree_node *array_node[100], int array[100], int number_of_node, int height){
    for( int d = 1 ; d <= number_of_node ; d++ ){
        array_node[d]->left = NULL;
        array_node[d]->right = NULL;
        array_node[d]->value = d ;
    }
    for( int e = 1 ; e < height - 1 ; e++ ){
        array_node[e]->left = &array_node[2*e];
        array_node[e]->right = &array_node[2*e+1];
    }
    sort_leaves(array_node[100],array[100]);
}

void print_tree(tree_node *array_node[100]){
    printf("value is: %d\n", array_node[level]->value);
    printf("left\n");
    print_tree(array_node[level+1]->left);
    printf("left\n");
    print_tree(array_node[level+1]->right);
    printf("Done\n");    
}

void search_tree(tree_node *array_node[100], int search){
    if (array_node[level_ex]->value == search ){
        print_tree(array_node);
    }
    print_tree(array_node[level_ex+1]->left);
    print_tree(array_node[level_ex+1]->right);
    printf("Done\n");    
}

void search_tree_sheld(tree_node *array_node[100]){
    int search;
    printf("Enter number to search: ");
    scanf("%d", &search);
    search_tree(array_node[100],search);
}

int main(){
    int array[100], length, height, number_of_node = 0;
    tree_node *array_node[100];
    printf("Enter length of array: ");
    scanf("%d", &length);
    height = ceil(log2(length)) + 1;
    for( int a = 1 ; a <= height ; a++ ){
        number_of_node = number_of_node + a;
    }
    //intialize_array(array[100],length,height);
    //intialize_tree(number_of_node,height);
    //print_tree(array_node[100]);
}