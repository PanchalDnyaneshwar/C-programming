#include <stdio.h>
void main(){

    // Nested if -else and else if ladder
    
    int a,b;
    printf("Enter values for a and b");
    scanf("%d%d", &a, &b);

    if( a>0 && b>0 ){
        if(a>b){
            printf("A is greater than B");
        }
        else if (a<b)
        {
              printf("B is greater than A");
        }
           
        else if (a == b){
            printf("A & B is equal.");
        }
        
    }
    else{
        printf("Your Value is -Ve");
    }
}