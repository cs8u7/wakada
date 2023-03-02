#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int x,e,m;
    printf("Enter x^e mod m for step of (x,e,m):\n");
    scanf("%d%d%d",&x,&e,&m);
    //convert e to binary
        int a[32];
        for(int i = 0 ; e > 0 ; i++ ){
            a[i] = e % 2;
            e = e/2;
        }
    //find base remainder 
        int mod,base;
        mod = x % m;
        base = mod;
    //find result
        for( int k = 1 ; k < sizeof(a) ; k++ ){
            mod = power(mod,2);
            if( a[k] == 1 ){
                mod = mod * base;
            } 
        }
        printf("The key is: &d\n",mod);
}