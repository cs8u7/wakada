#include <stdio.h>
#include <math.h>

float f( float x){
    // todo 3
    return 2.5 * x ;
}

float g( float x, float y){
    // todo 3
    return y * x ;
}

int fact(int x){
    // todo 4
    if( x > 1 ){
        return x * fact(x-1);
    }
        
    else{
        return 1;
    }
        
}

int power(int x, int n ){
    // todo 5
    int m ;
    if( n != 0 ){
        return x * power(x,n-1);
    }
    else 
    {
        return 1;
    }
    
}

int main(){

    // todo 1 
    
    // int num1 , num2 , raw , exraw ;
    
    // printf("Enter 1st number: \n");
    // scanf("%d", &num1);
    // printf("Enter 2nd number: \n");
    // scanf("%d", &num2);

    // if( num1 == num2 ){
    //     printf("the result is: %d\n", num1);
    // }
    // else if ( num1 > num2 )
    // {
    //     for( int i = 1 ; i <= num2 ; i++ ){
    //         if( num1 % i == 0 && num2 % i == 0 ){
    //             raw = i ;
    //         }
    //     }
    //     printf("the result is: %d\n", raw);
    // }
    // else{
    //     for( int j = 1 ; j <= num1 ; j++ ){
    //         if( num1 % j == 0 && num2 % j == 0 ){
    //             exraw = j ;
    //         }
    //     }
    //     printf("the result is: %d\n", exraw);
    // }

    // todo 2
    
    // int a[1000],o,pi,i,nu,min;
   
    // printf("Enter 4 intergers : \n");
    // for(i=0; i<4; i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    
    // min=a[0];
    // for(i=1; i<4; i++)
    // {
    //      if(min>a[i])
	// 	  min=a[i];   
    // }
    // nu = min;
    // for( o = 1 ; o <= nu ; o++ ){
    //     if( a[0] % o == 0 && a[1] % o == 0 && a[2] % o == 0 && a[3] % o == 0 ){
    //         pi=o;
    //     }
    // }
    // printf("%d\n",pi);
    
    // todo 3 

    // float x , y , fx , gx ;
    // printf("enter x:\n");
    // scanf("%f", &x);
    // printf("enter y:\n");
    // scanf("%f", &y);

    // fx = f(x);
    // gx = g(x,y);

    // printf("the results of equation f(x) is: %.1f\n", fx);
    // printf("the results of equation g(x) is: %.1f\n", gx);

    // todo 4 

    // int x ;
    // printf("enter x:\n");
    // scanf("%d", &x);
    // printf("the value of n! is: %.d\n", fact(x));

    // todo 5

    // * x^n normal 

    // int x , n , gam ;
    // printf("enter x:\n");
    // scanf("%d", &x);
    // printf("enter n:\n");
    // scanf("%d", &n);
    // gam = pow(x,n);
    // printf("the value of x^n is: %.d\n", gam);

    // * x^n recursive function

    // int x , n , gam ;
    // printf("enter x:\n");
    // scanf("%d", &x);
    // printf("enter n:\n");
    // scanf("%d", &n);
    // gam = power(x,n);
    // printf("the value of x^n is: %.d\n", gam);

    return 0 ;
}