#include<stdio.h>

int x[25] = {1,1,1,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
int y[25] = {1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
int z[25] = {1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0};
int store;

int check_major(){
    if( x[8] + y[10] + z[10] < 2 ){
        return 0;
    }
    else{
        return 1;
    }
}

int return_bitkey(){
    if( x[18] == y[21] ){
        store = 0;
    }
    else{
        store = 1;
    }
    if( store == z[22] ){
        return 0;
    }
    else{
        return 1;
    }
    
}

void reload_the_1st_bullet(){
    //! x array 
    if( x[18] == check_major() ){
        // TODO shift array
        for( int a = 18 ; a > 0 ; a-- ){
            x[a] = x[a-1];
        }
        // TODO load the miss bullet
        //* XOR 1st
        if( x[18] == x[17] ){
            store = 0;
        }
        else{
            store = 1;
        }
        //* XOR 2nd
        if( store == x[16] ){
            store = 0;
        }
        else{
            store = 1;
        }
        //* XOR 3rd
        if( store == x[13] ){
            x[0] = 0;
        }
        else{
            x[0] = 1;
        }
    }

    //! y array 
    if( y[21] == check_major() ){
        // TODO shift array
        for( int b = 21 ; b > 0 ; b-- ){
            y[b] = y[b-1];
        }
        // TODO load the miss bullet
        //* XOR 
        if( y[21] == y[20] ){
            y[0] = 0;
        }
        else{
            y[0] = 1;
        }
    }

    //! z array 
    if( z[22] == check_major() ){
        // TODO shift array
        for( int c = 22 ; c > 0 ; c-- ){
            z[c] = z[c-1];
        }
        // TODO load the miss bullet
        //* XOR 1st
        if( z[22] == z[21] ){
            store = 0;
        }
        else{
            store = 1;
        }
        //* XOR 2nd
        if( store == z[20] ){
            store = 0;
        }
        else{
            store = 1;
        }
        //* XOR 3rd
        if( store == z[7] ){
            z[0] = 0;
        }
        else{
            z[0] = 1;
        }
    }
}

int main(){

    int n;
    n = 10;
    //printf("Enter n: ");
    //scanf("%d", &n);
    
    printf("Key stream is: ");
    for( int i = 0 ; i < 10 ; i++ ){
        printf("%d", return_bitkey());
        reload_the_1st_bullet();
    }
    printf("\n");

    return 0;
}