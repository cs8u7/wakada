#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    // todo 1

    // char a[100] , size , c , min , max ;
    // printf("enter the size of series :\n");
    // scanf("%d", &size);
    // printf("enter the elements of series :\n");
    // for( c = 0 ; c < size ; c++ ){
    //     scanf("%d", &a[c]);
    // }   
    // min = max = a[0];
    // for( c = 0 ; c < size ; c++ ){
    //     if( a[c] > a[0]){
    //         max = a[c];
    //     }
    //     if( a[c] < a[0]){
    //         min = a[c];
    //     }
    // }
    // printf("the maximum value is %d\n", max);
    // printf("the minimum value is %d\n", min);

    // todo 2

    // int n ;  
    // int even = 0 ;
    // int odd = 0;
    // printf("Enter n:\n");
    // scanf("%d", &n);
    // for( int i = 0 ; i = n ; i++ ){
    //     if( i % 2 == 0){
    //         even = even + 1 ;
    //     }
    //     else{
    //         odd = odd + 1 ;
    //     }
    // }
    // printf("the even sum is %d\n", even);
    // printf("the odd sum is %d\n", odd);

    // todo 3

    // int n , size , j , i , a[100] , temp;
    // printf("Enter size of array: ");
    // scanf("%d", &size);
    // printf("Enter elements of array: \n");
    // for( n = 0 ; n < size ; n++ ){
    //     scanf("%d", &a[n]);
    // }

    // *  bubble sort
    // for( i = 0 ; i <= size  ; i++ ){
    //     for( j = 0 ; j <= size  ; j++ ){
    //         if( a[j] > a[j+1]){
    //             temp = a[j];
    //             a[j] = a[j+1];
    //             a[j+1] = temp ;
    //         }
    //     }
    // }
    // printf("softed array: ")
    // for(  i  = 1 ; i < size + 1 ; i++ ){
    //     printf("%d ", a[i]);
    // }

    // * insertion sort
    // for (i = 1; i < size; i++) {
    //     temp = a[i];
    //     j = i - 1;
    //     while (j >= 0 && a[j] > temp) {
    //         a[j + 1] = a[j];
    //         j = j - 1;
    //     }
    //     a[j + 1] = temp;
    // }
    // for (i = 0; i < n; i++){
    //     printf("%d ", a[i]);
    // }
    
    // * selection sort - NOPE

    // todo 4

    // int n , size , a[100] , temp = 0;
    // printf("Enter size of array: ");
    // scanf("%d", &size);
    // printf("Enter elements of array: \n");
    // for( n = 0 ; n < size ; n++ ){
    //     scanf("%d", &a[n]);
    // }
    // for( n = 0 ; n < size ; n++ ){
    //     temp = temp + a[n];
    // }
    // printf("%d\n", temp);

    // todo 5 - because only square matrixs have determinant so i expect do nxn matrix

    // // int kind , sum = 0 , a[100] , slot , core = 0 , i ;
    // // printf("enter size of matrix: ");
    // // scanf("%d", &kind);
    // // if( kind > 3){
    // //     printf("I am too lazy to calculate this!\n");
    // // }
    // // else{
    // //     switch (kind)
    // //     {
    // //     case 1:
    // //         //  The sum of all the matrix A’s elements
    // //         printf("The sum of all the matrix A elements is %d\n", kind);
    // //         //   Print the transposed matrix of A
    // //         printf("The transposed matrix of A is %d\n", kind);
    // //         //  The Determinant of the matrix A
    // //         printf("The Determinant of the matrix A is %d\n", kind);
    // //         //  The inversed matrix of A
    // //         printf("The inversed matrix of A is %d\n", kind);
    // //         break;
        
    // //     case 2:
    // //         // The sum of all the matrix A’s elements
    // //         printf("enter the element of matrix: A11 A12 A21 A22\n");
    // //         for( i = 0 ; i < 4 ; i++ ){
    // //             scanf("%d", a[slot]);
    // //         }
    // //         for( i = 0 ; i < 4 ; i++ ){
    // //             core = core + a[slot];
    // //         }
    // //         printf("The sum of all the matrix A elements is %d\n", core);
    // //         //  Print the transposed matrix of A
    // //         printf("The the transposed matrix of A is:\n");
    // //         printf("%d\t", a[0]);
    // //         printf("%d\n", a[2]);
    // //         printf("%d\t", a[1]);
    // //         printf("%d\n", a[3]);
    // //         // The Determinant of the matrix A
    // //         printf("The Determinant of the matrix A is %d\n", kind);
    // //         // The inversed matrix of A
    // //         printf("The inversed matrix of A is %d\n", kind);
    // //         break;
    // //     }
    // // }
    


    // todo 6

        char string[20] ;
        printf("enter a string: \n");
        scanf("%s", string);
        strrev(string);
        printf("new string is :%s\n", string);

    // todo 7

    // char a[100], check;
    // int  sus = 0 ;
    // printf("Enter a string: ");
    // fgets( a , sizeof(a), stdin);
    // printf("enter thing which needs to check: ");
    // scanf("%c", &check);
    // printf("the letter %c is at position: ", check);
    // for( int i = 0 ; a[i]!='\0' ; i++){
    //     if( check == a[i]){
    //         sus++;
    //         printf("%d ", i);
    //     }
    // }
    // printf("and have %d letter(s) at all", sus);
    
    // todo 8 

    // char a[100], check ;
    // printf("Enter a string: ");
    // fgets( a , sizeof(a), stdin);
    // printf("enter thing which needs to cut: ");
    // scanf("%c", &check);
    // int len = strlen(a);
    // for( int i = 0 ; i < len ; i++){
    //     if( check == a[i]){
    //         for( int j = i ; j < len ; j++ ){
    //             a[j] = a[j+1];
    //         }
    //     }
    // }
    //printf("%s", a);


    return 0 ;
}