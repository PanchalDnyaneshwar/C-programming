#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    // The topic is array.
    //syntax data_type array_name [size] = { values};
    
    // int class10th[10] = {101,102,103,104,105};
    // class10th[5] = 106;
    // class10th[6] = 107;
    // class10th[2] = 114;
    // printf("%d \n", class10th[2]);
    // printf("%d \n", class10th[6] ,"\n\n");

 // user input in array.
  
   int my_array[10];

   for ( int i= 0; i< 10; i++ ){
    printf("Enter the %d index Value: ",i);
    scanf("%d", &my_array[i]);
   }

   printf( " The array is the values addind is /n");
   for ( int i= 0; i< 10; i++ ){
    printf("/n Entered the %d  Value is:",my_array[i]);
   }



}