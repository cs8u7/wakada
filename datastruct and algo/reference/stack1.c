#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

#define STACK_LENGTH 5
#define EMPTY -1
#define STACK_EMPTY INT_MIN

int mystack[STACK_LENGTH];
int top = EMPTY; 

bool push (int value){
    if( top >= STACK_LENGTH -1 ){
        return false;
    }
    top ++;
    mystack[top] = value;
    return true;
}

int pop (){
    if ( top == EMPTY){
        return STACK_EMPTY;
    }
    int result = mystack[top];
    top--;
    return result;
}

int main(){
    push(12);
    push(23);
    push(34);
// && t != STACK_EMPTY
    int t;
    while ((t == pop()) ){
        printf("t = %d\n",t);
    }
}