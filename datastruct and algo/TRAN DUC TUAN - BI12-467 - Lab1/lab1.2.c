#include<stdio.h>
#include<math.h>

int showsphenic(int m){
    int num , count ;
    for ( int n = 2 ; n <= m ; n++ ){
        num = 1;        
        for( int k = 2 ; k < n ; k++ ){
            if( n % k == 0 ){
                count = 0;
                for( int j = 2 ; j <= k ; j ++){
                    
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
            printf("%d ", num);
        }
    }    
}


int main() {
    int m ;
    printf("Enter n: ");
    scanf("%d", &m);
    printf("All sphenic numbers less than m is: ");
    printf("\n");
    showsphenic(m);
}