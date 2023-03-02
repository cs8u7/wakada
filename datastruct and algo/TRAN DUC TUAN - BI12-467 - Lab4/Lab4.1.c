#include<stdio.h>
#include<math.h>
#include<string.h>

/*
_Pseudo code
input n
if n < 0 
    return false
else
    set int s[20], divisor, count
    sprintf( x, "%d", n) //convert n to string and store in x
    set int k <- strlen(x)
    count <- k - 1
    for b <- 0 to count-1 step 1 do
        divisor <- divisor * 10
    for a <- 0 to count step 1 do
        s[a] <- n / divisor ;
        n <- n - divisor * s[a]
        divisor <- divisor / 10
    set int sum <- 0
    for b <- 0 to k step 1 do
        sum <- sum + s[b]
    done

_Complexity: O(n) = n
*/

void digit_sum (int n){
    int s[20], divisor = 1 ,count = 1;
    char x[20];
    sprintf( x, "%d", n);
    int k = strlen(x);
    count = k - 1 ;
    for( int b = 0 ; b < count ; b++ ){
        divisor = divisor * 10;
    }
    //Analyze divisor = divisor * 10number
    for( int a = 0 ; a <= count ; a++ ){
        s[a] = floor(n / divisor) ;
        n = n - divisor * s[a];
        divisor = divisor / 10;
    }
    //Calculate sum
    int sum = 0;
    for( int b = 0 ; b < k ; b++ ){
        sum = sum + s[b];
    }
    printf("Result of problem is: %d\n", sum);
}

int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    if( n < 0 ){
        printf("Invalid numbern");
    }
    else{digit_sum(n);}
}
