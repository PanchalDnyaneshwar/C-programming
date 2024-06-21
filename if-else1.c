#include<stdio.h>
void main(){

    int a,b;

    printf(" Enter the value of a and b");
    scanf("%d%d", &a, &b);

    if(a>b){
        printf(" \n A is greater than B ");
    } else{
         printf("\n B is greater than A ");
    }
}