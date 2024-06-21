#include<stdio.h>
#include<string.h>
void main(){

    // pointer is nothing but the variable which store address of another variable.
    // Need of pointer 1. to implement data structures 2.to pass argument by reference 3.accessing array element.

    int num = 10;

    // syntax :- datatype *pointer_name;
    int *ptr = &num; //pointer variable creation

    printf("the value of num is :- %d\n", num);
    printf("the value of num from pointer variable is :- %d\n", *ptr); // for value method 1
    printf("the value of num from pointer variable is :- %d\n", ptr); // for address method 1
     printf("the value address of num  is :- %d\n", &num); // for value method 1
    printf("the value of pointer variable is :- %p\n", ptr); // for address method 1


}