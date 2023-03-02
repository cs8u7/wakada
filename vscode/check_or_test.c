#include<stdio.h>
#include<string.h>

int main(){
    char sus[10] = "apple'";
    int n;
    n = strlen(sus)-1;
    sus[4] = '\0';
    printf("%s", sus);
    printf("enter sus");
}