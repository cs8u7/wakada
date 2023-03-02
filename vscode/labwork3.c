#include <stdio.h>
#include <math.h>

int main(){

    //Ex1 

    int u , s ;
    printf("enter u\n");
    scanf("%d", &u); 
    printf("the divisiors of u is: ");
    for( s = 1 ; s <= u ; s++){
        if( u % s == 0 ){
            printf("%d ",s);
        }
    }

    //Ex2

    int num1 , k , m;
    printf("\nenter a number\n");
    scanf("%d", &num1);
    for( k = 1 ; k <= num1 ; k++ ){
        int count = 0;
        for( m = 2 ; m <= k/2 ; m++ ){
            if(k % m == 0){
                count++;
            }
        }
        if(count==0 && k != 1){
            printf("%d ",k);
        }
    }

    //Ex3

    double lim , sub , core ;
    double value = 0 ;
    printf("\nenter a number\n");
    scanf("%lf", &lim);
    for( sub = 1 ; sub <= lim ; sub++ ){
        core = 1 / sub;
        value = core + value;
    }
    printf("the sum of the sequence is: %.4lf\n",value);

    //Ex4

   double a , b , c , d , e , modulus , pro1 , pro2 ;
    printf("enter a number\n");
    scanf("%lf", &modulus);
    if( modulus > 0 && modulus < 10){
        printf("the product is %.0lf\n",modulus);
    }
    else if ( modulus >= 10 && modulus < 100 )
    {
        a = floor( modulus / 10 ) ;
        b = modulus - a * 10 ;
        pro1 = a * b ;
        printf("the product is %.0lf\n",pro1);
    }
    else if ( modulus >= 100 && modulus < 1000 ){
        c = floor( modulus / 100 ) ;
        d = floor( (modulus - c * 100) / 10 ) ;
        e = modulus - c * 100 - d * 10 ;
        pro2 = ( c * d ) * e ;
        printf("the product is %.0lf\n",pro2); 
        
    }

    //Ex5

    int fe , au ;
    int lava = 1 ;
    int ob = 0 ;
    int sto = 0 ;
    printf("enter a number\n");
    scanf("%d", &fe);
    printf("the Fibonnacci series is: \n");
    for( au = 1 ; au <= fe ; au++ ){
        ob = sto ;
        sto = lava ;
        lava = sto + ob ;
        printf("%d ",lava) ;
    }

    //Ex6

    int fac = 1;
    int roll , num ;
    printf("enter a number\n");
    scanf("%d", &roll);
    for( num = 1 ; num <= roll ; num++ ){
        fac = fac * num ;
    }
    printf("the factorial of that number is: %d \n",fac);

    return 0 ;
}