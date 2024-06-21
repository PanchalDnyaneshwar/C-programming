#include<stdio.h>
#include<string.h>
void main(){
     
     //CONCATINATIONN OF STRINGS
     char s1[] = "LAST MOMENT";
     char s3[35];
    //  char s2[] = " TUATIONS";

    // printf("%s\n", strcat(s1));

    //Calculate Lenth of Strings
    //printf("%ld\n",strlen(s1)); //not count null char.
    
    //Copy data 
    //  strcpy(s3,s1);
    // printf("%s\n",s3);

    //gets substring into the srings.

    // printf("%s\n", strchr(s1,'O'));
    //   printf("%s\n", strrchr(s1,'O')); //count from last char.

    //word charcter with word
    printf("%s\n", strstr(s1, "MOMENT"));

    //compare strings with lexicography method in c
    char c[] = "DMP";
    char c1[] = "Dnyaneshwar Madhukar Panchal";
    int res = strcmp(c,c1);
    printf("%d\n",res);

}