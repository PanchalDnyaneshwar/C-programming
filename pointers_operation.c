#include <stdio.h>
void main(){

    // operations on Poiinter
    int arr[6] = {1,2,3,4,5,6};
    int *ptr = &arr;
    printf("%p\n",ptr);
    printf("%d\n", *ptr);

    ptr--;
    printf("%d\n", *ptr);
    printf("%p\n",ptr);

     ptr = ptr + 2;
    printf("%d\n", *ptr);
    printf("%p\n",ptr);

    for(int i=0; i<6; i++){
        printf("%d\n",*ptr);
        ptr++;
    }


}