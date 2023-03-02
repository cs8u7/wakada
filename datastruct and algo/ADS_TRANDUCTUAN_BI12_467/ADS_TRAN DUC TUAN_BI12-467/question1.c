#include<stdio.h>
#include<stdbool.h>

// Pseudo-code
// input d_len
// input q_len
// set d_array[d_len]
// set q_array[q_len]
// set o_array[q_len]
// set count <- 0
// for i from 1 to d_len step 1 do
//    input d_array[i]
// for i from 1 to q_len step 1 do
//    input q_array[i]
// for i form 1 to q_len step 1 do
//    for j form 1 to d_len step 1 do
//       if q_array[i] == d_array[j] do
//          temp <- j
//          break
//       else 
//          temp <- -1
//    o_array[count] <- temp
//    count++
//  print o_array[q_len]

int recur(int value, int pos, int source[] , int length){
   if( pos >= length ){
      return -1;
   }
   if( value == source[pos]){
      return pos+1;
   }
   else{
      return recur(value,pos+1,source,length);
   }
}

int main(){
   int d_len;
   int q_len;

   printf("Enter length of data array D: ");
   scanf("%d", &d_len); 
   while(1){
      printf("Enter length of query array Q: ");
      scanf("%d", &q_len);
      if (q_len > d_len){
         printf("Invalid!\n");
      }
      else{
         break;
      }
   }

   int d_array[d_len], q_array[q_len], o_array[q_len];
   printf("Enter numbers in array D:\n");
   for( int i = 1 ; i <= d_len ; i ++ ){
      scanf("%d", &d_array[i]);
   }

   printf("Enter numbers in array Q:\n");
   for( int i = 1 ; i <= q_len ; i ++ ){
      scanf("%d", &q_array[i]);
   }

   for( int i = 0 ; i < q_len ; i++ ){
      printf("%d ", recur(q_array[i], 0, d_array, d_len));
   }
   printf("\n");

   }

// Complexity of my algorithm is: O(n^2)
// Beacause i used a for loop in a for loop. while the complexity of a for loop is n. So the complexity of them is n^2
// I used some input function single loop so the complexity of my algorithm has the form : n^2 + an + b
// reduce that form we have n^2


   
