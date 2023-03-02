#include<stdio.h>
#include<string.h>

char x[25] = "1111101010101010101";
char y[25] = "1100110011001100110011";
char z[25] = "11100001111000011110000";
// char empty[25] = "\0";
int check = 0;

char cut_the_tail( char sus[25] ){
    int n;
    n = strlen(sus)-1;
    return sus[n];
}

char check_major_to_key(char red[25], char yellow[25], char blue[25]){
    check = atoi(red) + atoi(blue) + atoi(yellow);
    if( check < 2 ){
        // TODO major is 0

    }
    else{
        // TODO major is 1

    } 
}

int main(){

    int n;
    printf("Enter the length of key steam: ");
    n = 10;
    // scanf("%d", &n);
    for( int i = 0 ; i < n ; i++ ){

    } 
    }
