/* *****WELCOME*****
Writer :- Manoj kumar
Date   :- 15/Sep/2023
Chapter:- Operators
*/
#include <stdio.h>
int main()
{
    int a = 80, b = 20, c;
    int x = 5, y = 5, z = 10, result;
    // Working of Arithmetic Operators
    printf("\n**********WELCOME**********\n");
    printf("\nArithmetic Operators :-\n\n");
    c = a + b;
    printf("a+b is = %d\n", c);
    c = a - b;
    printf("a-b is = %d\n", c);
    c = a * b;
    printf("a*b is = %d\n", c);
    c = a / b;
    printf("a/b is = %d\n", c);
    c = a % b;
    printf("Remainder when divided by b = %d\n", c);
    // Working of Increment And Decrement Operators
    printf("\nIncrement And Decrement Operators :-\n\n");
    printf("++x = %d\n", ++a);
    printf("--y is = %d\n", --b);
    // Working of assignment Operators
    printf("\nAssignment Operators :-\n\n");
    c = a;
    printf("c = %d\n", c);
    a += b;
    printf("a = %d\n", a);
    a -= b;
    printf("a = %d\n", a);
    a *= b;
    printf("a = %d\n", a);
    a /= b;
    printf("a = %d\n", a);
    a %= b;
    printf("a = %d\n", a);
    // Working Relational Operators
    printf("\nRelational Operators :-\n\n");
    printf("%d == %d is %d \n", x, y, x == y);
    printf("%d == %d is %d \n", x, z, x == z);
    printf("%d > %d is %d \n", x, y, x > y);
    printf("%d > %d is %d \n", x, z, x > z);
    printf("%d < %d is %d \n", x, y, x < y);
    printf("%d < %d is %d \n", x, z, x < z);
    printf("%d != %d is %d \n", x, y, x != y);
    printf("%d != %d is %d \n", x, z, x != z);
    printf("%d >= %d is %d \n", x, y, x >= y);
    printf("%d >= %d is %d \n", x, z, x >= z);
    printf("%d <= %d is %d \n", x, y, x <= y);
    printf("%d <= %d is %d \n", x, z, x <= z);
    // Working Of Logical Operators
    printf("\nLogical Operators :-\n\n");
    result = (x == y) && (z > y);
    printf("(x == y) && (z > y) is %d \n", result);
    result = (x == y) && (z < y);
    printf("(x == y) && (z < y) is %d \n", result);
    result = (x == y) || (z < y);
    printf("(x == y) || (z < y) is %d \n", result);
    result = (x != y) || (z < y);
    printf("(x != y) || (z < y) is %d \n", result);
    result = !(x != y);
    printf("!(x != y) is %d \n", result);
    result = !(x == y);
    printf("!(x == y) is %d \n", result);
    // Working of sizeof Operators
    printf("\nsizeof Operators :-\n\n");
    printf("short int is %2d bytes\n", sizeof(short int));
    printf("int is %2d bytes\n", sizeof(int));
    printf("int* is %2d bytes\n", sizeof(int *));
    printf("long int is %2d bytes\n", sizeof(long int));
    printf("long int* is %2d bytes\n", sizeof(long int *));
    printf("signed int is %2d bytes\n", sizeof(signed));
    printf("unsigned int is %2d bytes\n", sizeof(unsigned int));
    printf("\n");
    printf("float is %2d bytes\n", sizeof(float));
    printf("float* is %2d bytes\n", sizeof(float *));
    printf("double is %2d bytes\n", sizeof(double));
    printf("double* is %2d bytes\n", sizeof(double *));
    printf("long double is %2d bytes\n", sizeof(long double));
    printf("\n");
    printf("signed char is %2d bytes\n", sizeof(signed char));
    printf("char is %2d bytes\n", sizeof(char));
    printf("char* is bytes\n", sizeof(char *));
    printf("unsigned char is %2d bytes\n", sizeof(unsigned char));
    printf("\nContributed By 'AMIT RAJ'\n\n");
    printf("\n----------THANK YOU----------\n\n");
    return 0;
}