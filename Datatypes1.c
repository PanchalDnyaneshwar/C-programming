#include <stdio.h>
void main()
{
    // Basic Types

    // Integer

    int a = 10;   // Size 4 Bytes
    short b = 12; // Size 2 Bytes
    long c = 20;  // size 8 bytes

    printf("%d \n", a);
    printf("%d \n", b);
    printf("%ld \n", c);

    // Check each Data Types range as Home-Work

    // Floting Point Numbers (2.2, 2.8)
    float a1 = 2.5;  // Size 4 byte
    double b2 = 3.5; // size 8 byte

    printf("%.20f \n", a1);
    printf("%.20f \n", b2);


  // Character
  // char - keyword
  char Name = 'R';   // Size 1 byte
  printf("%c\n", Name);

  // Enumerated Type
  enum  Days { Sunday, Monday, Tuesday, Wenseday, Thursday, Friday, Saturday };
  //            0         1       2       3          4        5         6

  enum Days today = Saturday;
  printf("%d\n", today);
}