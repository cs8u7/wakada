#include<stdio.h>
#include<math.h>

int checksphenic (int n){
    int num = 1, count ;
    for( int k = 2 ; k < n ; k++ ){
        if( n % k == 0 ){
            for( int j = 2 ; j <= k ; j ++){
                count = 0;
                if( k % j == 0 ){
                    count++;
                }
            } 
            if ( count == 1){
                num = num * k; 
                
            }   
        }        
    }
   
    if ( n == num ){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}    

int main(){
    int n ;
    printf("Enter n: ");
    scanf("%d", &n);
    checksphenic(n);
}