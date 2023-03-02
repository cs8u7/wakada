#include<stdio.h>
#include<math.h>

int sphenic( int n ){
    if( n > 1 ){
        int count, num, choi = 0;
    for(int a = n ; a > 1 ; a-- ){
        count = 0;
        for( int b = 1 ; b < a ; b++ ){
            if( a % b == 0 ){
                count++;
            }
        }
        if( count == 1 ){
            choi++;
        }
        if( count == 1 && choi <= 3){
            num = a;
        }
    }
    return num * sphenic(num);
    }
    else{
        return 1;
    }
}

int num;

int count = 0, choi, num;

int main(){
        int n;
    printf("Enter number:");
    scanf("%d", &n);
    if( n < 0 ){
        printf("Invalid numbern");
    }
    else{
        if ( n == sphenic(n)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}