#include<stdio.h>
#include<string.h>

struct form{
    char name[30];
    char mobile[15];
    char email[30];
    int age;
};

struct form inputValues (){
    struct form c;
    printf("Enter your name\n");
    fgets(c.name, sizeof(c.name), stdin);
    printf("Enter your mobile number..\n");
    fgets(c.mobile, sizeof(c.mobile), stdin);
    printf("Enter your Email id..\n");
    scanf("%s", &c.email);
    printf("Enter your age..\n");
    scanf("%d",&c.age);

    return c;
}

void printValues(struct form d){
    printf("\n%s\n", d.email);
    printf("%s\n", d.name);
    printf("%s\n", d.mobile);
    printf("%d\n", d.age);


}

void main(){
  
//    struct form dnyanu = inputValues();
//    printValues(dnyanu);

 struct form ram = inputValues();
 printValues(ram);
    
}