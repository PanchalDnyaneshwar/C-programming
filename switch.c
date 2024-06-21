#include <stdio.h>
void main(){

    int a,b,choice;

    printf("enter value of A :- \n");
    scanf("%d", &a);
     printf("enter value of B :- \n");
    scanf("%d", &b);

    printf("press 1 for Addition\n");
    printf("press 2 for Substraction\n");
    printf("press 3 for Multiplication\n");
    printf("press 4 for Division\n");
    printf("press 5 for Modulus/remender\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Addition of two numbers is %d\n ",(a + b));
        break;
        case 2:
      printf("Substaction of two numbers is %d\n ",(a - b));
        break;
        case 3:
      printf("Multiplication of two numbers is %d\n ",(a * b));
        break;
        case 4:
      printf("Division of two numbers is %d\n ",(a / b));
        break;
        case 5:
      printf("Modulus of two numbers is %d\n ",(a % b));
        break;
    
    default:
      printf("Invalid Choice");
        break;
    }

}