#include<stdio.h>
int result_array1[20],result_array2[20],result_array3[20],n;
int a = 0, b = 0, c = 0;
int pivot;
//int limit,mul ;

// int factorio( int k){
//     mul = 1;
//     for( int t = 1 ; t <= k ; t++){
//         mul = mul * t;
//     }
//     return mul;
// }

void find_triangle(int array1[a],int array2[b],int array3[c]){
    if ( a < n && b == 0 && c == 0 ){
        if( array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]){
        pivot++;
        result_array1[pivot] = array1[a];
        result_array2[pivot] = array2[b];
        result_array3[pivot] = array3[c];
        }
        find_triangle(array1[a+1],array2[b],array3[c]);
    }
    else if ( a == n && b < n && c == 0){
        a = n;
        if( array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]){
        pivot++;
        result_array1[pivot] = array1[a];
        result_array2[pivot] = array2[b];
        result_array3[pivot] = array3[c];
        }
        find_triangle(array1[a],array2[b+1],array3[c]);
    }
    else if ( a == n && b == n && c < n){
        a = n;
        b = n;
        if( array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]){
        pivot++;
        result_array1[pivot] = array1[a];
        result_array2[pivot] = array2[b];
        result_array3[pivot] = array3[c];
        }
        find_triangle(array1[a],array2[b],array3[c+1]);
    }
    else( a == n && b == n && c == n){
        printf("Number of valid is equal to total choosed cased divided by 6, because from 3 three digit we can create six different numbers which ara have 3 digits");
        int result;
        result = pivot / 6;
        printf("Number of triangles is: %d\n", result);

    }
}

int main (){
    printf("Enter number of array: \n");
    if ( n < 3 ){
        printf("Invalid number!\n");
    }
    else{
        int array1[20],array2[20],array3[20];
        printf("Enter elements of array: \n");
    for( int i = 0 ; i < n ; i++ ){
        scanf("%d", &array1[i]);
        array2[i] = array1[i];
        array3[i] = array1[i];
    }
    //limit = factorio(n) / (factorio(3) * factorio(n-3));
    find_triangle(array1[a],array2[b],array3[c]);
    }

    return 0;    
}

// Pseudo code:
// input n
// if n < 3
// faile
// else
// input array1[20],array2[20],array3[20]
// set result_array1[20],result_array2[20],result_array3[20],n
// call find_triangle(int array1[a],int array2[b],int array3[c])
// if  a < n && b == 0 && c == 0 
// if array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]
// pivot++;
// result_array1[pivot] = array1[a]
// result_array2[pivot] = array2[b]
// result_array3[pivot] = array3[c]
//
// find_triangle(array1[a+1],array2[b],array3[c]);
// 
// else if  a == n && b < n && c == 0)
// a <- n
// if array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]
// pivot++
// result_array1[pivot] = array1[a]
// result_array2[pivot] = array2[b]
// result_array3[pivot] = array3[c]
// 
// find_triangle(array1[a],array2[b+1],array3[c])

// else if a == n && b == n && c < n
// a = n
// b = n
// if array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]
// pivot++
// result_array1[pivot] = array1[a]
// result_array2[pivot] = array2[b]
// result_array3[pivot] = array3[c]
// 
// find_triangle(array1[a],array2[b],array3[c+1])
// 
// else( a == n && b == n && c == n)
// printf("Number of valid is equal to total choosed cased divided by 6, because from 3 three digit we can create six different numbers which ara have 3 digits");
// int result
// result <- pivot / 6;
// printf("Number of triangles is: %d\n", result)

//
//

// COMPLEXITY

//Best Case: O(n) = n, all numbers are in position and we just choose it and we only collect the right anser.
//Average Case: O(n) = n, same to the best case but the first haft or back haft is on position
//Worst Case:  O(n) = n, all numbers are in random position