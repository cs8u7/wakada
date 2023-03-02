#include <stdio.h>
#include <math.h>

int recur1(int n){
    if(n>1){
        return recur1(n-1) + 1/(4*n+1);
    }
    else{
        return 1;
    }
}

int recur2(int n){
    if(n>1){
        return recur1(n-1) + 1/(4*n+3);
    }
    else{
        return 1;
    }
}

int main(){
    int n = 10;
    int Sum,Minus;
    Sum = recur1(n);
    Minus = recur2(n);
    int sol;
    sol = 4 * (Sum-Minus);
    
    return 0;
}

