#include <stdio.h>
#include <math.h>

int findGreatest(int , int , int );

void main ()
{
    int a,b,c;

    printf("Enter the value for a,b,c \n");
    scanf("%d %d %d" , &a,&b,&c);

    printf ( " the greater no. is %d \n", findGreatest(a,b,c));

}

int findGreatest(int x , int y, int z){
    printf("Calculating");
    if(x>y && x>z){
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    else{
        return z;
    }
    
}
