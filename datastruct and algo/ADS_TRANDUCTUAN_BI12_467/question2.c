// #include<stdio.h>
// int result_array1[20],result_array2[20],result_array3[20],n;
// int a = 0, b = 0, c = 0;
// int pivot;

// struct Node{
//     int value;
//     int *next
// };

// typedef struct Node node;

// node find_triangle(node array1[a],node array2[b],node array3[c]){
//     if ( a < n && b == 0 && c == 0 ){
//         if( array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]){
//         pivot++;
//         result_array1[pivot] = array1[a];
//         result_array2[pivot] = array2[b];
//         result_array3[pivot] = array3[c];
//         }
//         find_triangle(array1[a+1],array2[b],array3[c]);
//     }
//     else if ( a == n && b < n && c == 0){
//         a = n;
//         if( array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]){
//         pivot++;
//         result_array1[pivot] = array1[a];
//         result_array2[pivot] = array2[b];
//         result_array3[pivot] = array3[c];
//         }
//         find_triangle(array1[a],array2[b+1],array3[c]);
//     }
//     else if ( a == n && b == n && c < n){
//         a = n;
//         b = n;
//         if( array1[a] + array2[b] > array3[c] && array1[a] + array3[c] > array2[b] && array3[c] + array2[b] > array1[a]){
//         pivot++;
//         result_array1[pivot] = array1[a];
//         result_array2[pivot] = array2[b];
//         result_array3[pivot] = array3[c];
//         }
//         find_triangle(array1[a],array2[b],array3[c+1]);
//     }
//     else( a == n && b == n && c == n){
//         printf("Number of valid is equal to total choosed cased divided by 6, because from 3 three digit we can create six different numbers which ara have 3 digits");
//         int result;
//         result = pivot / 6;
//         printf("Number of triangles is: %d\n", result);

//     }
// }

// int main (){
//     printf("Enter number of array: \n");
//     if ( n < 3 ){
//         printf("Invalid number!\n");
//     }
//     else{
//         node array1[20],array2[20],array3[20];
//         printf("Enter elements of array: \n");
//     for( int i = 0 ; i < n ; i++ ){
//         scanf("%d", &array1[i].value);
//         array1[i].next = NULL;
//         array2[i].next = NULL;
//         array3[i].next = NULL;
//         array2[i].value = array1[i].value;
//         array3[i].value = array1[i].value;
//     }
    
//     find_triangle(array1[a],array2[b],array3[c]);
//     }

//     return 0;    
// }
