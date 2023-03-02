#include<stdio.h>
#include<math.h>

void findMax( int n[100] , int *max ){
    for( int b = 0 ; b < *max -1 ; b++ ){
        if ( n[b] < n[b+1] ){
            n[0] = n[b];
        }
    }
    printf("Max is: %d", n[0]);
}

int main() {
    int n[100] , *max    ;
    printf("Enter # of sequence n: ");
    scanf("%d", max);
    printf("Enter sequence n: ");
    for( int a = 0 ; a < *max ; a ++){
        scanf("%d", &n[a]);
    }
    findMax(n[100],*max);
}