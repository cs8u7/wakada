//set count, ex_count, a, store
//call check_prime(k){
//count <- 0
//for i <- 2 to k step 1 do 
//if k mod i = 0
//count++
//if count == 1
//return k
//else
//for j <- k to 2 step 1 do
//             if( k % j == 0 ){
//                 ex_count = 0;
//                 for( int t = 2 ; t <= j ; t++ ){
//                     if( j % t == 0){
//                         ex_count++;
//                     }
//                 }
//                 if( ex_count == 1 ){
//                     store = j;
//                 }
//             }
//         }
//         return store;
//     }
// }    
// void Divisor( int n ){
//     if( n == check_prime(n) ){
//         printf("%d", n);
//     }
//     else{
//         Divisor( n / check_prime(n) );
//     }
// }  

#include<stdio.h> 
int count, ex_count, a, store;
 
int check_prime( int k ){
    count = 0;
    for( int i = 2 ; i <= k ; i++ ){
       if( k % i == 0 ){
           count++;
       }
    }

    if( count == 1){
       return k;
    }
    else{
        for( int j = k ; j > 1 ; j-- ){
            if( k % j == 0 ){
                ex_count = 0;
                for( int t = 2 ; t <= j ; t++ ){
                    if( j % t == 0){
                        ex_count++;
                    }
                }
                if( ex_count == 1 ){
                    store = j;
                }
            }
        }
        return store;
    }
}    

void Divisor( int n ){
    if( n == check_prime(n) ){
        printf("%d", n);
    }
    else{
        Divisor( n / check_prime(n) );
    }
}

int main(){
    int n;
    printf("Enter number n: ");
    scanf("%d", &n);
    printf("N = ");
    Divisor(n);
}

