#include<stdio.h>
void main(){

    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[5][5];
    printf("%d\n",a[2][1]);

    printf("enter the values for the 3*3 array");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
    }

     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}