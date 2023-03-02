#include<stdio.h>
#include<math.h>

int max_loaded = 0 ,max_store, min_loaded = 0, min_store, count = 0;
int array_length, reverse_step, reverse_store;

void find_max(int a[100], int n ){
    max_store = 0;
    for( int c = min_loaded ; c < n - max_loaded ; c++ ){
        if( a[c] > max_store ){
            max_store = a[c];
            count = c;
        }
    }
    if( max_store != 0){
        for( int k = count ; k < n - max_loaded - 1 ; k++ ){
            a[k] = a[k+1];  
        }
        a[n-max_loaded] = max_store;
        max_loaded++;
    }
}

void find_min(int a[100], int n ){
    min_store = 99999999;
    for( int i = max_loaded ; i < n - min_loaded ; i++ ){
        if( a[i] < min_store ){
            min_store = a[i];
            count = i;
        }
    }    
    if( max_store != 0){
        for( int j = count ; j < n - min_loaded - 1 ; j++ ){
            a[j] = a[j+1];  
        }
        a[n-min_loaded] = min_store;
        min_loaded++;
    }
}

void reverse_array( int a[100], int n){
    for( int g = 0 ; g < reverse_step ; g++ ){
        reverse_store = a[g];
        a[g] = a[n-g];
        a[n-g] = reverse_store ;
    }
}

void sort_with_wired_type(int a[100], int n){
    array_length = max_loaded + min_loaded;
    reverse_step = floor(n/2);
    while ( min_loaded + max_loaded < 9){
        find_max(a,n);
        reverse_array(a,n);
        find_min(a,n);
    }
    printf("\nArray after sort is: ");
    for( int u = 0 ; u < n ; u++ ){
        printf("%d ", a[u]);
    }
}

int main(){
    int a[100] ,n ;
    printf("enter size of array: ");
    scanf("%d", &n);    
    printf("enter elements of array: \n");
    for( int s = 0 ; s < n ; s++ ){
        scanf("%d", &a[s]);
    }
    sort_with_wired_type(a,n);
}

//Complexity Analysis:

//Best Case: O(n) = 0, all numbers are in position on increasing trend.
//Average Case: O(n) = n, half of array which contain numbers are higher than others is on the place for the lower ones. Because when the for loop is activated, only chosed half array is scanned and the others do not active if statement in for loop. 
//Worst Case: O(n) = n,as the same as average case but half of numbers in array is on the right site for them, big on big site and vice versa.