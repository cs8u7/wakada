#include<stdio.h>
#include<math.h>
#include<string.h>

int s;
int sum( int n, int divisor){
    if( n >= 10){
        s = n  / divisor;
        n = n - s * divisor;
        divisor = divisor / 10;
        return s + sum(n,divisor);
    }
    else{
        return n - n/10 ;
    }
}

int main(){
    int n;
    char x[20];
    printf("Enter number:");
    scanf("%d", &n);
    if( n < 0 ){
        printf("Invalid numbern");
    }
    else{
        sprintf( x, "%d", n);
        int k = strlen(x), divisor = 1;
        for( int b = 0 ; b < k-1 ; b++ ){
            divisor = divisor * 10;
        }
        printf("Result of problem is: %d\n", sum(n,divisor));
    }
}

//Complexity: O(n)=n^2