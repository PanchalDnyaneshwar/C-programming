#include<stdio.h>
#include<string.h>
void main (){

    char str[] = "Dnyaneshwar \0 Panchal\0"; //null character.
    printf("%c\n", str[0]); 
      printf("%s\n", str); 

      char str1[50];
    //   scanf("%s\n", str1);
    //   printf("%s",str1); //not include white spaces.
      fgets(str1, sizeof(str1),stdin); //include white spaceses also.
      printf("%s",str1);


}