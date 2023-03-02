#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int check_prime( int prime ){
   if( prime < 2 ){
      return 0;
   }
   else{
      int count = 0;
      for( int i = 2 ; i <= prime ; i++ ){
         if( prime % i == 0 ){
            count++;
         }
      }
      if( count == 1 ){
         return 1;
      }
      else{
         return 0;
      }
   }
   
}

int main(){
   //Enter p
   int check;
   int p;
   printf("Enter p: ");
   scanf("%d", &p);
   while( check_prime(p) == 0 ){
      printf("Failed, Enter p again!: ");
      scanf("%d", &p);
   }
   //Enter p
   int q;
   printf("Enter p: ");
   scanf("%d", &q);
   while( check_prime(q) == 0 ){
      printf("Failed, Enter p again!: ");
      scanf("%d", &q);
   }
   //compute n,phi, e, d
   int n,phi;
   n = q*p;
   phi = (p-1)*(q-1);
   printf("use standard e(1) or not(0):");
   int e, e_sus;
   scanf("%d",&e_sus);
   if(e_sus == 1){
      e = pow(2,16) + 1;
   }
   else if( e_sus == 0 ){
      printf("Enter e:");
      scanf("%d",&e);
   }
   else{
      printf("Fail!");
      exit(0);
   }
   printf("use standard d(1) or not(0):");
   int d, d_sus;
   scanf("%d",&d_sus);
   if(d_sus == 1){
      for( int i = 1 ; i < phi ; i++ ){
         check = e*i;
         if( check % phi == 1 ){
            d = i;
         } 
      }
   }
   else if( d_sus == 0 ){
      printf("Enter e:");
      scanf("%d",&d);
   }
   else{
      printf("Fail!");
      exit(0);
   }
   //decript and encript 
   int chose,c,m;
   printf("Do you want decript(0) or encript(1)?\n");
   scanf("%d",&chose);
   if( chose == 1 ){
      printf("Enter string massage:\n");
      scanf("%d",&m);
      check = pow(m,e);
      c = check % n;
      printf("Cipher string is:%d\n",c);
   }
   else if( chose == 0 ){
      printf("Enter string chipher:\n");
      scanf("%d",&c);
      check = pow(c,d);
      for( int i = 1 ; i < phi ; i++ ){
         if( check % n == i % n ){
            m = i;
         } 
      }
      printf("Message string is:%d\n",m);
   }
   else{
      printf("Fail!");
      exit(0);
   }
}