#include <stdio.h>
void main(){

    // Nested if -else and else if ladder

    //check values Which is greater but values ARE MUST be positive.

    int a,b;
    printf("Enter values for a and b");
    scanf("%d%d", &a, &b);

    if( a>0 && b>0 ){
        if(a>b){
            printf("A is greater than B");
        }else{
             printf("B is greater than A");
        }
    }
    else{
        printf("Your Value is -Ve");
    }
}