#include<stdio.h>
#include<math.h>

int fact(int);

int fact(int n){
    //base condition

    if(n == 1){
        return 1;
    } else{
        return n * fact(n - 1);

    }

}
void main(){

    // Recursion is nothing but function in which call itself for solvind a problem
    // 1. Base condition 2. 
    int n = 4;

    int res = fact(n);
    printf("The factorial of %d is %d", n , res);


}