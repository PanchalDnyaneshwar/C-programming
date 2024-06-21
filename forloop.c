#include <stdio.h>
void main(){

    // For Loop in C programming. syntax,  for(intialization; condition; updation){ code}
    // break and continue
    int i;

   for (int  i = 0; i < 5; i++)
   {
    if ( i == 2){
        //break;  for stop the loop
        continue; // for skipping the iteartion in loop.
    }
    {
        /* code */
    }
    
     printf("hello World %d \n" ,i);
   }
   

}