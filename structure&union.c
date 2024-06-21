#include <stdio.h>
#include <string.h>
struct form
{
    char name[50];
    char mobile[15];
    char email[25];
    float age;
};
union form1
{
    char name[50];
    char mobile[15];
    char email[25];
    float age;
};

void main()
{
    // structure & union user defined data types that allow group together related data items of different types.

    struct form dnyanu; // variable creation use seperate memory for every variable
    {
        dnyanu.age = 24;
        strcpy(dnyanu.name, "Dnyaneshwar Panchal");
        strcpy(dnyanu.mobile, "7743918312");
        strcpy(dnyanu.email, "dnyaneshwarpanchal@gmail.com");
    };

    printf("%s\n", dnyanu.name);
    printf("%s\n", dnyanu.email);
    printf("%s\n", dnyanu.mobile);
    printf("%f\n", dnyanu.age);

    union form1 dnyanu1; // variable creation occupied large size memory variable.
    {
        dnyanu1.age = 24;
        strcpy(dnyanu1.name, "Dnyaneshwar Panchal");
        strcpy(dnyanu1.mobile, "7743918312");
        strcpy(dnyanu1.email, "dnyaneshwarpanchal@gmail.com");
    };

    printf("%s\n", dnyanu.name);
    printf("%s\n", dnyanu.email);
    printf("%s\n", dnyanu.mobile);
    printf("%f\n", dnyanu.age);

    // checking size of union and structure.

    printf("%ld \n", sizeof(dnyanu));
    printf("%ld \n", sizeof(dnyanu1));

}